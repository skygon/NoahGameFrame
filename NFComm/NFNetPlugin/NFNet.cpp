/*
            This file is part of: 
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2021 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang
   
   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <string.h>
#include <atomic>

#include "NFNet.h"

#if NF_PLATFORM == NF_PLATFORM_WIN
#include <WS2tcpip.h>
#include <winsock2.h>
#else
#include "NFComm/NFCore/NFException.hpp"

#if NF_PLATFORM == NF_PLATFORM_APPLE
#include <arpa/inet.h>
#endif

#endif

#include "event2/event.h"
#include "event2/bufferevent_struct.h"

/*
Any one who want to upgrade the networking library(libEvent), please change the size of evbuffer showed below:
*MODIFY--libevent/buffer.c
#define EVBUFFER_MAX_READ	4096
TO
#define EVBUFFER_MAX_READ	65536
*/

//1048576 = 1024 * 1024
#define NF_BUFFER_MAX_READ	1048576
#define BUF_SIZE            14500

void NFNet::event_fatal_cb(int err)
{
    //LOG(FATAL) << "event_fatal_cb " << err;

}
void NFNet::conn_writecb(struct bufferevent* bev, void* user_data)
{
    
    //  struct evbuffer *output = bufferevent_get_output(bev);
}

void NFNet::conn_eventcb(struct bufferevent* bev, short events, void* user_data)
{
    NetObject* pObject = (NetObject*)user_data;
    NFNet* pNet = (NFNet*)pObject->GetNet();
	std::cout << "Thread ID = " << std::this_thread::get_id() << " FD = " << pObject->GetRealFD() << " Event ID =" << events <<std::endl;

    if (events & BEV_EVENT_CONNECTED)
    {
        //must to set it's state before the "EventCB" functional be called[maybe user will send msg in the callback function]
        pNet->mbWorking = true;
    }
    else
    {
        if (!pNet->mbServer)
        {
            pNet->mbWorking = false;
        }
    }

    if (pNet->mEventCB)
    {
        pNet->mEventCB(pObject->GetRealFD(), NF_NET_EVENT(events), pNet);
    }

    if (events & BEV_EVENT_CONNECTED)
    {
		struct evbuffer* input = bufferevent_get_input(bev);
		struct evbuffer* output = bufferevent_get_output(bev);
		if (pNet->mnBufferSize > 0)
		{
			evbuffer_expand(input, pNet->mnBufferSize);
			evbuffer_expand(output, pNet->mnBufferSize);
		}
        //printf("%d Connection successed\n", pObject->GetFd());/*XXX win32*/
    }
    else
    {
        pNet->CloseNetObject(pObject->GetRealFD());
    }
}

void NFNet::listener_cb(struct evconnlistener* listener, evutil_socket_t fd, struct sockaddr* sa, int socklen, void* user_data)
{
    
    NFNet* pNet = (NFNet*)user_data;
    bool bClose = pNet->CloseNetObject(fd);
    if (bClose)
    {
        return;
    }

    //限制单个tcp 服务的最大连接数
    if (pNet->mmObject.size() >= pNet->mnMaxConnect)
    {
        
        return;
    }

    struct event_base* mxBase = pNet->mxBase;
    
    struct bufferevent* bev = bufferevent_socket_new(mxBase, fd, BEV_OPT_CLOSE_ON_FREE);
    if (!bev)
    {
        fprintf(stderr, "Error constructing bufferevent!");
        return;
    }


    struct sockaddr_in* pSin = (sockaddr_in*)sa;

    NetObject* pObject = new NetObject(pNet, fd, *pSin, bev);
    pObject->GetNet()->AddNetObject(fd, pObject);

#if NF_PLATFORM != NF_PLATFORM_WIN
    int optval = 1;
    int result = setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &optval, sizeof(optval));
    //setsockopt(fd, IPPROTO_TCP, TCP_CORK, &optval, sizeof(optval));
    if (result < 0)
    {
        std::cout << "setsockopt TCP_NODELAY ERROR !!!" << std::endl;
    }

    int nRecvBufLen = NF_BUFFER_MAX_READ;
	setsockopt( fd, SOL_SOCKET, SO_RCVBUF, ( const char* )&nRecvBufLen, sizeof( int ) );
#endif

    bufferevent_setcb(bev, conn_readcb, conn_writecb, conn_eventcb, (void*)pObject);

    bufferevent_enable(bev, EV_READ | EV_WRITE | EV_CLOSED | EV_TIMEOUT | EV_PERSIST);

    event_set_fatal_callback(event_fatal_cb);
    
    conn_eventcb(bev, BEV_EVENT_CONNECTED, (void*)pObject);
	
    bufferevent_set_max_single_read(bev, NF_BUFFER_MAX_READ);
    bufferevent_set_max_single_write(bev, NF_BUFFER_MAX_READ);
}


void NFNet::conn_readcb(struct bufferevent* bev, void* user_data)
{
    NetObject* pObject = (NetObject*)user_data;
    if (!pObject)
    {
        return;
    }

    NFNet* pNet = (NFNet*)pObject->GetNet();
    if (!pNet)
    {
        return;
    }

    if (pObject->NeedRemove())
    {
        return;
	}

    struct evbuffer* input = bufferevent_get_input(bev);
    if (!input)
    {
        return;
    }

    size_t len = evbuffer_get_length(input);
    unsigned char *pData = evbuffer_pullup(input, len);
    pObject->AddBuff((const char *)pData, len);
    evbuffer_drain(input, len);

    if (pNet->mbTCPStream)
    {
        //for websocket connection
        int len = pObject->GetBuffLen();
        if (len > 0)
        {
            if (pNet->mRecvCB)
            {
                pNet->mRecvCB(pObject->GetRealFD(), -1, pObject->GetBuff(), len);

                pNet->mnReceiveMsgTotal++;
            }

            pObject->RemoveBuff(0, len);
        }
    }
    else
    {
        while (1)
        {
            if (!pNet->Dismantle(pObject))
            {
                break;
            }
        }
    }
}

//////////////////////////////////////////////////////////////////////////

bool NFNet::Execute()
{
    ExecuteClose();

    if (mxBase)
    {
        event_base_loop(mxBase, EVLOOP_ONCE | EVLOOP_NONBLOCK);
    }

    return true;
}


void NFNet::Initialization(const char* ip, const unsigned short nPort, bool bIsDYClient)
{
    mstrIP = ip;
    mnPort = nPort;
    m_bDYClient = bIsDYClient;

    InitClientNet();
}

int NFNet::Initialization(const unsigned int nMaxClient, const unsigned short nPort, const int nCpuCount, bool bIsDYServer)
{
    mnMaxConnect = nMaxClient;
    mnPort = nPort;
    mnCpuCount = nCpuCount;
    m_bDYServer = bIsDYServer;

    return InitServerNet();
}


//使用单独的读回调，方便调试
void NFNet::udp_readcb(struct bufferevent* bev, void* user_data)
{
    NetObject* pObject = (NetObject*)user_data;
    if (!pObject)
    {
        return;
    }
    NFSOCK nFd = pObject->GetRealFD();

    //ULONG ip = pObject->GetClientAddr();

    NFNet* pNet = (NFNet*)pObject->GetNet();
    if (!pNet)
    {
        return;
    }

    if (pObject->NeedRemove())
    {
        return;
    }

    struct evbuffer* input = bufferevent_get_input(bev);
    if (!input)
    {
        return;
    }

    size_t len = evbuffer_get_length(input);
    unsigned char* pData = evbuffer_pullup(input, len);
    pObject->AddBuff((const char*)pData, len);
    evbuffer_drain(input, len);

    if (pNet->mbTCPStream)
    {
        //should not enter here.
    }
    else
    {
        while (1)
        {
            if (!pNet->Dismantle(pObject))
            {
                break;
            }
        }
    }
}

void NFNet::udp_cb(NFSOCK fd, short int which, void* arg)
{
    NFNet* pNet = (NFNet*)arg;
    if (pNet->mmObject.size() >= pNet->mnMaxConnect)
    {

        return;
    }

    struct event_base* mxBase = pNet->mxBase;

    struct bufferevent* bev = bufferevent_socket_new(mxBase, fd, BEV_OPT_CLOSE_ON_FREE);
    if (!bev)
    {
        fprintf(stderr, "Error constructing bufferevent!");
        return;
    }


    struct sockaddr_in empty_addr;
    NetObject* pObject = new NetObject(pNet, fd, empty_addr, bev);
    pObject->GetNet()->AddNetObject(fd, pObject);

    bufferevent_setcb(bev, udp_readcb, conn_writecb, conn_eventcb, (void*)pObject);

    bufferevent_enable(bev, EV_READ | EV_WRITE | EV_CLOSED | EV_TIMEOUT | EV_PERSIST);

    event_set_fatal_callback(event_fatal_cb);

    conn_eventcb(bev, BEV_EVENT_CONNECTED, (void*)pObject);

    bufferevent_set_max_single_read(bev, NF_BUFFER_MAX_READ);
    bufferevent_set_max_single_write(bev, NF_BUFFER_MAX_READ);

}

void NFNet::udp_cb_recv(NFSOCK fd, short int which, void* arg)
{
    NFNet* pNet = (NFNet*)arg;
    if (pNet->mmObject.size() >= pNet->mnMaxConnect)
    {

        return;
    }

    struct event_base* mxBase = pNet->mxBase;
    struct bufferevent* bev = bufferevent_socket_new(mxBase, fd, BEV_OPT_CLOSE_ON_FREE);
    if (!bev)
    {
        fprintf(stderr, "Error constructing bufferevent!");
        return;
    }

    /* Recv the data, store the address of the sender in server_sin */
    struct sockaddr_in client_addr;
    int size = sizeof(client_addr);
    char buf[BUF_SIZE];
    memset(buf, 0, BUF_SIZE);

    //udp 事件回调既有数据可读，因此这里不会阻塞
    int nRecvSize = recvfrom(fd, buf, sizeof(buf) - 1, 0, (struct sockaddr*)&client_addr, &size);
    if (nRecvSize == -1)
    {
        std::ostringstream stream;
        stream << "---- udp recv error ---" << std::endl;
        return;
        //event_loopbreak();
    }

    NetObject* pObject = new NetObject(pNet, fd, client_addr, bev);
    //pObject->GetNet()->AddNetObject(fd, pObject);
    //UDP 不存在连接，fd复用时需要覆盖以保持客户端新的地址和端口
    pObject->GetNet()->AddNetObjectNoCheck(fd, pObject);
    pObject->AddBuff(buf, nRecvSize);

    if (pNet->mbTCPStream)
    {
        //should not enter here.
    }
    else
    {
        while (1)
        {
            if (!pNet->Dismantle(pObject))
            {
                break;
            }
        }
    }

    //bufferevent_setcb(bev, udp_readcb, conn_writecb, conn_eventcb, (void*)pObject);
    //conn_eventcb(bev, BEV_EVENT_CONNECTED, (void*)pObject);

}

int NFNet::UDPInitialization(const unsigned int nMaxClient, const unsigned short nPort, const int nCpuCount)
{
    mnMaxConnect = nMaxClient;
    mnPort = nPort;
    mnCpuCount = nCpuCount;
    m_bDYServer = true; //当前使用场景仅有和大有客户端的通信，直接设置为true

    /* Init. event */
    mxBase = event_init();
    if (mxBase == NULL)
    {
        printf("event_init() failed\n");
        return -1;
    }


    int                 sock_fd;
    char                flag = 1;
    struct sockaddr_in  sin;
    sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock_fd < 0)
    {
        perror("socket()");
        return -1;
    }

    if (setsockopt(sock_fd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(int)) < 0)
    {
        perror("setsockopt()");
        return 1;
    }

    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = htons(nPort);

    if (::bind(sock_fd, (struct sockaddr*)&sin, sizeof(sin)) < 0)
    {
        perror("bind()");
        return -1;
    }
    else
    {
        printf("bind() success - [%u]\n", nPort);
    }

    //event_set(ev, sock_fd, EV_READ | EV_PERSIST, &udp_cb, p);
    udp_event = event_new(mxBase, sock_fd, EV_READ | EV_PERSIST, &udp_cb_recv, this);
    if (event_add(udp_event, NULL) == -1)
    {
        printf("event_add() failed\n");
    }

    //event_base_dispatch(mxBase);
    //event_base_loop(mxBase, EVLOOP_NONBLOCK);

    return 0;
}

unsigned int NFNet::ExpandBufferSize(const unsigned int size)
{
	if (size > 0)
	{
		mnBufferSize = size;
	}
	return mnBufferSize;
}

bool NFNet::Final()
{

    CloseSocketAll();

    if (listener)
    {
        evconnlistener_free(listener);
        listener = NULL;
    }

    if (mxBase)
    {
        event_base_free(mxBase);
        mxBase = NULL;
    }

    return true;
}

bool NFNet::SendMsgToAllClient(const char* msg, const size_t len)
{
    if (len <= 0)
    {
        return false;
    }

	if (!mbWorking)
	{
		return false;
	}

	auto it = mmObject.begin();
    for (; it != mmObject.end(); ++it)
    {
        NetObject* pNetObject = (NetObject*)it->second;
        if (pNetObject && !pNetObject->NeedRemove())
        {
            bufferevent* bev = (bufferevent*)pNetObject->GetUserData();
            if (NULL != bev)
            {
                bufferevent_write(bev, msg, len);

                mnSendMsgTotal++;
            }
        }
    }

    return true;
}


bool NFNet::SendMsg(const char* msg, const size_t len, const NFSOCK sockIndex)
{
    if (len <= 0)
    {
        return false;
    }

	if (!mbWorking)
	{
		return false;
	}

	auto it = mmObject.find(sockIndex);
    if (it != mmObject.end())
    {
        NetObject* pNetObject = (NetObject*)it->second;
        if (pNetObject)
        {
            bufferevent* bev = (bufferevent*)pNetObject->GetUserData();
            if (NULL != bev)
            {
                bufferevent_write(bev, msg, len);

                mnSendMsgTotal++;
                return true;
            }
        }
    }

    return false;
}

bool NFNet::SendMsg(const char* msg, const size_t len, const std::list<NFSOCK>& fdList)
{
	auto it = fdList.begin();
    for (; it != fdList.end(); ++it)
    {
        SendMsg(msg, len, *it);
    }

    return true;
}

bool NFNet::CloseNetObject(const NFSOCK sockIndex)
{
	auto it = mmObject.find(sockIndex);
    if (it != mmObject.end())
    {
        NetObject* pObject = it->second;

        pObject->SetNeedRemove(true);
        mvRemoveObject.push_back(sockIndex);

        return true;
    }

    return false;
}

bool NFNet::Dismantle(NetObject* pObject)
{
    bool bNeedDismantle = false;

    int len = pObject->GetBuffLen();
    int nHeaderLen = 0;
    if (m_bDYClient) {
        //作为客户端和Go 服务通信
        nHeaderLen = NFMsgHead::DY_S_HEAD_LENGTH;
    }
    else if (m_bDYServer) {
        //作为服务端和unity客户端通信
        nHeaderLen = NFMsgHead::DY_C_HEAD_LENGTH;
    }
    else {
        //NF框架内部进程间通信
        nHeaderLen = NFMsgHead::NF_HEAD_LENGTH;
    }

    if (len > nHeaderLen)
    {
        NFMsgHead xHead;
        int nMsgBodyLength = 0;
        
        nMsgBodyLength = DeCode(pObject->GetBuff(), len, xHead, nHeaderLen);

        if (nMsgBodyLength > 0 && xHead.GetMsgID() > 0)
        {
            if (mRecvCB)
            {

#if NF_PLATFORM != NF_PLATFORM_WIN
                try
                {
#endif
                    if (m_bDYClient)
                    {
                        //保留go 服务端返回的header信息到回调函数，用于解析uid house id等关键信息
                        mRecvCB(pObject->GetRealFD(), xHead.GetMsgID(), pObject->GetBuff(), nMsgBodyLength);
                    }
                    else
                    {
                        mRecvCB(pObject->GetRealFD(), xHead.GetMsgID(), pObject->GetBuff() + nHeaderLen, nMsgBodyLength);
                    }
                
#if NF_PLATFORM != NF_PLATFORM_WIN
                }
                catch (const std::exception & e)
                {
                    NFException::StackTrace(xHead.GetMsgID());
                }
                catch (...)
                {
                    NFException::StackTrace(xHead.GetMsgID());
                }
#endif

                mnReceiveMsgTotal++;
            }

			pObject->RemoveBuff(0, nMsgBodyLength + nHeaderLen);

            bNeedDismantle = true;
        }
        else if (0 == nMsgBodyLength)
        {
            

            bNeedDismantle = false;
        }
        else
        {
            
            //pObject->IncreaseError();

            bNeedDismantle = false;

        }
    }

    return bNeedDismantle;
}

bool NFNet::AddNetObject(const NFSOCK sockIndex, NetObject* pObject)
{
    //lock
    return mmObject.insert(std::map<NFSOCK, NetObject*>::value_type(sockIndex, pObject)).second;
}

void NFNet::AddNetObjectNoCheck(const NFSOCK sockIndex, NetObject* pObject)
{
    mmObject[sockIndex] = pObject;
}

int NFNet::InitClientNet()
{
    std::string ip = mstrIP;
    int nPort = mnPort;

    struct sockaddr_in addr;
    struct bufferevent* bev = NULL;

#if NF_PLATFORM == NF_PLATFORM_WIN
    WSADATA wsa_data;
    WSAStartup(0x0201, &wsa_data);
#endif

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(nPort);

    if (evutil_inet_pton(AF_INET, ip.c_str(), &addr.sin_addr) <= 0)
    {
        printf("inet_pton");
        return -1;
    }

    mxBase = event_base_new();
    if (mxBase == NULL)
    {
        printf("event_base_new ");
        return -1;
    }

    bev = bufferevent_socket_new(mxBase, -1, BEV_OPT_CLOSE_ON_FREE);
    if (bev == NULL)
    {
        printf("bufferevent_socket_new ");
        return -1;
    }

    int bRet = bufferevent_socket_connect(bev, (struct sockaddr*)&addr, sizeof(addr));
    if (0 != bRet)
    {
        //int nError = GetLastError();
        printf("bufferevent_socket_connect error");
        return -1;
    }

    NFSOCK sockfd = bufferevent_getfd(bev);
    NetObject* pObject = new NetObject(this, sockfd, addr, bev);
    if (!AddNetObject(0, pObject))
    {
        assert(0);
        return -1;
    }

    mbServer = false;

#if NF_PLATFORM != NF_PLATFORM_WIN
    int optval = 1;
    int result = setsockopt(sockfd, IPPROTO_TCP, TCP_NODELAY, &optval, sizeof(optval));
    //setsockopt(fd, IPPROTO_TCP, TCP_CORK, &optval, sizeof(optval));
    if (result < 0)
    {
        std::cout << "setsockopt TCP_NODELAY ERROR !!!" << std::endl;
    }
	int nRecvBufLen = NF_BUFFER_MAX_READ;
	setsockopt( sockfd, SOL_SOCKET, SO_RCVBUF, ( const char* )&nRecvBufLen, sizeof( int ) );
#endif

    bufferevent_setcb(bev, conn_readcb, conn_writecb, conn_eventcb, (void*)pObject);
    bufferevent_enable(bev, EV_READ | EV_WRITE | EV_CLOSED | EV_TIMEOUT | EV_PERSIST);

    event_set_log_callback(&NFNet::log_cb);

    bufferevent_set_max_single_read(bev, NF_BUFFER_MAX_READ);
    bufferevent_set_max_single_write(bev, NF_BUFFER_MAX_READ);

    int nSizeRead = (int)bufferevent_get_max_to_read(bev);
    int nSizeWrite = (int)bufferevent_get_max_to_write(bev);

    std::cout << "want to connect " << mstrIP << " SizeRead: " << nSizeRead << std::endl;
    std::cout << "SizeWrite: " << nSizeWrite << std::endl;

    return sockfd;
}

int NFNet::InitServerNet()
{
    int nCpuCount = mnCpuCount;
    int nPort = mnPort;

    struct sockaddr_in sin;

#if NF_PLATFORM == NF_PLATFORM_WIN
    WSADATA wsa_data;
    WSAStartup(0x0201, &wsa_data);


#endif
    //////////////////////////////////////////////////////////////////////////

    struct event_config* cfg = event_config_new();

#if NF_PLATFORM == NF_PLATFORM_WIN

	//it is only on Windows, and only when IOCP is in use.
	/*
    if (event_config_set_num_cpus_hint(cfg, nCpuCount) < 0)
    {
        return -1;
    }
	*/
    mxBase = event_base_new_with_config(cfg);
#else

    //event_config_avoid_method(cfg, "epoll");
    if (event_config_set_flag(cfg, EVENT_BASE_FLAG_EPOLL_USE_CHANGELIST) < 0)
    {
        
        return -1;
    }

    mxBase = event_base_new_with_config(cfg);//event_base_new()

#endif
    event_config_free(cfg);

    //////////////////////////////////////////////////////////////////////////

    if (!mxBase)
    {
        fprintf(stderr, "Could not initialize libevent!\n");
        Final();

        return -1;
    }

    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(nPort);

    printf("server started with %d\n", nPort);

    listener = evconnlistener_new_bind(mxBase, listener_cb, (void*)this,
                                       LEV_OPT_REUSEABLE | LEV_OPT_CLOSE_ON_FREE, -1,
                                       (struct sockaddr*)&sin,
                                       sizeof(sin));

    if (!listener)
    {
        fprintf(stderr, "Could not create a listener!\n");
        Final();

        return -1;
    }

    mbServer = true;

    event_set_log_callback(&NFNet::log_cb);

    return mnMaxConnect;
}

bool NFNet::CloseSocketAll()
{
	auto it = mmObject.begin();
    for (; it != mmObject.end(); ++it)
    {
		NFSOCK nFD = it->first;
        mvRemoveObject.push_back(nFD);
    }

    ExecuteClose();

    mmObject.clear();

    return true;
}

NetObject* NFNet::GetNetObject(const NFSOCK sockIndex)
{
	auto it = mmObject.find(sockIndex);
    if (it != mmObject.end())
    {
        return it->second;
    }

    return NULL;
}

void NFNet::CloseObject(const NFSOCK sockIndex)
{
	auto it = mmObject.find(sockIndex);
    if (it != mmObject.end())
    {
        NetObject* pObject = it->second;

        struct bufferevent* bev = (bufferevent*)pObject->GetUserData();

        bufferevent_free(bev);

        mmObject.erase(it);

        delete pObject;
        pObject = NULL;
    }
}

void NFNet::ExecuteClose()
{
    for (int i = 0; i < mvRemoveObject.size(); ++i)
    {
		NFSOCK nSocketIndex = mvRemoveObject[i];
        CloseObject(nSocketIndex);
    }

    mvRemoveObject.clear();
}

void NFNet::log_cb(int severity, const char* msg)
{
    //LOG(FATAL) << "severity:" << severity << " " << msg; 
}

bool NFNet::IsServer()
{
    return mbServer;
}

bool NFNet::Log(int severity, const char* msg)
{
    log_cb(severity, msg);
    return true;
}


bool NFNet::SendMsgWithHeadInfo(const int msgID, const char* msg, const size_t len, const NFSOCK sockIndex, NFMsgHead& stHead)
{
    std::string strOutData;
    int nAllLen = EnCode(stHead, msg, len, strOutData);

    if (nAllLen == len + NFIMsgHead::DY_S_HEAD_LENGTH)
    {
        return SendMsg(strOutData.c_str(), strOutData.length(), sockIndex);
    }

    return false;
}

bool NFNet::SendUDPMsgWithOutHead(const int16_t msgID, const char* msg, const size_t len, const NFSOCK sockIndex)
{
    NetObject* pObject = this->GetNetObject(sockIndex);
    struct sockaddr_in client_addr = pObject->GetClientAddr();
    int size = sizeof(client_addr);

    std::string strOutData;
    int nAllLen = EnCode(msgID, msg, len, strOutData);
    if (nAllLen == len + m_bDYServer ? NFIMsgHead::DY_C_HEAD_LENGTH : NFIMsgHead::NF_HEAD_LENGTH)
    {
        int nSendSize = sendto(sockIndex, msg, len, 0, (struct sockaddr*)&client_addr, size);
        if (nSendSize == -1)
        {
            return false;
        }

    }

    return true;
}


bool NFNet::SendMsgWithOutHead(const int16_t msgID, const char* msg, const size_t len, const NFSOCK sockIndex /*= 0*/)
{
    std::string strOutData;
    int nAllLen = EnCode(msgID, msg, len, strOutData);
    if (nAllLen == len + m_bDYServer ? NFIMsgHead::DY_C_HEAD_LENGTH : NFIMsgHead::NF_HEAD_LENGTH)
    {
        
        return SendMsg(strOutData.c_str(), strOutData.length(), sockIndex);
    }

    return false;
}

bool NFNet::SendMsgWithOutHead(const int16_t msgID, const char* msg, const size_t len, const std::list<NFSOCK>& fdList)
{
    std::string strOutData;
    int nAllLen = EnCode(msgID, msg, len, strOutData);
    if (nAllLen == len + m_bDYServer ? NFIMsgHead::DY_C_HEAD_LENGTH : NFIMsgHead::NF_HEAD_LENGTH)
    {
        return SendMsg(strOutData.c_str(), strOutData.length(), fdList);
    }

    return false;
}

bool NFNet::SendMsgToAllClientWithOutHead(const int16_t msgID, const char* msg, const size_t len)
{
    std::string strOutData;
    int nAllLen = EnCode(msgID, msg, len, strOutData);
    if (nAllLen == len + m_bDYServer ? NFIMsgHead::DY_C_HEAD_LENGTH : NFIMsgHead::NF_HEAD_LENGTH)
    {
        return SendMsgToAllClient(strOutData.c_str(), (uint32_t) strOutData.length());
    }

    return false;
}

//作为客户端和Go server通信使用另外一个重载函数Encode
int NFNet::EnCode(const uint16_t umsgID, const char* strData, const uint32_t unDataLen, std::string& strOutData)
{
    NFMsgHead xHead;
    if (m_bDYServer) {
        xHead.SetMsgID(umsgID, false);
    }
    else
    {
        xHead.SetMsgID(umsgID);
    }
    
    xHead.SetBodyLength(unDataLen);


    uint32_t nHeaderLen = m_bDYServer ? NFIMsgHead::DY_C_HEAD_LENGTH : NFIMsgHead::NF_HEAD_LENGTH;

    /*
    * 这里申请两个用于存储head信息的数组，如果使用share pointer来动态管理，则为了
    * 保证内存不泄露，后续的EnCode函数都需要统一修改，且也不能直接使用append来构造消息。
    * 简便起见，直接申请两个数组。
    */
    char szNFHeader[NFIMsgHead::NF_HEAD_LENGTH] = { 0 };
    char szDYHeader[NFIMsgHead::DY_C_HEAD_LENGTH] = { 0 };
    
    strOutData.clear();
    if (m_bDYServer) {
        xHead.DYEnCodeToClient(szDYHeader);
        strOutData.append(szDYHeader, nHeaderLen);
    }
    else {
        xHead.EnCode(szNFHeader);
        strOutData.append(szNFHeader, nHeaderLen);
    }
    
    
    strOutData.append(strData, unDataLen);

    return xHead.GetBodyLength() + nHeaderLen;
}

// 用于往go server发送消息
int NFNet::EnCode(NFMsgHead& stHeader, const char* strData, const uint32_t unDataLen, std::string& strOutData)
{
    char szHeader[NFIMsgHead::DY_S_HEAD_LENGTH] = { 0 };
    stHeader.DYEnCodeToServer(szHeader);

    strOutData.clear();
    strOutData.append(szHeader, NFIMsgHead::DY_S_HEAD_LENGTH);
    strOutData.append(strData, unDataLen);

    return stHeader.GetBodyLength() + NFIMsgHead::DY_S_HEAD_LENGTH;
}

int NFNet::DeCode(const char* strData, const uint32_t unAllLen, NFMsgHead& xHead, uint32_t nHeaderLen)
{
    uint32_t nRealHeaderLen = 0;

    if (unAllLen < nHeaderLen)
    {
        
        return -1;
    }

    if (m_bDYClient) {
        //decode msg from go server
        nRealHeaderLen = xHead.DYDeCodeFromServer(strData);
    }
    else if (m_bDYServer) {
        //decode msg from dayou client
        nRealHeaderLen = xHead.DYDeCodeFromClient(strData);
    }
    else {
        //decode msg from NF framework
        nRealHeaderLen = xHead.DeCode(strData);
    }

    if (nHeaderLen != nRealHeaderLen)
    {
        
        return -2;
    }

    if (xHead.GetBodyLength() > (unAllLen - nHeaderLen))
    {
        
        return -3;
    }
    
    return xHead.GetBodyLength();
}
