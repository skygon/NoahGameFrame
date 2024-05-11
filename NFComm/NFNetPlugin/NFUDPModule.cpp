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

#include "NFUDPModule.h"
#include "NFComm/NFNetPlugin/NFINet.h"

#define BUF_SIZE                        14500
//500

//static void udp_cb(const int sock, short int which, void *arg)
static void udp_cb(intptr_t sock, short int which, void* arg)
{
	NFUDPModule* udpModule = (NFUDPModule*)arg;


	struct sockaddr_in client_addr;
	//socklen_t size = sizeof(client_addr);
	int size = sizeof(client_addr);
	char buf[BUF_SIZE];
	std::string  data(buf);
	//std::cout << std::this_thread::get_id() << " received:" << data.length() << std::endl;

	/* Recv the data, store the address of the sender in server_sin */
	if (recvfrom(sock, buf, sizeof(buf) - 1, 0, (struct sockaddr *) &client_addr, &size) == -1)
	{
		perror("recvfrom()");
		//event_loopbreak();
	}

	std::cout << std::this_thread::get_id() << " received:" << data.c_str() << std::endl;

	/* Send the data back to the client */
	std:string reply = "Hello there.";
	if (sendto(sock, reply.c_str(), reply.length(), 0, (struct sockaddr *) &client_addr, size) == -1 )
	{
		perror("sendto()");
		//event_loopbreak();
	}
}

NFUDPModule::NFUDPModule(NFIPluginManager* p)
{
	m_bIsExecute = true;
	pPluginManager = p;

	mnBufferSize = 0;
	m_pNet = NULL;
}

NFUDPModule::~NFUDPModule()
{

}

bool NFUDPModule::Init()
{
	return true;
}

bool NFUDPModule::AfterInit()
{

	return true;
}

int NFUDPModule::Initialization(const unsigned int nMaxClient, const unsigned short nPort, const int nCpuCount)
{
	m_pNet = NF_NEW NFNet(this, &NFUDPModule::OnReceiveNetPack, &NFUDPModule::OnSocketNetEvent);
	m_pNet->ExpandBufferSize(mnBufferSize);
	m_pNet->UDPInitialization(nMaxClient, nPort, nCpuCount);
	return 0;

	// need to delete later.

	///* Init. event */
	//mxBase = event_init();
	//if (mxBase == NULL)
	//{
	//	printf("event_init() failed\n");
	//	return -1;
	//}

	///* Bind socket */
	///*if (bind_socket(mxBase, &udp_event, nPort, this) != 0)
	//{
	//	printf("bind_socket() failed\n");
	//	return -1;
	//}*/
	//int                 sock_fd;
	//char                flag = 1;
	//struct sockaddr_in  sin;
	//sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
	//if (sock_fd < 0)
	//{
	//	perror("socket()");
	//	return -1;
	//}

	//if (setsockopt(sock_fd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(int)) < 0)
	//{
	//	perror("setsockopt()");
	//	return 1;
	//}

	//memset(&sin, 0, sizeof(sin));
	//sin.sin_family = AF_INET;
	//sin.sin_addr.s_addr = INADDR_ANY;
	//sin.sin_port = htons(nPort);

	//if (::bind(sock_fd, (struct sockaddr*)&sin, sizeof(sin)) < 0)
	//{
	//	perror("bind()");
	//	return -1;
	//}
	//else
	//{
	//	printf("bind() success - [%u]\n", nPort);
	//}

	////event_set(ev, sock_fd, EV_READ | EV_PERSIST, &udp_cb, p);
	//udp_event = event_new(mxBase, sock_fd, EV_READ | EV_PERSIST, &udp_cb, this);
	//if (event_add(udp_event, NULL) == -1)
	//{
	//	printf("event_add() failed\n");
	//}

	////event_base_dispatch(mxBase);
	////event_base_loop(mxBase, EVLOOP_NONBLOCK);

	//return 0;
}

unsigned int NFUDPModule::ExpandBufferSize(const unsigned int size)
{
	if (size > 0)
	{
		mnBufferSize = size;
		if (m_pNet)
		{
			m_pNet->ExpandBufferSize(mnBufferSize);
		}
	}

	return mnBufferSize;
}

void NFUDPModule::RemoveReceiveCallBack(const int msgID)
{

}

bool NFUDPModule::AddReceiveCallBack(const int msgID, const NET_RECEIVE_FUNCTOR_PTR &cb)
{
	return true;
}

bool NFUDPModule::AddReceiveCallBack(const NET_RECEIVE_FUNCTOR_PTR &cb)
{
	mxCallBackList.push_back(cb);

	return true;
}

bool NFUDPModule::AddEventCallBack(const NET_EVENT_FUNCTOR_PTR &cb)
{
	return true;
}

bool NFUDPModule::Execute()
{
	if (!m_pNet)
	{
		return false;
	}

	m_pNet->Execute();

	return true;

	/*if (mxBase)
	{
		event_base_loop(mxBase, EVLOOP_ONCE | EVLOOP_NONBLOCK);
	}

	return true;*/
}

bool NFUDPModule::SendMsgWithOutHead(const int msgID, const std::string &msg, const NFSOCK sockIndex)
{
	return true;
}

bool NFUDPModule::SendMsgToAllClientWithOutHead(const int msgID, const std::string &msg)
{
	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const google::protobuf::Message &xData, const NFSOCK sockIndex)
{
	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const google::protobuf::Message &xData, const NFSOCK sockIndex,
							const NFGUID id)
{
	return true;
}

bool NFUDPModule::SendMsg(const uint16_t msgID, const std::string &xData, const NFSOCK sockIndex)
{
	return true;
}

bool NFUDPModule::SendMsg(const uint16_t msgID, const std::string &xData, const NFSOCK sockIndex, const NFGUID id)
{
	return true;
}

bool NFUDPModule::SendMsgPBToAllClient(const uint16_t msgID, const google::protobuf::Message &xData)
{
	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const google::protobuf::Message &xData, const NFSOCK sockIndex, const std::vector<NFGUID> *pClientIDList)
{
	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const std::string &strData, const NFSOCK sockIndex, const std::vector<NFGUID> *pClientIDList)
{
	return true;
}

NFINet *NFUDPModule::GetNet()
{
	return nullptr;
}

void NFUDPModule::OnReceiveNetPack(const NFSOCK sockIndex, const int msgID, const char *msg, const uint32_t len)
{
	std::map<int, std::list<NET_RECEIVE_FUNCTOR_PTR>>::iterator it = mxReceiveCallBack.find(msgID);
	if (mxReceiveCallBack.end() != it)
	{
		std::list<NET_RECEIVE_FUNCTOR_PTR>& xFunList = it->second;
		for (std::list<NET_RECEIVE_FUNCTOR_PTR>::iterator itList = xFunList.begin(); itList != xFunList.end(); ++itList)
		{
			NET_RECEIVE_FUNCTOR_PTR& pFunPtr = *itList;
			NET_RECEIVE_FUNCTOR* pFunc = pFunPtr.get();

			pFunc->operator()(sockIndex, msgID, msg, len);
		}
	}
	else
	{
		for (std::list<NET_RECEIVE_FUNCTOR_PTR>::iterator itList = mxCallBackList.begin(); itList != mxCallBackList.end(); ++itList)
		{
			NET_RECEIVE_FUNCTOR_PTR& pFunPtr = *itList;
			NET_RECEIVE_FUNCTOR* pFunc = pFunPtr.get();

			pFunc->operator()(sockIndex, msgID, msg, len);
		}
	}
}

void NFUDPModule::OnSocketNetEvent(const NFSOCK sockIndex, const NF_NET_EVENT eEvent, NFINet *pNet)
{

}
