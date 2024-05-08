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


#include "NFSyncPosModule.h"
#include "NFComm/NFPluginModule/NFINetModule.h"
#include "NFComm/NFMessageDefine/NFMsgShare.pb.h"
#include "NFComm/NFMessageDefine/NFProtocolDefine.hpp"
#include "NFComm/NFKernelPlugin/NFSceneModule.h"

bool NFSyncPosModule::Init()
{

	m_pScheduleModule = pPluginManager->FindModule<NFIScheduleModule>();
	m_pNetModule = pPluginManager->FindModule<NFINetModule>();
	m_pKernelModule = pPluginManager->FindModule<NFIKernelModule>();
	m_pElementModule = pPluginManager->FindModule<NFIElementModule>();
	m_pGameServerNet_ServerModule = pPluginManager->FindModule<NFIGameServerNet_ServerModule>();
	m_pSceneModule = pPluginManager->FindModule<NFISceneModule>();
	m_pClassModule = pPluginManager->FindModule<NFIClassModule>();
	m_pLogModule = pPluginManager->FindModule<NFILogModule>();
	
    return true;
}

bool NFSyncPosModule::Shut()
{
    return true;
}

bool NFSyncPosModule::Execute()
{
	//should be processed by actor's component
	static int64_t timePassed = NFGetTimeMS();
	static int64_t count = 1;
	int64_t nowTime = NFGetTimeMS();
	//同一个group的用户 每秒同步5帧
	int syncFreq = 5; //每秒5帧
	int timeInterval = 1000 / syncFreq;
	int fullSyncFreq = 10; // 每2秒全局同步
	if (nowTime - timePassed >= timeInterval)
	{
		timePassed = nowTime;
		count += 1;

		auto sceneInfo = m_pSceneModule->First();
		while (sceneInfo)
		{
			//NFMsg::ReqAckPlayerPosSync AllPlayerPosSync;
			std::map<int, NFMsg::ReqAckPlayerPosSync> lm_allPlayerPosSync;
			auto groupInfo = sceneInfo->First();
			while (groupInfo)
			{
				if (groupInfo->mPlayerPosition.size() > 0)
				{
					NFMsg::ReqAckPlayerPosSync playerPosSync;
					for (const auto& var : groupInfo->mPlayerPosition)
					{
						NFMsg::PosSyncUnit* posSyncUnit = playerPosSync.add_sync_unit();
						if (posSyncUnit)
						{
							*posSyncUnit->mutable_mover() = NFINetModule::NFToPB(var.second.mover);
							*posSyncUnit->mutable_pos() = NFINetModule::NFToPB(var.second.pos);
							*posSyncUnit->mutable_orientation() = NFINetModule::NFToPB(var.second.orientation);
							posSyncUnit->set_status(var.second.status);
							posSyncUnit->set_type((NFMsg::PosSyncUnit_EMoveType)var.second.type);
						}
					}

					groupInfo->mPlayerPosition.clear();
					playerPosSync.set_sequence(groupInfo->sequence++);

					m_pGameServerNet_ServerModule->SendGroupMsgPBToGate(NFMsg::ACK_MOVE, playerPosSync, sceneInfo->sceneID, groupInfo->groupID);

				}

				//全场景跨组同步数据收集（获取当前group的每个用户的实时位置）
				if (count % fullSyncFreq == 0)
				{
					NFMsg::ReqAckPlayerPosSync playerPosRec;
					NFGUID ident = NFGUID();
					NF_SHARE_PTR<int> pRet = groupInfo->mxPlayerList.First(ident);
					while (!ident.IsNull())
					{
						const NFVector3 position = m_pKernelModule->GetPropertyVector3(ident, NFrame::IObject::Position());
						NFMsg::PosSyncUnit* posSyncUnit = playerPosRec.add_sync_unit();
						if (posSyncUnit)
						{
							*posSyncUnit->mutable_mover() = NFINetModule::NFToPB(ident);
							*posSyncUnit->mutable_pos() = NFINetModule::NFToPB(position);
							*posSyncUnit->mutable_orientation() = NFINetModule::NFToPB(NFVector3(0, 180, 0));
							posSyncUnit->set_status(0);
							posSyncUnit->set_type((NFMsg::PosSyncUnit_EMoveType)0);
						}
						playerPosRec.set_sequence(groupInfo->sequence++);

						ident = NFGUID();
						pRet = groupInfo->mxPlayerList.Next(ident);
					}

					lm_allPlayerPosSync[groupInfo->groupID] = playerPosRec;
				}

				groupInfo = sceneInfo->Next();
			}

			if (count % fullSyncFreq == 0)
			{
				for (auto &var_i : lm_allPlayerPosSync)
				{
					for (const auto& var_j : lm_allPlayerPosSync)
					{
						if (var_i.first != var_j.first) {
							m_pGameServerNet_ServerModule->SendGroupMsgPBToGate(NFMsg::ACK_MOVE, var_i.second, sceneInfo->sceneID, var_j.first);
						}
					}
				}
			}

			sceneInfo = m_pSceneModule->Next();
		}
	}

    return true;
}

bool NFSyncPosModule::AfterInit()
{

	m_pKernelModule->AddClassCallBack(NFrame::NPC::ThisName(), this, &NFSyncPosModule::OnNPCClassEvent);
	m_pKernelModule->AddClassCallBack(NFrame::Player::ThisName(), this, &NFSyncPosModule::OnPlayerClassEvent);

    return true;
}

bool NFSyncPosModule::RequireMove(const NFGUID scene_group, const PosSyncUnit& syncUnit)
{
	std::shared_ptr<NFSceneInfo> sceneInfo = m_pSceneModule->GetElement(scene_group.GetHead());
	if (sceneInfo)
	{
		std::shared_ptr<NFSceneGroupInfo> groupInfo = sceneInfo->GetElement(scene_group.GetData());
		if (groupInfo)
		{
			groupInfo->mPlayerPosition[syncUnit.mover] = syncUnit;
		}
	}

	return true;
}

int NFSyncPosModule::OnNPCClassEvent(const NFGUID & self, const std::string & className, const CLASS_OBJECT_EVENT classEvent, const NFDataList & var)
{
	if (CLASS_OBJECT_EVENT::COE_CREATE_FINISH == classEvent)
	{
	}

	return 0;
}

int NFSyncPosModule::OnNPCGMPositionEvent(const NFGUID & self, const std::string & propertyName, const NFData & oldVar, const NFData & newVar)
{
	return 0;
}

int NFSyncPosModule::OnPlayerClassEvent(const NFGUID & self, const std::string & className, const CLASS_OBJECT_EVENT classEvent, const NFDataList & var)
{
	if (CLASS_OBJECT_EVENT::COE_CREATE_FINISH == classEvent)
	{
		m_pKernelModule->AddPropertyCallBack(self, NFrame::Player::MoveTo(), this, &NFSyncPosModule::OnPlayerGMPositionEvent);
		m_pKernelModule->AddPropertyCallBack(self, NFrame::Player::GMMoveTo(), this, &NFSyncPosModule::OnPlayerGMPositionEvent);
	}

	return 0;
}

int NFSyncPosModule::OnPlayerGMPositionEvent(const NFGUID & self, const std::string & propertyName, const NFData & oldVar, const NFData & newVar, const NFINT64 reason)
{
	NFMsg::ReqAckPlayerPosSync xMsg;
	NFMsg::PosSyncUnit* syncUnit = xMsg.add_sync_unit();
	if (syncUnit)
	{
		const NFVector3& v = newVar.GetVector3();
		*syncUnit->mutable_pos() = NFINetModule::NFToPB(v);
		*syncUnit->mutable_mover() = NFINetModule::NFToPB(self);
		syncUnit->set_type(NFMsg::PosSyncUnit_EMoveType::PosSyncUnit_EMoveType_EET_TELEPORT);

		m_pKernelModule->SetPropertyVector3(self, NFrame::IObject::Position(), v);

		const int sceneID = m_pKernelModule->GetPropertyInt32(self, NFrame::Player::SceneID());
		const int groupID = m_pKernelModule->GetPropertyInt32(self, NFrame::Player::GroupID());

		m_pGameServerNet_ServerModule->SendGroupMsgPBToGate(NFMsg::ACK_MOVE, xMsg, sceneID, groupID);
	}

	return 0;
}
