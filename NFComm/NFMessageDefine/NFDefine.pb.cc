// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFDefine.proto

#include "NFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace NFMsg {
}  // namespace NFMsg
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_NFDefine_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_NFDefine_2eproto[6];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_NFDefine_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_NFDefine_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_NFDefine_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016NFDefine.proto\022\005NFMsg*\202\004\n\016EGameEventCo"
  "de\022\013\n\007SUCCESS\020\000\022\020\n\014UNKOWN_ERROR\020\001\022\021\n\rACC"
  "OUNT_EXIST\020\002\022\026\n\022ACCOUNTPWD_INVALID\020\003\022\021\n\r"
  "ACCOUNT_USING\020\004\022\022\n\016ACCOUNT_LOCKED\020\005\022\031\n\025A"
  "CCOUNT_LOGIN_SUCCESS\020\006\022\026\n\022VERIFY_KEY_SUC"
  "CESS\020\007\022\023\n\017VERIFY_KEY_FAIL\020\010\022\030\n\024SELECTSER"
  "VER_SUCCESS\020\t\022\025\n\021SELECTSERVER_FAIL\020\n\022\023\n\017"
  "CHARACTER_EXIST\020n\022\025\n\021SVRZONEID_INVALID\020o"
  "\022\024\n\020CHARACTER_NUMOUT\020p\022\025\n\021CHARACTER_INVA"
  "LID\020q\022\026\n\022CHARACTER_NOTEXIST\020r\022\023\n\017CHARACT"
  "ER_USING\020s\022\024\n\020CHARACTER_LOCKED\020t\022\021\n\rZONE"
  "_OVERLOAD\020u\022\016\n\nNOT_ONLINE\020v\022\031\n\024INSUFFICI"
  "ENT_DIAMOND\020\310\001\022\026\n\021INSUFFICIENT_GOLD\020\311\001\022\024"
  "\n\017INSUFFICIENT_SP\020\312\001*\343\020\n\nEGameMsgID\022\n\n\006U"
  "NKNOW\020\000\022\022\n\014EVENT_RESULT\020\241\234\001\022\025\n\017EVENT_TRA"
  "NSPORT\020\242\234\001\022\022\n\014CLOSE_SOCKET\020\243\234\001\022\032\n\024WTM_WO"
  "RLD_REGISTERED\020\252\234\001\022\034\n\026WTM_WORLD_UNREGIST"
  "ERED\020\253\234\001\022\027\n\021WTM_WORLD_REFRESH\020\254\234\001\022\032\n\024LTM"
  "_LOGIN_REGISTERED\020\264\234\001\022\034\n\026LTM_LOGIN_UNREG"
  "ISTERED\020\265\234\001\022\027\n\021LTM_LOGIN_REFRESH\020\266\234\001\022\033\n\025"
  "PTWG_PROXY_REGISTERED\020\276\234\001\022\035\n\027PTWG_PROXY_"
  "UNREGISTERED\020\277\234\001\022\030\n\022PTWG_PROXY_REFRESH\020\300"
  "\234\001\022\031\n\023GTW_GAME_REGISTERED\020\310\234\001\022\033\n\025GTW_GAM"
  "E_UNREGISTERED\020\311\234\001\022\026\n\020GTW_GAME_REFRESH\020\312"
  "\234\001\022\027\n\021DTW_DB_REGISTERED\020\334\234\001\022\031\n\023DTW_DB_UN"
  "REGISTERED\020\335\234\001\022\024\n\016DTW_DB_REFRESH\020\336\234\001\022\022\n\014"
  "STS_NET_INFO\020\346\234\001\022\022\n\014REQ_LAG_TEST\020\360\234\001\022\027\n\021"
  "ACK_GATE_LAG_TEST\020\361\234\001\022\027\n\021ACK_GAME_LAG_TE"
  "ST\020\362\234\001\022\027\n\021STS_SERVER_REPORT\020\372\234\001\022\024\n\016STS_H"
  "EART_BEAT\020\204\235\001\022\017\n\tREQ_LOGIN\020\205\235\001\022\017\n\tACK_LO"
  "GIN\020\206\235\001\022\020\n\nREQ_LOGOUT\020\207\235\001\022\024\n\016REQ_WORLD_L"
  "IST\020\216\235\001\022\024\n\016ACK_WORLD_LIST\020\217\235\001\022\027\n\021REQ_CON"
  "NECT_WORLD\020\220\235\001\022\027\n\021ACK_CONNECT_WORLD\020\221\235\001\022"
  "\033\n\025REQ_KICKED_FROM_WORLD\020\222\235\001\022\025\n\017REQ_CONN"
  "ECT_KEY\020\230\235\001\022\025\n\017ACK_CONNECT_KEY\020\232\235\001\022\027\n\021RE"
  "Q_SELECT_SERVER\020\242\235\001\022\027\n\021ACK_SELECT_SERVER"
  "\020\243\235\001\022\023\n\rREQ_ROLE_LIST\020\244\235\001\022\023\n\rACK_ROLE_LI"
  "ST\020\245\235\001\022\025\n\017REQ_CREATE_ROLE\020\246\235\001\022\025\n\017REQ_DEL"
  "ETE_ROLE\020\247\235\001\022\026\n\020REQ_RECOVER_ROLE\020\250\235\001\022\030\n\022"
  "REQ_LOAD_ROLE_DATA\020\254\235\001\022\030\n\022ACK_LOAD_ROLE_"
  "DATA\020\255\235\001\022\030\n\022REQ_SAVE_ROLE_DATA\020\256\235\001\022\030\n\022AC"
  "K_SAVE_ROLE_DATA\020\257\235\001\022\024\n\016REQ_ENTER_GAME\020\266"
  "\235\001\022\024\n\016ACK_ENTER_GAME\020\267\235\001\022\024\n\016REQ_LEAVE_GA"
  "ME\020\270\235\001\022\024\n\016ACK_LEAVE_GAME\020\271\235\001\022\024\n\016REQ_SWAP"
  "_SCENE\020\273\235\001\022\024\n\016ACK_SWAP_SCENE\020\274\235\001\022\031\n\023REQ_"
  "SWAP_HOME_SCENE\020\275\235\001\022\031\n\023ACK_SWAP_HOME_SCE"
  "NE\020\276\235\001\022\033\n\025REQ_ENTER_GAME_FINISH\020\277\235\001\022\033\n\025A"
  "CK_ENTER_GAME_FINISH\020\300\235\001\022\026\n\020ACK_OBJECT_E"
  "NTRY\020\350\235\001\022\026\n\020ACK_OBJECT_LEAVE\020\351\235\001\022\037\n\031ACK_"
  "OBJECT_PROPERTY_ENTRY\020\352\235\001\022\035\n\027ACK_OBJECT_"
  "RECORD_ENTRY\020\353\235\001\022\026\n\020ACK_PROPERTY_INT\020\362\235\001"
  "\022\030\n\022ACK_PROPERTY_FLOAT\020\363\235\001\022\031\n\023ACK_PROPER"
  "TY_STRING\020\364\235\001\022\031\n\023ACK_PROPERTY_OBJECT\020\366\235\001"
  "\022\032\n\024ACK_PROPERTY_VECTOR2\020\367\235\001\022\032\n\024ACK_PROP"
  "ERTY_VECTOR3\020\370\235\001\022\030\n\022ACK_PROPERTY_CLEAR\020\371"
  "\235\001\022\021\n\013ACK_ADD_ROW\020\374\235\001\022\024\n\016ACK_REMOVE_ROW\020"
  "\375\235\001\022\022\n\014ACK_SWAP_ROW\020\376\235\001\022\024\n\016ACK_RECORD_IN"
  "T\020\377\235\001\022\026\n\020ACK_RECORD_FLOAT\020\200\236\001\022\027\n\021ACK_REC"
  "ORD_STRING\020\202\236\001\022\027\n\021ACK_RECORD_OBJECT\020\203\236\001\022"
  "\030\n\022ACK_RECORD_VECTOR2\020\204\236\001\022\030\n\022ACK_RECORD_"
  "VECTOR3\020\205\236\001\022\026\n\020ACK_RECORD_CLEAR\020\232\236\001\022\025\n\017A"
  "CK_RECORD_SORT\020\233\236\001\022\027\n\021ACK_DATA_FINISHED\020"
  "\244\236\001\022\016\n\010REQ_MOVE\020\314\236\001\022\016\n\010ACK_MOVE\020\315\236\001\022\016\n\010R"
  "EQ_CHAT\020\376\236\001\022\016\n\010ACK_CHAT\020\377\236\001\022\027\n\021REQ_SKILL"
  "_OBJECTX\020\260\237\001\022\027\n\021ACK_SKILL_OBJECTX\020\261\237\001\022\023\n"
  "\rREQ_SKILL_POS\020\262\237\001\022\023\n\rACK_SKILL_POS\020\263\237\001\022"
  "\027\n\021ACK_ONLINE_NOTIFY\020\370\240\001\022\030\n\022ACK_OFFLINE_"
  "NOTIFY\020\371\240\001*G\n\tEItemType\022\r\n\tEIT_EQUIP\020\000\022\013"
  "\n\007EIT_GEM\020\001\022\016\n\nEIT_SUPPLY\020\002\022\016\n\nEIT_SCROL"
  "L\020\003*\267\001\n\nESkillType\022\026\n\022BRIEF_SINGLE_SKILL"
  "\020\000\022\025\n\021BRIEF_GROUP_SKILL\020\001\022\027\n\023BULLET_SING"
  "LE_SKILL\020\002\022\030\n\024BULLET_REBOUND_SKILL\020\003\022\034\n\030"
  "BULLET_TARGET_BOMB_SKILL\020\004\022\031\n\025BULLET_POS"
  "_BOMB_SKILL\020\005\022\016\n\nFUNC_SKILL\020\006*M\n\nESceneT"
  "ype\022\020\n\014NORMAL_SCENE\020\000\022\026\n\022SINGLE_CLONE_SC"
  "ENE\020\001\022\025\n\021MULTI_CLONE_SCENE\020\002*F\n\010ENPCType"
  "\022\016\n\nNORMAL_NPC\020\000\022\014\n\010HERO_NPC\020\001\022\016\n\nTURRET"
  "_NPC\020\002\022\014\n\010FUNC_NPC\020\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_NFDefine_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_NFDefine_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_NFDefine_2eproto_once;
static bool descriptor_table_NFDefine_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NFDefine_2eproto = {
  &descriptor_table_NFDefine_2eproto_initialized, descriptor_table_protodef_NFDefine_2eproto, "NFDefine.proto", 3108,
  &descriptor_table_NFDefine_2eproto_once, descriptor_table_NFDefine_2eproto_sccs, descriptor_table_NFDefine_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_NFDefine_2eproto::offsets,
  file_level_metadata_NFDefine_2eproto, 0, file_level_enum_descriptors_NFDefine_2eproto, file_level_service_descriptors_NFDefine_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_NFDefine_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_NFDefine_2eproto), true);
namespace NFMsg {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EGameEventCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[0];
}
bool EGameEventCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EGameMsgID_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[1];
}
bool EGameMsgID_IsValid(int value) {
  switch (value) {
    case 0:
    case 20001:
    case 20002:
    case 20003:
    case 20010:
    case 20011:
    case 20012:
    case 20020:
    case 20021:
    case 20022:
    case 20030:
    case 20031:
    case 20032:
    case 20040:
    case 20041:
    case 20042:
    case 20060:
    case 20061:
    case 20062:
    case 20070:
    case 20080:
    case 20081:
    case 20082:
    case 20090:
    case 20100:
    case 20101:
    case 20102:
    case 20103:
    case 20110:
    case 20111:
    case 20112:
    case 20113:
    case 20114:
    case 20120:
    case 20122:
    case 20130:
    case 20131:
    case 20132:
    case 20133:
    case 20134:
    case 20135:
    case 20136:
    case 20140:
    case 20141:
    case 20142:
    case 20143:
    case 20150:
    case 20151:
    case 20152:
    case 20153:
    case 20155:
    case 20156:
    case 20157:
    case 20158:
    case 20159:
    case 20160:
    case 20200:
    case 20201:
    case 20202:
    case 20203:
    case 20210:
    case 20211:
    case 20212:
    case 20214:
    case 20215:
    case 20216:
    case 20217:
    case 20220:
    case 20221:
    case 20222:
    case 20223:
    case 20224:
    case 20226:
    case 20227:
    case 20228:
    case 20229:
    case 20250:
    case 20251:
    case 20260:
    case 20300:
    case 20301:
    case 20350:
    case 20351:
    case 20400:
    case 20401:
    case 20402:
    case 20403:
    case 20600:
    case 20601:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EItemType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[2];
}
bool EItemType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ESkillType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[3];
}
bool ESkillType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ESceneType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[4];
}
bool ESceneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ENPCType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_NFDefine_2eproto);
  return file_level_enum_descriptors_NFDefine_2eproto[5];
}
bool ENPCType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace NFMsg
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
