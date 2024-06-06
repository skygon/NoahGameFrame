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
	if (mxReceiveCallBack.find(msgID) == mxReceiveCallBack.end())
	{
		std::list<NET_RECEIVE_FUNCTOR_PTR> xList;
		xList.push_back(cb);
		mxReceiveCallBack.insert(std::map<int, std::list<NET_RECEIVE_FUNCTOR_PTR>>::value_type(msgID, xList));
		return true;
	}

	std::map<int, std::list<NET_RECEIVE_FUNCTOR_PTR>>::iterator it = mxReceiveCallBack.find(msgID);
	it->second.push_back(cb);

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
	bool bRet = m_pNet->SendUDPMsgWithOutHead(msgID, msg.c_str(), msg.length(), sockIndex);
	if (!bRet)
	{
		std::ostringstream stream;
		stream << " SendMsgWithOutHead failed fd " << sockIndex;
		stream << " msg id " << msgID;
		m_pLogModule->LogError(stream, __FUNCTION__, __LINE__);
	}

	return bRet;
}

bool NFUDPModule::SendMsgToAllClientWithOutHead(const int msgID, const std::string &msg)
{
	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const google::protobuf::Message &xData, const NFSOCK sockIndex)
{
	NFMsg::MsgBase xMsg;
	if (!xData.SerializeToString(xMsg.mutable_msg_data()))
	{
		std::ostringstream stream;
		stream << " SendMsgPB Message to  " << sockIndex;
		stream << " Failed For Serialize of MsgData, MessageID " << msgID;
		m_pLogModule->LogError(stream, __FUNCTION__, __LINE__);

		return false;
	}

	NFMsg::Ident* pPlayerID = xMsg.mutable_player_id();
	*pPlayerID = NFToPB(NFGUID());

	std::string msg;
	if (!xMsg.SerializeToString(&msg))
	{
		std::ostringstream stream;
		stream << " SendMsgPB Message to  " << sockIndex;
		stream << " Failed For Serialize of MsgBase, MessageID " << msgID;
		m_pLogModule->LogError(stream, __FUNCTION__, __LINE__);

		return false;
	}

	//SendMsgWithOutHead(msgID, msg, sockIndex);
	NetObject* pObject = m_pNet->GetNetObject(sockIndex);
	struct sockaddr_in client_addr = pObject->GetClientAddr();
	//socklen_t size = sizeof(client_addr);
	int size = sizeof(client_addr);


	int nMsgLen = msg.length();
	int nSendSize = sendto(sockIndex, msg.c_str(), nMsgLen, 0, (struct sockaddr*)&client_addr, size);
	if (nSendSize == -1)
	{
		return false;
	}

	return true;
}

bool NFUDPModule::SendMsgPB(const uint16_t msgID, const google::protobuf::Message &xData, const NFSOCK sockIndex,
							const NFGUID id)
{
	return true;
}

bool NFUDPModule::SendMsg(const uint16_t msgID, const std::string &xData, const NFSOCK sockIndex)
{
	NetObject* pObject = m_pNet->GetNetObject(sockIndex);
	struct sockaddr_in client_addr = pObject->GetClientAddr();
	//socklen_t size = sizeof(client_addr);
	int size = sizeof(client_addr);


	int nMsgLen = xData.length();
	int nSendSize = sendto(sockIndex, xData.c_str(), nMsgLen, 0, (struct sockaddr*)&client_addr, size);
	if (nSendSize == -1)
	{
		return false;
	}

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
