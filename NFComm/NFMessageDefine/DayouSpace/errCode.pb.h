// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: errCode.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_errCode_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_errCode_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_errCode_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_errCode_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_errCode_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace error {

enum Err : int {
  ERR_SUCCESS = 0,
  ERR_GENERAL = 100000,
  ERR_UNDEFINED_PROTOCOL = 100001,
  ERR_PROTOCOL_PARSE_FAIL = 100002,
  ERR_TOKEN_ERROR = 100101,
  ERR_TOKEN_EXPIRED = 100102,
  ERR_DB_ERROR = 100201,
  Err_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Err_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Err_IsValid(int value);
constexpr Err Err_MIN = ERR_SUCCESS;
constexpr Err Err_MAX = ERR_DB_ERROR;
constexpr int Err_ARRAYSIZE = Err_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Err_descriptor();
template<typename T>
inline const std::string& Err_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Err>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Err_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Err_descriptor(), enum_t_value);
}
inline bool Err_Parse(
    const std::string& name, Err* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Err>(
    Err_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace error

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::error::Err> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::error::Err>() {
  return ::error::Err_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_errCode_2eproto