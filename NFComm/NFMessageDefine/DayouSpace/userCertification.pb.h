// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: userCertification.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_userCertification_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_userCertification_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_userCertification_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_userCertification_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_userCertification_2eproto;
namespace userCertification {
class CUserCertificationDetail;
class CUserCertificationDetailDefaultTypeInternal;
extern CUserCertificationDetailDefaultTypeInternal _CUserCertificationDetail_default_instance_;
class SUserCertificationDetail;
class SUserCertificationDetailDefaultTypeInternal;
extern SUserCertificationDetailDefaultTypeInternal _SUserCertificationDetail_default_instance_;
}  // namespace userCertification
PROTOBUF_NAMESPACE_OPEN
template<> ::userCertification::CUserCertificationDetail* Arena::CreateMaybeMessage<::userCertification::CUserCertificationDetail>(Arena*);
template<> ::userCertification::SUserCertificationDetail* Arena::CreateMaybeMessage<::userCertification::SUserCertificationDetail>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace userCertification {

// ===================================================================

class CUserCertificationDetail :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:userCertification.CUserCertificationDetail) */ {
 public:
  CUserCertificationDetail();
  virtual ~CUserCertificationDetail();

  CUserCertificationDetail(const CUserCertificationDetail& from);
  CUserCertificationDetail(CUserCertificationDetail&& from) noexcept
    : CUserCertificationDetail() {
    *this = ::std::move(from);
  }

  inline CUserCertificationDetail& operator=(const CUserCertificationDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline CUserCertificationDetail& operator=(CUserCertificationDetail&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CUserCertificationDetail& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CUserCertificationDetail* internal_default_instance() {
    return reinterpret_cast<const CUserCertificationDetail*>(
               &_CUserCertificationDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CUserCertificationDetail& a, CUserCertificationDetail& b) {
    a.Swap(&b);
  }
  inline void Swap(CUserCertificationDetail* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CUserCertificationDetail* New() const final {
    return CreateMaybeMessage<CUserCertificationDetail>(nullptr);
  }

  CUserCertificationDetail* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CUserCertificationDetail>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CUserCertificationDetail& from);
  void MergeFrom(const CUserCertificationDetail& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CUserCertificationDetail* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "userCertification.CUserCertificationDetail";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_userCertification_2eproto);
    return ::descriptor_table_userCertification_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
  };
  // int32 userId = 1;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::int32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:userCertification.CUserCertificationDetail)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_userCertification_2eproto;
};
// -------------------------------------------------------------------

class SUserCertificationDetail :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:userCertification.SUserCertificationDetail) */ {
 public:
  SUserCertificationDetail();
  virtual ~SUserCertificationDetail();

  SUserCertificationDetail(const SUserCertificationDetail& from);
  SUserCertificationDetail(SUserCertificationDetail&& from) noexcept
    : SUserCertificationDetail() {
    *this = ::std::move(from);
  }

  inline SUserCertificationDetail& operator=(const SUserCertificationDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline SUserCertificationDetail& operator=(SUserCertificationDetail&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SUserCertificationDetail& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SUserCertificationDetail* internal_default_instance() {
    return reinterpret_cast<const SUserCertificationDetail*>(
               &_SUserCertificationDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SUserCertificationDetail& a, SUserCertificationDetail& b) {
    a.Swap(&b);
  }
  inline void Swap(SUserCertificationDetail* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SUserCertificationDetail* New() const final {
    return CreateMaybeMessage<SUserCertificationDetail>(nullptr);
  }

  SUserCertificationDetail* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SUserCertificationDetail>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SUserCertificationDetail& from);
  void MergeFrom(const SUserCertificationDetail& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SUserCertificationDetail* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "userCertification.SUserCertificationDetail";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_userCertification_2eproto);
    return ::descriptor_table_userCertification_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kDescribeFieldNumber = 3,
    kIdFieldNumber = 1,
    kUserIdFieldNumber = 4,
    kStatusFieldNumber = 5,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string describe = 3;
  void clear_describe();
  const std::string& describe() const;
  void set_describe(const std::string& value);
  void set_describe(std::string&& value);
  void set_describe(const char* value);
  void set_describe(const char* value, size_t size);
  std::string* mutable_describe();
  std::string* release_describe();
  void set_allocated_describe(std::string* describe);
  private:
  const std::string& _internal_describe() const;
  void _internal_set_describe(const std::string& value);
  std::string* _internal_mutable_describe();
  public:

  // int32 Id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 userId = 4;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::int32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 status = 5;
  void clear_status();
  ::PROTOBUF_NAMESPACE_ID::int32 status() const;
  void set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_status() const;
  void _internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:userCertification.SUserCertificationDetail)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr describe_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 userid_;
  ::PROTOBUF_NAMESPACE_ID::int32 status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_userCertification_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CUserCertificationDetail

// int32 userId = 1;
inline void CUserCertificationDetail::clear_userid() {
  userid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CUserCertificationDetail::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CUserCertificationDetail::userid() const {
  // @@protoc_insertion_point(field_get:userCertification.CUserCertificationDetail.userId)
  return _internal_userid();
}
inline void CUserCertificationDetail::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  userid_ = value;
}
inline void CUserCertificationDetail::set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:userCertification.CUserCertificationDetail.userId)
}

// -------------------------------------------------------------------

// SUserCertificationDetail

// int32 Id = 1;
inline void SUserCertificationDetail::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::id() const {
  // @@protoc_insertion_point(field_get:userCertification.SUserCertificationDetail.Id)
  return _internal_id();
}
inline void SUserCertificationDetail::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void SUserCertificationDetail::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:userCertification.SUserCertificationDetail.Id)
}

// string name = 2;
inline void SUserCertificationDetail::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SUserCertificationDetail::name() const {
  // @@protoc_insertion_point(field_get:userCertification.SUserCertificationDetail.name)
  return _internal_name();
}
inline void SUserCertificationDetail::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:userCertification.SUserCertificationDetail.name)
}
inline std::string* SUserCertificationDetail::mutable_name() {
  // @@protoc_insertion_point(field_mutable:userCertification.SUserCertificationDetail.name)
  return _internal_mutable_name();
}
inline const std::string& SUserCertificationDetail::_internal_name() const {
  return name_.GetNoArena();
}
inline void SUserCertificationDetail::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SUserCertificationDetail::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userCertification.SUserCertificationDetail.name)
}
inline void SUserCertificationDetail::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userCertification.SUserCertificationDetail.name)
}
inline void SUserCertificationDetail::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userCertification.SUserCertificationDetail.name)
}
inline std::string* SUserCertificationDetail::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SUserCertificationDetail::release_name() {
  // @@protoc_insertion_point(field_release:userCertification.SUserCertificationDetail.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SUserCertificationDetail::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:userCertification.SUserCertificationDetail.name)
}

// string describe = 3;
inline void SUserCertificationDetail::clear_describe() {
  describe_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SUserCertificationDetail::describe() const {
  // @@protoc_insertion_point(field_get:userCertification.SUserCertificationDetail.describe)
  return _internal_describe();
}
inline void SUserCertificationDetail::set_describe(const std::string& value) {
  _internal_set_describe(value);
  // @@protoc_insertion_point(field_set:userCertification.SUserCertificationDetail.describe)
}
inline std::string* SUserCertificationDetail::mutable_describe() {
  // @@protoc_insertion_point(field_mutable:userCertification.SUserCertificationDetail.describe)
  return _internal_mutable_describe();
}
inline const std::string& SUserCertificationDetail::_internal_describe() const {
  return describe_.GetNoArena();
}
inline void SUserCertificationDetail::_internal_set_describe(const std::string& value) {
  
  describe_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SUserCertificationDetail::set_describe(std::string&& value) {
  
  describe_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userCertification.SUserCertificationDetail.describe)
}
inline void SUserCertificationDetail::set_describe(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  describe_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userCertification.SUserCertificationDetail.describe)
}
inline void SUserCertificationDetail::set_describe(const char* value, size_t size) {
  
  describe_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userCertification.SUserCertificationDetail.describe)
}
inline std::string* SUserCertificationDetail::_internal_mutable_describe() {
  
  return describe_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SUserCertificationDetail::release_describe() {
  // @@protoc_insertion_point(field_release:userCertification.SUserCertificationDetail.describe)
  
  return describe_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SUserCertificationDetail::set_allocated_describe(std::string* describe) {
  if (describe != nullptr) {
    
  } else {
    
  }
  describe_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), describe);
  // @@protoc_insertion_point(field_set_allocated:userCertification.SUserCertificationDetail.describe)
}

// int32 userId = 4;
inline void SUserCertificationDetail::clear_userid() {
  userid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::userid() const {
  // @@protoc_insertion_point(field_get:userCertification.SUserCertificationDetail.userId)
  return _internal_userid();
}
inline void SUserCertificationDetail::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  userid_ = value;
}
inline void SUserCertificationDetail::set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:userCertification.SUserCertificationDetail.userId)
}

// int32 status = 5;
inline void SUserCertificationDetail::clear_status() {
  status_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::_internal_status() const {
  return status_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserCertificationDetail::status() const {
  // @@protoc_insertion_point(field_get:userCertification.SUserCertificationDetail.status)
  return _internal_status();
}
inline void SUserCertificationDetail::_internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  status_ = value;
}
inline void SUserCertificationDetail::set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:userCertification.SUserCertificationDetail.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace userCertification

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_userCertification_2eproto