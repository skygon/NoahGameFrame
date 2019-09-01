/*
            This file is part of: 
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2019 NoahFrame(NoahGameFrame)

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

#include "NFTeamRedisModule.h"

NFTeamRedisModule::NFTeamRedisModule(NFIPluginManager * p)
{
	pPluginManager = p;
}

bool NFTeamRedisModule::Init()
{
	m_pCommonRedisModule = pPluginManager->FindModule<NFICommonRedisModule>();
	m_pNoSqlModule = pPluginManager->FindModule<NFINoSqlModule>();

	return true;
}

bool NFTeamRedisModule::Shut()
{
	return true;
}

bool NFTeamRedisModule::Execute()
{
	return true;
}

bool NFTeamRedisModule::AfterInit()
{

	return true;
}

bool NFTeamRedisModule::CreateTeam(const NFGUID & self, const NFGUID & stranger, const std::string & strangerName)
{
	return false;
}

bool NFTeamRedisModule::LeaveTeam(const NFGUID & self, const NFGUID & other)
{
	return false;
}

bool NFTeamRedisModule::SendInvite(const NFGUID& self, const std::string& selfName, const NFGUID& stranger)
{
    std::string strKey = m_pCommonRedisModule->GetFriendInviteCacheKey(stranger);
	NF_SHARE_PTR<NFIRedisClient> xNoSqlDriver = m_pNoSqlModule->GetDriverBySuit(strKey);
	if (xNoSqlDriver)
	{
		if (xNoSqlDriver->HSET(strKey, self.ToString(), selfName))
		{
			return true;
		}
	}

    return false;
}

bool NFTeamRedisModule::AcceptInvite(const NFGUID& self, const std::string& selfName, const NFGUID& inviter)
{
    std::string strKey = m_pCommonRedisModule->GetFriendInviteCacheKey(self);
	NF_SHARE_PTR<NFIRedisClient> xNoSqlDriver = m_pNoSqlModule->GetDriverBySuit(strKey);
	if (xNoSqlDriver)
	{
        std::string strangerName;
		if (xNoSqlDriver->HGET(strKey, inviter.ToString(), strangerName))
		{
			xNoSqlDriver->HDEL(strKey, inviter.ToString());

            //AddFriend(self, inviter, strangerName);
            //AddFriend(inviter, self, selfName);
			return true;
		}
	}

    return false;
}

bool NFTeamRedisModule::RejectInvite(const NFGUID& self, const NFGUID& inviter)
{
    std::string strKey = m_pCommonRedisModule->GetFriendInviteCacheKey(self);
	NF_SHARE_PTR<NFIRedisClient> xNoSqlDriver = m_pNoSqlModule->GetDriverBySuit(strKey);
	if (xNoSqlDriver)
	{
        xNoSqlDriver->HDEL(strKey, inviter.ToString());
		return true;
	}

    return false;
}