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
#ifndef NF_PROXYSERVER_SERVER_MODULE_H
#define NF_PROXYSERVER_SERVER_MODULE_H

#include "NFComm/NFCore/NFConsistentHash.hpp"
#include "NFComm/NFMessageDefine/NFMsgDefine.h"
#include "NFComm/NFPluginModule/NFIProxyServerNet_ServerModule.h"
#include "NFComm/NFPluginModule/NFIProxyServerToWorldModule.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFPluginModule/NFIClassModule.h"
#include "NFComm/NFPluginModule/NFILogModule.h"
#include "NFComm/NFPluginModule/NFINetModule.h"
#include "NFComm/NFPluginModule/NFIElementModule.h"
#include "NFComm/NFPluginModule/NFIProxyServerToGameModule.h"
#include "NFComm/NFPluginModule/NFINetClientModule.h"
#include "NFComm/NFPluginModule/NFISecurityModule.h"
#include "NFComm/NFPluginModule/NFIWSModule.h"
#include "NFComm/NFPluginModule/NFIThreadPoolModule.h"
#include "NFComm/NFPluginModule/NFIUDPModule.h"
#include "NFComm/NFMessageDefine/DayouSpace/switchRoom.pb.h"
#include "NFComm/NFMessageDefine/DayouSpace/auth.pb.h"

struct UserInfoData
{
    UserInfoData()
    {
        nUid = 0;
        nGameID = 0;
        nGoGameID = 0;
        nHouseID = 0;
        nHouseType = 0;
        nHouseSeq = 0;
        sRoomInfo = "";
    }

    UserInfoData(int uid, int gameId, std::string& sKey, int id, int type, int seq)
    {
        nUid = uid;
        nGameID = gameId;
        sRoomInfo = sKey;
        nHouseID = id;
        nHouseType = type;
        nHouseSeq = seq;
    }


    int nUid;
    int nGameID;
    int nGoGameID;
    int nHouseID;
    int nHouseType;
    int nHouseSeq;
    std::string sRoomInfo;

};

class NFProxyServerNet_ServerModule : public NFIProxyServerNet_ServerModule
{
public:
    NFProxyServerNet_ServerModule(NFIPluginManager* p)
    {
        pPluginManager = p;
    }

    virtual bool Init();
    virtual bool Shut();
    virtual bool Execute();

    virtual bool AfterInit();

    virtual int Transport(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    virtual bool TransportToClient(int nUid, const int msgID, const char* msg, const uint32_t len);
    virtual bool TransportToClient(NFGUID xClientID, const int msgID, const char* msg, const uint32_t len);


    
    virtual int EnterGameSuccessEvent(const NFGUID xClientID, const NFGUID xPlayerID);

protected:

    void OnSocketClientEvent(const NFSOCK sockIndex, const NF_NET_EVENT eEvent, NFINet* pNet);

    void OnClientDisconnect(const NFSOCK nAddress);
    void OnClientConnected(const NFSOCK nAddress);

    void OnConnectKeyProcessWS(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnConnectKeyProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    //For UDP test
    void TestOnConnectKeyProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqServerListProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnSelectServerProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqRoleListProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqCreateRoleProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqDelRoleProcess(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqEnterGameServer(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);

    //////////////////////////////////////////////////////////////////////////

	void OnOtherMessage(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);

    //support dayouspace
    void onAuth(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqSwitchRoom(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    void OnReqEnterRoom(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len);
    int PickGameServer();
    int PickGameServer(NF_SERVER_TYPES nType, std::string& sKey);
    void HandShakeGoServer();

protected:

    NFMapEx<NFGUID, NFSOCK> mxClientIdent;
protected:
    NFINetClientModule* m_pNetClientModule;
    NFIKernelModule* m_pKernelModule;
    NFILogModule* m_pLogModule;
    NFIElementModule* m_pElementModule;
    NFIClassModule* m_pClassModule;
	NFINetModule* m_pNetModule;
    NFIWSModule* m_pWsModule;
    NFIUDPModule* m_pUDPModule;
	NFISecurityModule* m_pSecurityModule;
	NFIProxyServerToWorldModule* m_pProxyToWorldModule;
    NFIThreadPoolModule* m_pThreadPoolModule;

private:
    NFMapEx<NFSOCK, UserInfoData> m_userInfoMap;
    NFMapEx<int, NFSOCK> m_uidToSocketMap;
    NFMapEx<std::string, int> m_gameServerInfoMap;
};

#endif