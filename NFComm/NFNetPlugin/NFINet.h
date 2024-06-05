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

#ifndef NFI_NET_H
#define NFI_NET_H

#include <cstring>
#include <cerrno>
#include <cstdio>
#include <csignal>
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>
#include <functional>
#include <memory>
#include <list>
#include <vector>
#include <cassert>
#include "NFComm/NFPluginModule/NFGUID.h"

#if NF_PLATFORM == NF_PLATFORM_WIN
#include <WinSock2.h>
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_LINUX || NF_PLATFORM == NF_PLATFORM_ANDROID

#if NF_PLATFORM == NF_PLATFORM_APPLE

#include <libkern/OSByteOrder.h>

#endif

#ifdef _XOPEN_SOURCE_EXTENDED
#  include <arpa/inet.h>
# endif

#include <netinet/in.h>
#include <netinet/tcp.h> 
#include <sys/socket.h>
#include <unistd.h>

#endif


#pragma pack(push, 1)

enum NF_NET_EVENT
{
    NF_NET_EVENT_EOF = 0x10,
    NF_NET_EVENT_ERROR = 0x20,
    NF_NET_EVENT_TIMEOUT = 0x40,
    NF_NET_EVENT_CONNECTED = 0x80,
};


struct NFIMsgHead
{
    enum NF_Head
    {
        NF_HEAD_LENGTH = 6,
    };

    enum DY_Client_Head
    {
        DY_C_HEAD_LENGTH = 20,
    };

    enum DY_Server_Head
    {
        DY_S_HEAD_LENGTH = 28,
    };

    virtual int EnCode(char* strData) = 0;

    virtual int DeCode(const char* strData) = 0;

    //dayouspace serer <---> client protocols
    virtual int DYEnCodeToClient(char* strData) = 0;

    virtual int DYDeCodeFromClient(const char* strData) = 0;

    //dayouspace server <---> server protocols
    virtual int DYEnCodeToServer(char* strData) = 0;

    virtual int DYDeCodeFromServer(const char* strData) = 0;

    virtual uint16_t GetMsgID(bool bNFMsg = true) const = 0;

    virtual void SetMsgID(uint16_t msgID, bool bNFMsg = true) = 0;

    virtual uint32_t GetBodyLength() const = 0;

    virtual void SetBodyLength(uint32_t length) = 0;

    static int64_t NF_HTONLL(int64_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return htonll(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapHostToBigInt64(nData);
#else
        return htobe64(nData);
#endif
    }

    static int64_t NF_NTOHLL(int64_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return ntohll(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapBigToHostInt64(nData);
#elif NF_PLATFORM == NF_PLATFORM_ANDROID
        return betoh64(nData);
#else
        return be64toh(nData);
#endif
    }

    static int32_t NF_HTONL(int32_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return htonl(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapHostToBigInt32(nData);
#else
        return htobe32(nData);
#endif
    }

    static int32_t NF_NTOHL(int32_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return ntohl(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapBigToHostInt32(nData);
#elif NF_PLATFORM == NF_PLATFORM_ANDROID
        return betoh32(nData);
#else
        return be32toh(nData);
#endif
    }

    static int16_t NF_HTONS(int16_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return htons(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapHostToBigInt16(nData);
#else
        return htobe16(nData);
#endif
    }

    static int16_t NF_NTOHS(int16_t nData)
    {
#if NF_PLATFORM == NF_PLATFORM_WIN
        return ntohs(nData);
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
        return OSSwapBigToHostInt16(nData);
#elif NF_PLATFORM == NF_PLATFORM_ANDROID
        return betoh16 (nData);
#else
        return be16toh(nData);
#endif
    }

    static void NF_DeCodeUint32(const char* data, uint32_t& nOffset, uint32_t& t)
    {
        uint32_t nTemp = 0;
        memcpy(&nTemp, data + nOffset, sizeof(nTemp));
        t = NF_NTOHL(nTemp);
        nOffset += sizeof(nTemp);
    }

    static void NF_EnCodeUint32(char* data, uint32_t& nOffset, uint32_t t)
    {
        uint32_t n = NF_HTONL(t);
        memcpy(data + nOffset, (void*)(&n), sizeof(t));
        nOffset += sizeof(t);
    }
};

class NFMsgHead : public NFIMsgHead
{
public:
    NFMsgHead()
    {
        munSize = 0;
        mumsgID = 0;
        m_nDYMsgID = 0;
        m_nDYUid = 0;
        m_nHouseId = 0;
        m_nRoomSeq = 0;
        m_nHouseType = 0;
        m_nOSType = 0;
    }

    NFMsgHead(uint32_t nMsgLen, uint32_t nMsgID, uint32_t nUid, uint32_t nHouseId, uint32_t nRoomSeq, uint32_t nHouseType, uint32_t nOSType)
    {
        munSize = nMsgLen;
        m_nDYMsgID = nMsgID;
        m_nDYUid = nUid;
        m_nHouseId = nHouseId;
        m_nRoomSeq = nRoomSeq;
        m_nHouseType = nHouseType;
        m_nOSType = nOSType;
    }

    // Message Head[ MsgID(2) | MsgSize(4) ]
    virtual int EnCode(char* data)
    {
        uint32_t nOffset = 0;

        uint16_t msgID = NF_HTONS(mumsgID);
        memcpy(data + nOffset, (void*) (&msgID), sizeof(mumsgID));
        nOffset += sizeof(mumsgID);

        uint32_t nPackSize = munSize + NF_HEAD_LENGTH;
        uint32_t nSize = NF_HTONL(nPackSize);
        memcpy(data + nOffset, (void*) (&nSize), sizeof(munSize));
        nOffset += sizeof(munSize);

        if (nOffset != NF_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }

    // Message Head[ MsgID(2) | MsgSize(4) ]
    virtual int DeCode(const char* data)
    {
        uint32_t nOffset = 0;

        uint16_t msgID = 0;
        memcpy(&msgID, data + nOffset, sizeof(mumsgID));
        mumsgID = NF_NTOHS(msgID);
        nOffset += sizeof(mumsgID);

        uint32_t nPackSize = 0;
        memcpy(&nPackSize, data + nOffset, sizeof(munSize));
        munSize = NF_NTOHL(nPackSize) - NF_HEAD_LENGTH;
        nOffset += sizeof(munSize);

        if (nOffset != NF_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }

    // Message Header[ bodyLen(4) | crc(4) | packIndex(4) | msgID(4) | srvID(4) ]
    virtual int DYEnCodeToClient(char* data)
    {
        uint32_t nOffset = 0;

        NF_EnCodeUint32(data, nOffset, munSize);
        NF_EnCodeUint32(data, nOffset, 0); //crc=0
        NF_EnCodeUint32(data, nOffset, 0); //packIndex=0
        NF_EnCodeUint32(data, nOffset, m_nDYMsgID);
        NF_EnCodeUint32(data, nOffset, 0); //serverID=0

        if (nOffset != NFMsgHead::DY_C_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }

    // Message Header[ bodyLen(4) | crc(4) | packIndex(4) | msgID(4) | srvID(4) ]
    virtual int DYDeCodeFromClient(const char* data)
    {
        uint32_t nOffset = 0;

        //消息body
        NF_DeCodeUint32(data, nOffset, munSize);

        //服务端不关注crc 和 packIndex
        nOffset += sizeof(munSize) * 2;

        //msgID
        NF_DeCodeUint32(data, nOffset, m_nDYMsgID);

        //skip srvID
        nOffset += sizeof(munSize);

        if (nOffset != DY_C_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }

    //dayouspace server <---> server protocols
    virtual int DYEnCodeToServer(char* data)
    {
        uint32_t nOffset = 0;
        NF_EnCodeUint32(data, nOffset, munSize);
        NF_EnCodeUint32(data, nOffset, m_nDYMsgID);
        NF_EnCodeUint32(data, nOffset, m_nDYUid);
        NF_EnCodeUint32(data, nOffset, m_nHouseId);
        NF_EnCodeUint32(data, nOffset, m_nRoomSeq);
        NF_EnCodeUint32(data, nOffset, m_nHouseType);
        NF_EnCodeUint32(data, nOffset, m_nHouseType);
        NF_EnCodeUint32(data, nOffset, m_nOSType);

        if (nOffset != DY_S_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }

    //msg header [bodyLen(4) | msgID(4) | uid(4) | houseId(4) | roomIdx(4) | houseType(4) | os(4)]
    virtual int DYDeCodeFromServer(const char* data)
    {
        uint32_t nOffset = 0;
        NF_DeCodeUint32(data, nOffset, munSize);
        NF_DeCodeUint32(data, nOffset, m_nDYMsgID);
        NF_DeCodeUint32(data, nOffset, m_nDYUid);
        NF_DeCodeUint32(data, nOffset, m_nHouseId);
        NF_DeCodeUint32(data, nOffset, m_nRoomSeq);
        NF_DeCodeUint32(data, nOffset, m_nHouseType);
        NF_DeCodeUint32(data, nOffset, m_nOSType);

        if (nOffset != DY_S_HEAD_LENGTH)
        {
            assert(0);
        }

        return nOffset;
    }



    virtual uint16_t GetMsgID(bool bNFMsg = true) const
    {
        if (bNFMsg) {
            return mumsgID;
        }
        else {
            return (uint16_t)m_nDYMsgID;
        }
        
    }

    virtual void SetMsgID(uint16_t msgID, bool bNFMsg = true)
    {
        if (bNFMsg) {
            mumsgID = msgID;
        }
        else
        {
            m_nDYMsgID = (uint32_t)msgID;
        }
        
    }

    virtual uint32_t GetBodyLength() const
    {
        return munSize;
    }

    virtual void SetBodyLength(uint32_t length)
    {
        munSize = length;
    }

    uint32_t GetDYUid()
    {
        return m_nDYUid;
    }

protected:
    uint32_t munSize;
    uint16_t mumsgID;
    uint32_t m_nDYMsgID;
    uint32_t m_nDYUid;
    uint32_t m_nHouseId;
    uint32_t m_nRoomSeq;
    uint32_t m_nHouseType;
    uint32_t m_nOSType;
};

class NFINet;

typedef std::function<void(const NFSOCK sockIndex, const int msgID, const char* msg, const uint32_t len)> NET_RECEIVE_FUNCTOR;
typedef std::shared_ptr<NET_RECEIVE_FUNCTOR> NET_RECEIVE_FUNCTOR_PTR;

typedef std::function<void(const NFSOCK sockIndex, const NF_NET_EVENT nEvent, NFINet* pNet)> NET_EVENT_FUNCTOR;
typedef std::shared_ptr<NET_EVENT_FUNCTOR> NET_EVENT_FUNCTOR_PTR;

typedef std::function<void(int severity, const char* msg)> NET_EVENT_LOG_FUNCTOR;
typedef std::shared_ptr<NET_EVENT_LOG_FUNCTOR> NET_EVENT_LOG_FUNCTOR_PTR;

class NetObject
{
public:
    NetObject(NFINet* pNet, NFSOCK sock, sockaddr_in& addr, void* pBev)
    {
		logicState = 0;
		gameID = 0;
        fd = sock;
        bNeedRemove = false;

		netObject = pNet;

		userData = pBev;
        memset(&sin, 0, sizeof(sin));
        sin = addr;
    }

    virtual ~NetObject()
    {
    }

    sockaddr_in GetClientAddr()
    {
        return sin;
    }
	
    int AddBuff(const char* str, size_t len)
    {
        ringBuff.append(str, len);

        return (int) ringBuff.length();
    }

    int CopyBuffTo(char* str, uint32_t start, uint32_t len)
    {
        if (start + len > ringBuff.length())
        {
            return 0;
        }

        memcpy(str, ringBuff.data() + start, len);

        return len;
    }

    int RemoveBuff(uint32_t start, uint32_t len)
    {
        if (start + len > ringBuff.length())
        {
            return 0;
        }

        ringBuff.erase(start, len);

        return (int) ringBuff.length();
    }

    const char* GetBuff()
    {
        return ringBuff.data();
    }

    int GetBuffLen() const
    {
        return (int) ringBuff.length();
    }

    void* GetUserData()
    {
        return userData;
    }

    NFINet* GetNet()
    {
        return netObject;
    }

    //////////////////////////////////////////////////////////////////////////
    const std::string& GetSecurityKey() const
    {
        return securityKey;
    }

    void SetSecurityKey(const std::string& key)
    {
		securityKey = key;
    }

    int GetConnectKeyState() const
    {
        return logicState;
    }

    void SetConnectKeyState(const int state)
    {
		logicState = state;
    }

    bool NeedRemove()
    {
        return bNeedRemove;
    }

    void SetNeedRemove(bool b)
    {
        bNeedRemove = b;
    }

    const std::string& GetAccount() const
    {
        return account;
    }

    void SetAccount(const std::string& data)
    {
		account = data;
    }

    int GetGameID() const
    {
        return gameID;
    }

    void SetGameID(const int nData)
    {
		gameID = nData;
    }

    const NFGUID& GetUserID()
    {
        return userID;
    }

    void SetUserID(const NFGUID& nUserID)
    {
		userID = nUserID;
    }
    
    //dayouspace
    void SetDYUserID(const int nUserID)
    {
        m_nDYUserID = nUserID;
    }

    const int GetDYUserID()
    {
        return m_nDYUserID;
    }

    const NFGUID& GetClientID()
    {
        return clientID;
    }

    void SetClientID(const NFGUID& xClientID)
    {
		clientID = xClientID;
    }

    const NFGUID& GetHashIdentID()
		{
        return hashIdentID;
    }

    void SetHashIdentID(const NFGUID& xHashIdentID)
    {
		hashIdentID = xHashIdentID;
    }

    NFSOCK GetRealFD()
    {
        return fd;
    }

private:
    sockaddr_in sin;
    void* userData;
    //ringbuff
    std::string ringBuff;
    std::string account;
    std::string securityKey;

    int32_t logicState;
    int32_t gameID;
    NFGUID userID;//player id
    NFGUID clientID;//temporary client id
    NFGUID hashIdentID;//hash ident, special for distributed
    NFINet* netObject;
    //
    NFSOCK fd;
    bool bNeedRemove;

    // dayouspace
    int32_t m_nDYUserID;
};

class NFINet
{
public:
    virtual ~NFINet()
    {}

    //need to call this function every frame to drive network library
    virtual bool Execute() = 0;

    //as client
    virtual void Initialization(const char* ip, const unsigned short nPort, bool bIsDYClient = false) = 0;

    //as server
    virtual int Initialization(const unsigned int nMaxClient, const unsigned short nPort, const int nCpuCount = 4, bool bIsDYServer = false) = 0;
    virtual int UDPInitialization(const unsigned int nMaxClient, const unsigned short nPort, const int nCpuCount = 4) = 0;

    virtual unsigned int ExpandBufferSize(const unsigned int size) = 0;

    virtual bool Final() = 0;

    virtual bool SendMsgWithHeadInfo(const int msgID, const char* msg, const size_t len, const NFSOCK sockIndex, NFMsgHead& stHead) = 0;

    //send a message with out msg-head[auto add msg-head in this function]
    virtual bool SendMsgWithOutHead(const int16_t msgID, const char* msg, const size_t len, const NFSOCK sockIndex = 0) = 0;

    //send a message with out msg-head[need to add msg-head for this message by youself]
    virtual bool SendMsg(const char* msg, const size_t len, const NFSOCK sockIndex) = 0;

    //send a message to all client[need to add msg-head for this message by youself]
    virtual bool SendMsgToAllClient(const char* msg, const size_t len) = 0;

    //send a message with out msg-head to all client[auto add msg-head in this function]
    virtual bool SendMsgToAllClientWithOutHead(const int16_t msgID, const char* msg, const size_t len) = 0;

    virtual bool CloseNetObject(const NFSOCK sockIndex) = 0;

    virtual NetObject* GetNetObject(const NFSOCK sockIndex) = 0;

    virtual bool AddNetObject(const NFSOCK sockIndex, NetObject* pObject) = 0;
    virtual void AddNetObjectNoCheck(const NFSOCK sockIndex, NetObject* pObject) = 0;

    virtual bool IsServer() = 0;

    virtual bool Log(int severity, const char* msg) = 0;
};

#pragma pack(pop)

#endif
