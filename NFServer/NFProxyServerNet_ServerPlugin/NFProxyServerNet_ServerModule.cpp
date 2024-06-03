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
#include "NFProxyServerNet_ServerModule.h"
#include "NFProxyServerNet_ServerPlugin.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFMessageDefine/NFProtocolDefine.hpp"

bool NFProxyServerNet_ServerModule::Init()
{
	this->pPluginManager->SetAppType(NF_SERVER_TYPES::NF_ST_PROXY);

	m_pNetModule = pPluginManager->FindModule<NFINetModule>();
	m_pKernelModule = pPluginManager->FindModule<NFIKernelModule>();
	m_pClassModule = pPluginManager->FindModule<NFIClassModule>();
	m_pNetClientModule = pPluginManager->FindModule<NFINetClientModule>();
	m_pLogModule = pPluginManager->FindModule<NFILogModule>();
	m_pElementModule = pPluginManager->FindModule<NFIElementModule>();
	m_pProxyToWorldModule = pPluginManager->FindModule<NFIProxyServerToWorldModule>();
	m_pSecurityModule = pPluginManager->FindModule<NFISecurityModule>();
	m_pWsModule = pPluginManager->FindModule<NFIWSModule>();
    m_pThreadPoolModule = pPluginManager->FindModule<NFIThreadPoolModule>();
    m_pUDPModule = pPluginManager->FindModule<NFIUDPModule>();

    return true;
}

bool NFProxyServerNet_ServerModule::AfterInit()
{
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_CONNECT_KEY, this, &NFProxyServerNet_ServerModule::OnConnectKeyProcess);
	m_pWsModule->AddReceiveCallBack(NFMsg::REQ_CONNECT_KEY, this, &NFProxyServerNet_ServerModule::OnConnectKeyProcessWS);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_WORLD_LIST, this, &NFProxyServerNet_ServerModule::OnReqServerListProcess);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_SELECT_SERVER, this, &NFProxyServerNet_ServerModule::OnSelectServerProcess);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_ROLE_LIST, this, &NFProxyServerNet_ServerModule::OnReqRoleListProcess);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_CREATE_ROLE, this, &NFProxyServerNet_ServerModule::OnReqCreateRoleProcess);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_DELETE_ROLE, this, &NFProxyServerNet_ServerModule::OnReqDelRoleProcess);
	m_pNetModule->AddReceiveCallBack(NFMsg::REQ_ENTER_GAME, this, &NFProxyServerNet_ServerModule::OnReqEnterGameServer);
	m_pNetModule->AddReceiveCallBack(this, &NFProxyServerNet_ServerModule::OnOtherMessage);

    //support dayouspace protocols
    m_pNetModule->AddReceiveCallBack(enumGame::EnumCmd::CSwitchRoom, this, &NFProxyServerNet_ServerModule::OnReqSwitchRoom);
    m_pNetModule->AddReceiveCallBack(enumGame::EnumCmd::CAuth, this, &NFProxyServerNet_ServerModule::onAuth);
    m_pNetModule->AddReceiveCallBack(enumGame::EnumCmd::NF_EnterRoomReq, this, &NFProxyServerNet_ServerModule::OnReqEnterRoom);
    
	m_pNetModule->AddEventCallBack(this, &NFProxyServerNet_ServerModule::OnSocketClientEvent);
	m_pNetModule->ExpandBufferSize(1024*1024*2);

    // register callback fn for udp test. Will delete later.
    m_pUDPModule->AddReceiveCallBack(this, &NFProxyServerNet_ServerModule::OnOtherMessage);
    m_pUDPModule->ExpandBufferSize(1024 * 1024 * 2);

    NF_SHARE_PTR<NFIClass> xLogicClass = m_pClassModule->GetElement(NFrame::Server::ThisName());
    if (xLogicClass)
    {
		const std::vector<std::string>& strIdList = xLogicClass->GetIDList();
		for (int i = 0; i < strIdList.size(); ++i)
		{
			const std::string& strId = strIdList[i];

            const int serverType = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::Type());
            const int serverID = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::ServerID());
            if (serverType == NF_SERVER_TYPES::NF_ST_PROXY && pPluginManager->GetAppID() == serverID)
            {
                const int nPort = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::Port());
                const int maxConnect = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::MaxOnline());
                const int nCpus = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::CpuCount());
                // add udp port config
                const int nUDPPort = m_pElementModule->GetPropertyInt32(strId, NFrame::Server::UDPPort());
                //const std::string& name = m_pElementModule->GetPropertyString(strId, NFrame::Server::ID());
                //const std::string& ip = m_pElementModule->GetPropertyString(strId, NFrame::Server::IP());

                //proxyServer 改成支持dayouspace 客户端协议
                int nRet = m_pNetModule->Initialization(maxConnect, nPort, nCpus, true);
                //int nRet = m_pNetModule->Initialization(maxConnect, nPort, nCpus);
                if (nRet < 0)
                {
                    std::ostringstream strLog;
                    strLog << "Cannot init server net, Port = " << nPort;
                    m_pLogModule->LogError(NULL_OBJECT, strLog, __FUNCTION__, __LINE__);
                    NFASSERT(nRet, "Cannot init server net", __FILE__, __FUNCTION__);
                    exit(0);
                }

                nRet = m_pUDPModule->Initialization(maxConnect, nUDPPort, nCpus);
                if (nRet < 0)
                {
                    std::ostringstream strLog;
                    strLog << "Cannot init UDP server net, Port = " << nUDPPort;
                    m_pLogModule->LogError(NULL_OBJECT, strLog, __FUNCTION__, __LINE__);
                    NFASSERT(nRet, "Cannot init UDP server net", __FILE__, __FUNCTION__);
                    exit(0);
                }

                // 发送握手协议到go server
                this->HandShakeGoServer();
            }
        }
    }

    return true;
}

bool NFProxyServerNet_ServerModule::Shut()
{
    return true;
}

bool NFProxyServerNet_ServerModule::Execute()
{
	return true;
}



void NFProxyServerNet_ServerModule::OnOtherMessage(const NFSOCK sockIndex, const int msgID, const char * msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject || pNetObject->GetConnectKeyState() <= 0 || pNetObject->GetGameID() <= 0)
	{
		//state error
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		m_pLogModule->LogError(NFGUID(0, sockIndex), "DecodeMsg failed", __FUNCTION__, __LINE__);
		return;
	}

	NFMsg::MsgBase xMsg;
	if (!xMsg.ParseFromString(strMsgData))
	{
		char szData[MAX_PATH] = { 0 };
		sprintf(szData, "Parse Message Failed from Packet to MsgBase, MessageID: %d\n", msgID);

		m_pLogModule->LogError(NFGUID(0, sockIndex), szData, __FUNCTION__, __LINE__);
		return;
	}


	//real user id
	*xMsg.mutable_player_id() = NFINetModule::NFToPB(pNetObject->GetUserID());


	std::string msgData;
	if (!xMsg.SerializeToString(&msgData))
	{
		return;
	}

	if (xMsg.has_hash_ident())
	{
		//special for distributed
		if (!pNetObject->GetHashIdentID().IsNull())
		{
			m_pNetClientModule->SendBySuitWithOutHead(NF_SERVER_TYPES::NF_ST_GAME, pNetObject->GetHashIdentID().ToString(), msgID, msgData);
		}
		else
		{
			NFGUID xHashIdent = NFINetModule::PBToNF(xMsg.hash_ident());
			m_pNetClientModule->SendBySuitWithOutHead(NF_SERVER_TYPES::NF_ST_GAME, xHashIdent.ToString(), msgID, msgData);
		}
	}
	else
	{
        if (msgID >= 50000)
        {
			m_pNetClientModule->SendBySuitWithOutHead(NF_SERVER_TYPES::NF_ST_WORLD, pNetObject->GetUserID().ToString(), msgID, msgData);
        }
        else
        {
		    m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), msgID, msgData);
        }
        
	}
}

void NFProxyServerNet_ServerModule::OnConnectKeyProcessWS(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    NFGUID nPlayerID;
    NFMsg::ReqAccountLogin xMsg;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xMsg, nPlayerID))
    {
        return;
    }
	bool bRet = m_pSecurityModule->VerifySecurityKey(xMsg.account(), xMsg.security_code());
    //bool bRet = m_pProxyToWorldModule->VerifyConnectData(xMsg.account(), xMsg.security_code());
    if (bRet)
    {
        NetObject* pNetObject = m_pWsModule->GetNet()->GetNetObject(sockIndex);
        if (pNetObject)
        {
            //this net-object verify successful and set state as true
            pNetObject->SetConnectKeyState(1);
			pNetObject->SetSecurityKey(xMsg.security_code());

            //this net-object bind a user's account
            pNetObject->SetAccount(xMsg.account());

            NFMsg::AckEventResult xSendMsg;
            xSendMsg.set_event_code(NFMsg::VERIFY_KEY_SUCCESS);
            *xSendMsg.mutable_event_client() = NFINetModule::NFToPB(pNetObject->GetClientID());
			m_pWsModule->SendMsgPB(NFMsg::EGameMsgID::ACK_CONNECT_KEY, xSendMsg, sockIndex);
        }
    }
    else
    {
        //if verify failed then close this connect
		m_pWsModule->GetNet()->CloseNetObject(sockIndex);
    }
}

void NFProxyServerNet_ServerModule::OnConnectKeyProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    NFGUID nPlayerID;
    NFMsg::ReqAccountLogin xMsg;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xMsg, nPlayerID))
    {
        return;
    }

	bool bRet = m_pSecurityModule->VerifySecurityKey(xMsg.account(), xMsg.security_code());
    //bool bRet = m_pProxyToWorldModule->VerifyConnectData(xMsg.account(), xMsg.security_code());
    if (bRet)
    {
        NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
        if (pNetObject)
        {
            //this net-object verify successful and set state as true
            pNetObject->SetConnectKeyState(1);
			pNetObject->SetSecurityKey(xMsg.security_code());

            //this net-object bind a user's account
            pNetObject->SetAccount(xMsg.account());

            NFMsg::AckEventResult xSendMsg;
            xSendMsg.set_event_code(NFMsg::VERIFY_KEY_SUCCESS);
            *xSendMsg.mutable_event_client() = NFINetModule::NFToPB(pNetObject->GetClientID());

			m_pNetModule->SendMsgPB(NFMsg::EGameMsgID::ACK_CONNECT_KEY, xSendMsg, sockIndex);
        }
    }
    else
    {
        //if verify failed then close this connect
		m_pNetModule->GetNet()->CloseNetObject(sockIndex);
    }
}

void NFProxyServerNet_ServerModule::OnSocketClientEvent(const NFSOCK sockIndex, const NF_NET_EVENT eEvent, NFINet* pNet)
{
    if (eEvent & NF_NET_EVENT_EOF)
    {
        m_pLogModule->LogInfo(NFGUID(0, sockIndex), "NF_NET_EVENT_EOF Connection closed", __FUNCTION__, __LINE__);
        OnClientDisconnect(sockIndex);
    }
    else if (eEvent & NF_NET_EVENT_ERROR)
    {
        m_pLogModule->LogInfo(NFGUID(0, sockIndex), "NF_NET_EVENT_ERROR Got an error on the connection", __FUNCTION__, __LINE__);
        OnClientDisconnect(sockIndex);
    }
    else if (eEvent & NF_NET_EVENT_TIMEOUT)
    {
        m_pLogModule->LogInfo(NFGUID(0, sockIndex), "NF_NET_EVENT_TIMEOUT read timeout", __FUNCTION__, __LINE__);
        OnClientDisconnect(sockIndex);
    }
    else  if (eEvent & NF_NET_EVENT_CONNECTED)
    {
        m_pLogModule->LogInfo(NFGUID(0, sockIndex), "NF_NET_EVENT_CONNECTED connected success", __FUNCTION__, __LINE__);
        OnClientConnected(sockIndex);
    }
}

void NFProxyServerNet_ServerModule::OnClientDisconnect(const NFSOCK nAddress)
{
    NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(nAddress);
    if (pNetObject)
    {
        int nGameID = pNetObject->GetGameID();
        if (nGameID > 0)
        {
            //when a net-object bind a account then tell that game-server
            if (!pNetObject->GetUserID().IsNull())
            {
                NFMsg::ReqLeaveGameServer xData;
				xData.set_arg(nGameID);

                NFMsg::MsgBase xMsg;

				//real user id
                *xMsg.mutable_player_id() = NFINetModule::NFToPB(pNetObject->GetUserID());

                if (!xData.SerializeToString(xMsg.mutable_msg_data()))
                {
                    return;
                }

                std::string msg;
                if (!xMsg.SerializeToString(&msg))
                {
                    return;
                }

				m_pNetClientModule->SendByServerIDWithOutHead(nGameID, NFMsg::EGameMsgID::REQ_LEAVE_GAME, msg);
            }
        }

        mxClientIdent.RemoveElement(pNetObject->GetClientID());
    }
}
int NFProxyServerNet_ServerModule::PickGameServer()
{
    /*
    * nWorkload 值表示gameserver的当前在线人数。由game server上报给world server，world server同步到proxy server；
    */
    int nWorkload = 1000;
    int nGameID = 0;
    NFMapEx<int, ConnectData>& xServerList = m_pNetClientModule->GetServerList();
    ConnectData* pGameData = xServerList.FirstNude();
    while (pGameData)
    {
        if (ConnectDataState::NORMAL == pGameData->eState
            && NF_SERVER_TYPES::NF_ST_GAME == pGameData->eServerType)
        {
            if (pGameData->nWorkLoad < nWorkload)
            {
                nWorkload = pGameData->nWorkLoad;
                nGameID = pGameData->nGameID;
            }
        }

        pGameData = xServerList.NextNude();
    }

    return nGameID;
}


//根据房间副本信息选择服务，确保同一个房间副本的用户在同一个服务进程
int NFProxyServerNet_ServerModule::PickGameServer(NF_SERVER_TYPES nType, std::string& sKey)
{
    NF_SHARE_PTR<ConnectData> pData = m_pNetClientModule->GetServerByType(nType, sKey);
    if (!pData)
    {
        return -1;
    }

    return pData->nGameID;
}


void NFProxyServerNet_ServerModule::OnSelectServerProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    NFGUID nPlayerID;
    NFMsg::ReqSelectServer xMsg;
    if (!m_pNetModule->ReceivePB( msgID, strMsgData, xMsg, nPlayerID))
    {
        return;
    }

    NF_SHARE_PTR<ConnectData> pServerData = m_pNetClientModule->GetServerNetInfo(xMsg.world_id());
    if (pServerData && ConnectDataState::NORMAL == pServerData->eState)
    {
	//Modify: not need check pNetObject again by wenmin
        //NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
        //if (pNetObject)
        //{
            //now this client bind a game server, all message will be sent to this game server whom bind with client
            pNetObject->SetGameID(xMsg.world_id());

            NFMsg::AckEventResult xMsg;
            xMsg.set_event_code(NFMsg::EGameEventCode::SELECTSERVER_SUCCESS);
			m_pNetModule->SendMsgPB(NFMsg::EGameMsgID::ACK_SELECT_SERVER, xMsg, sockIndex);
            return;
        //}
    }

    int nGameID = PickGameServer();

	if (nGameID > 0)
	{
		pNetObject->SetGameID(nGameID);

		NFMsg::AckEventResult xMsg;
		xMsg.set_event_code(NFMsg::EGameEventCode::SELECTSERVER_SUCCESS);
		m_pNetModule->SendMsgPB(NFMsg::EGameMsgID::ACK_SELECT_SERVER, xMsg, sockIndex);
		return;
	}
	

    NFMsg::AckEventResult xSendMsg;
    xSendMsg.set_event_code(NFMsg::EGameEventCode::SELECTSERVER_FAIL);
	m_pNetModule->SendMsgPB(NFMsg::EGameMsgID::ACK_SELECT_SERVER, xMsg, sockIndex);
}

void NFProxyServerNet_ServerModule::OnReqServerListProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    if (pNetObject->GetConnectKeyState() > 0)
    {
		NFGUID nPlayerID;//no value
		NFMsg::ReqServerList xMsg;
		if (!m_pNetModule->ReceivePB( msgID, strMsgData, xMsg, nPlayerID))
		{
			return;
		}

		if (xMsg.type() != NFMsg::RSLT_GAMES_ERVER)
		{
			return;
		}

        //ack all gameserver data
        NFMsg::AckServerList xData;
        xData.set_type(NFMsg::RSLT_GAMES_ERVER);

        NFMapEx<int, ConnectData>& xServerList = m_pNetClientModule->GetServerList();
        ConnectData* pGameData = xServerList.FirstNude();
        while (pGameData)
        {
            if (ConnectDataState::NORMAL == pGameData->eState
				&& NF_SERVER_TYPES::NF_ST_GAME == pGameData->eServerType)
            {
                NFMsg::ServerInfo* pServerInfo = xData.add_info();

                pServerInfo->set_name(pGameData->name);
                pServerInfo->set_status(NFMsg::EServerState::EST_NARMAL);
                pServerInfo->set_server_id(pGameData->nGameID);
                pServerInfo->set_wait_count(0);
            }

            pGameData = xServerList.NextNude();
        }

		m_pNetModule->SendMsgPB(NFMsg::EGameMsgID::ACK_WORLD_LIST, xData, sockIndex);
    }
}

bool NFProxyServerNet_ServerModule::TransportToClient(int nUid, const int msgID, const char* msg, const uint32_t len)
{
    NF_SHARE_PTR<NFSOCK> pFd = m_uidToSocketMap.GetElement(nUid);
    if (!pFd)
    {
        return false;
    }

    //wrap to unity protocol
    m_pNetModule->SendMsgWithOutHead(msgID, msg, *pFd);
    return true;
}

bool NFProxyServerNet_ServerModule::TransportToClient(NFGUID xClientID, const int msgID, const char* msg, const uint32_t len)
{
    NF_SHARE_PTR<NFSOCK> pFd = mxClientIdent.GetElement(xClientID);
    if (!pFd)
    {
        return false;
    }

    //wrap to unity protocol
    m_pNetModule->SendMsgWithOutHead(msgID, msg, *pFd);
    return true;
}


int NFProxyServerNet_ServerModule::Transport(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    NFMsg::MsgBase xMsg;
    if (!xMsg.ParseFromArray(msg, len))
    {
        char szData[MAX_PATH] = { 0 };
        sprintf(szData, "Parse Message Failed from Packet to MsgBase, MessageID: %d\n", msgID);

        return false;
    }

    //broadcast many palyers
    for (int i = 0; i < xMsg.player_client_list_size(); ++i)
    {
        NF_SHARE_PTR<NFSOCK> pFD = mxClientIdent.GetElement(NFINetModule::PBToNF(xMsg.player_client_list(i)));
        if (pFD)
        {
            if (xMsg.has_hash_ident())
            {
                NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(*pFD);
                if (pNetObject)
                {
                    pNetObject->SetHashIdentID(NFINetModule::PBToNF(xMsg.hash_ident()));
                }
            }

			m_pNetModule->SendMsgWithOutHead(msgID, std::string(msg, len), *pFD);
        }
    }

    //send message to one player
    if (xMsg.player_client_list_size() <= 0)
    {
		NFGUID xClientIdent = NFINetModule::PBToNF(xMsg.player_id());
        NF_SHARE_PTR<NFSOCK> pFD = mxClientIdent.GetElement(xClientIdent);
        if (pFD)
        {
            if (xMsg.has_hash_ident())
            {
                NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(*pFD);
                if (pNetObject)
                {
                    pNetObject->SetHashIdentID(NFINetModule::PBToNF(xMsg.hash_ident()));
                }
            }

			m_pNetModule->SendMsgWithOutHead(msgID, std::string(msg, len), *pFD);
        }
		else if(xClientIdent.IsNull())
		{
			//send this msessage to all clientss
			m_pNetModule->GetNet()->SendMsgToAllClientWithOutHead(msgID, msg, len);
		}
		//pFD is empty means end of connection, no need to send message to this client any more. And,
		//we should never send a message that specified to a player to all clients here.
		else
		{
		}
    }

    return true;
}

void NFProxyServerNet_ServerModule::OnClientConnected(const NFSOCK nAddress)
{
	//bind client'id with socket id
    NFGUID xClientIdent = m_pKernelModule->CreateGUID();
    NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(nAddress);
    if (pNetObject)
    {
        pNetObject->SetClientID(xClientIdent);
    }

    mxClientIdent.AddElement(xClientIdent, NF_SHARE_PTR<NFSOCK>(new NFSOCK(nAddress)));
}

void NFProxyServerNet_ServerModule::OnReqRoleListProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    NFGUID nPlayerID;
    NFMsg::ReqRoleList xData;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xData, nPlayerID))
    {
        return;
    }

    NF_SHARE_PTR<ConnectData> pServerData = m_pNetClientModule->GetServerNetInfo(xData.game_id());
    if (!pServerData)
    {
        pServerData = m_pNetClientModule->GetServerNetInfo(NF_SERVER_TYPES::NF_ST_GAME);
        if (pServerData)
        {
            pNetObject->SetGameID(pServerData->nGameID);
        }
    }

    if (pServerData && ConnectDataState::NORMAL == pServerData->eState)
    {
        if (pNetObject->GetConnectKeyState() > 0
            && pNetObject->GetGameID() == pServerData->nGameID
            && pNetObject->GetAccount() == xData.account())
        {
            NFMsg::MsgBase xMsg;
            if (!xData.SerializeToString(xMsg.mutable_msg_data()))
            {
                return;
            }

			//clientid
            xMsg.mutable_player_id()->CopyFrom(NFINetModule::NFToPB(pNetObject->GetClientID()));

            std::string msg;
            if (!xMsg.SerializeToString(&msg))
            {
                return;
            }

			m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), NFMsg::EGameMsgID::REQ_ROLE_LIST, msg);
        }
    }
    else
    {
        m_pLogModule->LogError(pNetObject->GetClientID(), "account cant get a game server:" + xData.account(), __FILE__, __LINE__);
    }
}

void NFProxyServerNet_ServerModule::OnReqCreateRoleProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    NFGUID nPlayerID;//no value
    NFMsg::ReqCreateRole xData;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xData, nPlayerID))
    {
        return;
    }

    NF_SHARE_PTR<ConnectData> pServerData = m_pNetClientModule->GetServerNetInfo(pNetObject->GetGameID());
    if (pServerData && ConnectDataState::NORMAL == pServerData->eState)
    {
        if (pNetObject->GetConnectKeyState() > 0
            && pNetObject->GetAccount() == xData.account())
        {
            NFMsg::MsgBase xMsg;
            if (!xData.SerializeToString(xMsg.mutable_msg_data()))
            {
                return;
            }
            
            //the clientid == playerid before the player entre the game-server
            xMsg.mutable_player_id()->CopyFrom(NFINetModule::NFToPB(pNetObject->GetClientID()));

            std::string msg;
            if (!xMsg.SerializeToString(&msg))
            {
                return;
            }

			m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), msgID, msg);
        }
    }
}

void NFProxyServerNet_ServerModule::OnReqDelRoleProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    NFGUID nPlayerID;// no value
    NFMsg::ReqDeleteRole xData;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xData, nPlayerID))
    {
        return;
    }

    NF_SHARE_PTR<ConnectData> pServerData = m_pNetClientModule->GetServerNetInfo(xData.game_id());
	if (pServerData && ConnectDataState::NORMAL == pServerData->eState)
    {
        if (pNetObject->GetConnectKeyState() > 0
            && pNetObject->GetGameID() == xData.game_id()
            && pNetObject->GetAccount() == xData.account())
        {
			NFMsg::MsgBase xMsg;
			if (!xData.SerializeToString(xMsg.mutable_msg_data()))
			{
				return;
			}

			//clientid
			xMsg.mutable_player_id()->CopyFrom(NFINetModule::NFToPB(pNetObject->GetClientID()));

			std::string msg;
			if (!xMsg.SerializeToString(&msg))
			{
				return;
			}

			m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), msgID, msg);
        }
    }
}

void NFProxyServerNet_ServerModule::OnReqEnterGameServer(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
	NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
	if (!pNetObject)
	{
		return;
	}

	std::string strMsgData = m_pSecurityModule->DecodeMsg(pNetObject->GetAccount(), pNetObject->GetSecurityKey(), msgID, msg, len);
	if (strMsgData.empty())
	{
		//decode failed
		return;
	}

    NFGUID nPlayerID;//no value
    NFMsg::ReqEnterGameServer xData;
    if (!m_pNetModule->ReceivePB( msgID, msg, len, xData, nPlayerID))
    {
        return;
    }

    NF_SHARE_PTR<ConnectData> pServerData = m_pNetClientModule->GetServerNetInfo(pNetObject->GetGameID());
    if (pServerData && ConnectDataState::NORMAL == pServerData->eState)
    {
        if (pNetObject->GetConnectKeyState() > 0
            && pNetObject->GetAccount() == xData.account()
            && !xData.name().empty()
            && !xData.account().empty())
        {
            NFMsg::MsgBase xMsg;
            if (!xData.SerializeToString(xMsg.mutable_msg_data()))
            {
                return;
            }

			//clientid
            xMsg.mutable_player_id()->CopyFrom(NFINetModule::NFToPB(pNetObject->GetClientID()));
            std::string msg;
            if (!xMsg.SerializeToString(&msg))
            {
                return;
            }

			m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), NFMsg::EGameMsgID::REQ_ENTER_GAME, msg);
        }
    }
}

int NFProxyServerNet_ServerModule::EnterGameSuccessEvent(const NFGUID xClientID, const NFGUID xPlayerID)
{
    NF_SHARE_PTR<NFSOCK> pFD = mxClientIdent.GetElement(xClientID);
    if (pFD)
    {
        NetObject* pNetObeject = m_pNetModule->GetNet()->GetNetObject(*pFD);
        if (pNetObeject)
        {
            pNetObeject->SetUserID(xPlayerID);
        }
    }

    return 0;
}


//support dayouspace
// body len | msg id |uid | house id |  house index | house type | OS | + data
void NFProxyServerNet_ServerModule::HandShakeGoServer()
{
    auth::CAuth xData;
    xData.set_token(std::string("E3d757B58K088Ecc")); //TODO: read from config file.
    xData.set_uid(0);
    xData.set_os(0);


    std::string sendMsg;
    xData.SerializeToString(&sendMsg);
    int nMsgLen = sendMsg.length();

    NFMsgHead xHead = NFMsgHead(nMsgLen, enumGame::EnumCmd::CAuth, 0, 0, 0, 0, 0);
    //NFMapEx<int, ConnectData> serverMap = m_pNetClientModule->GetServerList();
    //send handshake to all connected go servers.
    m_pNetClientModule->SendToServerTypeWithHead(DY_GO_SVR, enumGame::EnumCmd::CAuth, sendMsg, xHead);

}

// NF框架中，回调传参len是整个数据包长度
void NFProxyServerNet_ServerModule::onAuth(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    
}

//用户进入场景前调用
//当前调用场景为从grpc service过来的请求，需要在clientNetModule中将结果返回给grpc service，然后再转发给client
void NFProxyServerNet_ServerModule::OnReqEnterRoom(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
    if (!pNetObject)
    {
        return;
    }

    //receive pb, different format
    NFGUID nPlayerID;//no value
    switchRoom::EnterRoomReq xData;

    if (!m_pNetModule->ReceiveDYPB(msgID, msg, len, xData))
    {
        return;
    }

    
    //如果存在房间index和game serve的映射则直接使用
    int nGameID = 0;
    std::string sKey = std::to_string(xData.house_id()) + "_" + std::to_string(xData.house_type()) + "_" + std::to_string(xData.seq());
    if (m_gameServerInfoMap.ExistElement(sKey))
    {
        nGameID = *(m_gameServerInfoMap.GetElement(sKey));
    }
    else
    {
        //否则根据game server的负载，房间分配在负载最小的game server上
        nGameID = PickGameServer(DY_GO_SVR, sKey);
        if (nGameID < 0)
        {
            return;
        }
        m_gameServerInfoMap.AddElement(sKey, NF_SHARE_PTR<int>(NF_NEW int(nGameID)));
    }

    pNetObject->SetGameID(nGameID);
    
    

    //保存用户信息
    NF_SHARE_PTR<UserInfoData> pData = NF_SHARE_PTR<UserInfoData>(NF_NEW UserInfoData(xData.uid(), nGameID, sKey, xData.house_id(), xData.house_type(), xData.seq()));
    if (m_userInfoMap.ExistElement(sockIndex))
    {
        m_userInfoMap.RemoveElement(sockIndex);
    }
    m_userInfoMap.AddElement(sockIndex, pData);

    //uid to socket fd map
    //记录uid到socket的映射，方便后续快速根据uid获取socket
    if (m_uidToSocketMap.ExistElement(xData.uid()))
    {
        m_uidToSocketMap.RemoveElement(xData.uid());
    }
    NF_SHARE_PTR<NFSOCK> pSock = NF_SHARE_PTR<NFSOCK>(NF_NEW NFSOCK(sockIndex));
    m_uidToSocketMap.AddElement(xData.uid(), pSock);


    //转发到game server(proxy 和 game server的通信依旧使用NF框架原始协议，方便通过BaseMsg的playid(clientid)保持socketfd链路)
    //wrap to BaseMsg
    NFMsg::MsgBase xMsg;
    if (!xData.SerializeToString(xMsg.mutable_msg_data()))
    {
        return;
    }

    //clientid (设备ID)
    xMsg.mutable_player_id()->CopyFrom(NFINetModule::NFToPB(pNetObject->GetClientID()));
    std::string sendMsg;
    if (!xMsg.SerializeToString(&sendMsg))
    {
        return;
    }
    m_pNetClientModule->SendByServerIDWithOutHead(pNetObject->GetGameID(), msgID, sendMsg);
}




//用户进入场景后会调用该接口
void NFProxyServerNet_ServerModule::OnReqSwitchRoom(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)
{
    NetObject* pNetObject = m_pNetModule->GetNet()->GetNetObject(sockIndex);
    if (!pNetObject)
    {
        return;
    }

    //receive pb, different format
    NFGUID nPlayerID;//no value
    switchRoom::CSwitchRoom xData;

    if (!m_pNetModule->ReceiveDYPB(msgID, msg, len, xData))
    {
        return;
    }
    
    //转发给go server
    //TODO: 需要记录当前用户信息发往了哪个go server（类似uid 和 game server的对应）
    if (!(m_userInfoMap.ExistElement(sockIndex)))
    {
        return;
    }

    NF_SHARE_PTR<UserInfoData> pData = m_userInfoMap.GetElement(sockIndex);

    //根据roominfo 的hash来选择go server，确保同一个房间副本的用户在同一个go 服务进程
    int nGameID = PickGameServer(DY_GO_SVR, pData->sRoomInfo);
    if (nGameID < 0)
    {
        return;
    }

    std::string sendMsg;
    xData.SerializeToString(&sendMsg);
    int nMsgLen = sendMsg.length();

    NFMsgHead xHead = NFMsgHead(nMsgLen, enumGame::EnumCmd::CSwitchRoom, pData->nUid, pData->nHouseID, pData->nHouseSeq, pData->nHouseType, 0);

    m_pNetClientModule->SendToServerIDWithHead(nGameID, enumGame::EnumCmd::CSwitchRoom, sendMsg, xHead);
}
