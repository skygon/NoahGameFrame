// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: errCode.proto

#include "errCode.pb.h"

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
namespace error {
}  // namespace error
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_errCode_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_errCode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_errCode_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_errCode_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_errCode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rerrCode.proto\022\005error*\252\001\n\003Err\022\017\n\013ERR_SU"
  "CCESS\020\000\022\021\n\013ERR_GENERAL\020\240\215\006\022\034\n\026ERR_UNDEFI"
  "NED_PROTOCOL\020\241\215\006\022\035\n\027ERR_PROTOCOL_PARSE_F"
  "AIL\020\242\215\006\022\025\n\017ERR_TOKEN_ERROR\020\205\216\006\022\027\n\021ERR_TO"
  "KEN_EXPIRED\020\206\216\006\022\022\n\014ERR_DB_ERROR\020\351\216\006B\032\n\030c"
  "om.dayou.space.protobufb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_errCode_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_errCode_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_errCode_2eproto_once;
static bool descriptor_table_errCode_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_errCode_2eproto = {
  &descriptor_table_errCode_2eproto_initialized, descriptor_table_protodef_errCode_2eproto, "errCode.proto", 231,
  &descriptor_table_errCode_2eproto_once, descriptor_table_errCode_2eproto_sccs, descriptor_table_errCode_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_errCode_2eproto::offsets,
  file_level_metadata_errCode_2eproto, 0, file_level_enum_descriptors_errCode_2eproto, file_level_service_descriptors_errCode_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_errCode_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_errCode_2eproto), true);
namespace error {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Err_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_errCode_2eproto);
  return file_level_enum_descriptors_errCode_2eproto[0];
}
bool Err_IsValid(int value) {
  switch (value) {
    case 0:
    case 100000:
    case 100001:
    case 100002:
    case 100101:
    case 100102:
    case 100201:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace error
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
