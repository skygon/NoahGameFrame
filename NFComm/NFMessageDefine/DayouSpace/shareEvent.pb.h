// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shareEvent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_shareEvent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_shareEvent_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_shareEvent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_shareEvent_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_shareEvent_2eproto;
namespace shareEvent {
class CShareEventRecord;
class CShareEventRecordDefaultTypeInternal;
extern CShareEventRecordDefaultTypeInternal _CShareEventRecord_default_instance_;
class SShareEventNotification;
class SShareEventNotificationDefaultTypeInternal;
extern SShareEventNotificationDefaultTypeInternal _SShareEventNotification_default_instance_;
class SShareEventRecord;
class SShareEventRecordDefaultTypeInternal;
extern SShareEventRecordDefaultTypeInternal _SShareEventRecord_default_instance_;
class SShareFinalSpaceMessage;
class SShareFinalSpaceMessageDefaultTypeInternal;
extern SShareFinalSpaceMessageDefaultTypeInternal _SShareFinalSpaceMessage_default_instance_;
}  // namespace shareEvent
PROTOBUF_NAMESPACE_OPEN
template<> ::shareEvent::CShareEventRecord* Arena::CreateMaybeMessage<::shareEvent::CShareEventRecord>(Arena*);
template<> ::shareEvent::SShareEventNotification* Arena::CreateMaybeMessage<::shareEvent::SShareEventNotification>(Arena*);
template<> ::shareEvent::SShareEventRecord* Arena::CreateMaybeMessage<::shareEvent::SShareEventRecord>(Arena*);
template<> ::shareEvent::SShareFinalSpaceMessage* Arena::CreateMaybeMessage<::shareEvent::SShareFinalSpaceMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace shareEvent {

// ===================================================================

class CShareEventRecord :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:shareEvent.CShareEventRecord) */ {
 public:
  CShareEventRecord();
  virtual ~CShareEventRecord();

  CShareEventRecord(const CShareEventRecord& from);
  CShareEventRecord(CShareEventRecord&& from) noexcept
    : CShareEventRecord() {
    *this = ::std::move(from);
  }

  inline CShareEventRecord& operator=(const CShareEventRecord& from) {
    CopyFrom(from);
    return *this;
  }
  inline CShareEventRecord& operator=(CShareEventRecord&& from) noexcept {
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
  static const CShareEventRecord& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CShareEventRecord* internal_default_instance() {
    return reinterpret_cast<const CShareEventRecord*>(
               &_CShareEventRecord_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CShareEventRecord& a, CShareEventRecord& b) {
    a.Swap(&b);
  }
  inline void Swap(CShareEventRecord* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CShareEventRecord* New() const final {
    return CreateMaybeMessage<CShareEventRecord>(nullptr);
  }

  CShareEventRecord* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CShareEventRecord>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CShareEventRecord& from);
  void MergeFrom(const CShareEventRecord& from);
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
  void InternalSwap(CShareEventRecord* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "shareEvent.CShareEventRecord";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shareEvent_2eproto);
    return ::descriptor_table_shareEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShareUidFieldNumber = 1,
  };
  // int32 shareUid = 1;
  void clear_shareuid();
  ::PROTOBUF_NAMESPACE_ID::int32 shareuid() const;
  void set_shareuid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_shareuid() const;
  void _internal_set_shareuid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:shareEvent.CShareEventRecord)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 shareuid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shareEvent_2eproto;
};
// -------------------------------------------------------------------

class SShareEventRecord :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:shareEvent.SShareEventRecord) */ {
 public:
  SShareEventRecord();
  virtual ~SShareEventRecord();

  SShareEventRecord(const SShareEventRecord& from);
  SShareEventRecord(SShareEventRecord&& from) noexcept
    : SShareEventRecord() {
    *this = ::std::move(from);
  }

  inline SShareEventRecord& operator=(const SShareEventRecord& from) {
    CopyFrom(from);
    return *this;
  }
  inline SShareEventRecord& operator=(SShareEventRecord&& from) noexcept {
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
  static const SShareEventRecord& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SShareEventRecord* internal_default_instance() {
    return reinterpret_cast<const SShareEventRecord*>(
               &_SShareEventRecord_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SShareEventRecord& a, SShareEventRecord& b) {
    a.Swap(&b);
  }
  inline void Swap(SShareEventRecord* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SShareEventRecord* New() const final {
    return CreateMaybeMessage<SShareEventRecord>(nullptr);
  }

  SShareEventRecord* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SShareEventRecord>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SShareEventRecord& from);
  void MergeFrom(const SShareEventRecord& from);
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
  void InternalSwap(SShareEventRecord* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "shareEvent.SShareEventRecord";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shareEvent_2eproto);
    return ::descriptor_table_shareEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStatusFieldNumber = 1,
  };
  // int32 status = 1;
  void clear_status();
  ::PROTOBUF_NAMESPACE_ID::int32 status() const;
  void set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_status() const;
  void _internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:shareEvent.SShareEventRecord)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shareEvent_2eproto;
};
// -------------------------------------------------------------------

class SShareEventNotification :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:shareEvent.SShareEventNotification) */ {
 public:
  SShareEventNotification();
  virtual ~SShareEventNotification();

  SShareEventNotification(const SShareEventNotification& from);
  SShareEventNotification(SShareEventNotification&& from) noexcept
    : SShareEventNotification() {
    *this = ::std::move(from);
  }

  inline SShareEventNotification& operator=(const SShareEventNotification& from) {
    CopyFrom(from);
    return *this;
  }
  inline SShareEventNotification& operator=(SShareEventNotification&& from) noexcept {
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
  static const SShareEventNotification& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SShareEventNotification* internal_default_instance() {
    return reinterpret_cast<const SShareEventNotification*>(
               &_SShareEventNotification_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SShareEventNotification& a, SShareEventNotification& b) {
    a.Swap(&b);
  }
  inline void Swap(SShareEventNotification* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SShareEventNotification* New() const final {
    return CreateMaybeMessage<SShareEventNotification>(nullptr);
  }

  SShareEventNotification* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SShareEventNotification>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SShareEventNotification& from);
  void MergeFrom(const SShareEventNotification& from);
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
  void InternalSwap(SShareEventNotification* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "shareEvent.SShareEventNotification";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shareEvent_2eproto);
    return ::descriptor_table_shareEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
  };
  // string msg = 1;
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // @@protoc_insertion_point(class_scope:shareEvent.SShareEventNotification)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shareEvent_2eproto;
};
// -------------------------------------------------------------------

class SShareFinalSpaceMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:shareEvent.SShareFinalSpaceMessage) */ {
 public:
  SShareFinalSpaceMessage();
  virtual ~SShareFinalSpaceMessage();

  SShareFinalSpaceMessage(const SShareFinalSpaceMessage& from);
  SShareFinalSpaceMessage(SShareFinalSpaceMessage&& from) noexcept
    : SShareFinalSpaceMessage() {
    *this = ::std::move(from);
  }

  inline SShareFinalSpaceMessage& operator=(const SShareFinalSpaceMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline SShareFinalSpaceMessage& operator=(SShareFinalSpaceMessage&& from) noexcept {
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
  static const SShareFinalSpaceMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SShareFinalSpaceMessage* internal_default_instance() {
    return reinterpret_cast<const SShareFinalSpaceMessage*>(
               &_SShareFinalSpaceMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SShareFinalSpaceMessage& a, SShareFinalSpaceMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(SShareFinalSpaceMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SShareFinalSpaceMessage* New() const final {
    return CreateMaybeMessage<SShareFinalSpaceMessage>(nullptr);
  }

  SShareFinalSpaceMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SShareFinalSpaceMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SShareFinalSpaceMessage& from);
  void MergeFrom(const SShareFinalSpaceMessage& from);
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
  void InternalSwap(SShareFinalSpaceMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "shareEvent.SShareFinalSpaceMessage";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shareEvent_2eproto);
    return ::descriptor_table_shareEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSpaceNameFieldNumber = 3,
    kHouseIdFieldNumber = 1,
    kHouseTypeFieldNumber = 2,
  };
  // string spaceName = 3;
  void clear_spacename();
  const std::string& spacename() const;
  void set_spacename(const std::string& value);
  void set_spacename(std::string&& value);
  void set_spacename(const char* value);
  void set_spacename(const char* value, size_t size);
  std::string* mutable_spacename();
  std::string* release_spacename();
  void set_allocated_spacename(std::string* spacename);
  private:
  const std::string& _internal_spacename() const;
  void _internal_set_spacename(const std::string& value);
  std::string* _internal_mutable_spacename();
  public:

  // int32 houseId = 1;
  void clear_houseid();
  ::PROTOBUF_NAMESPACE_ID::int32 houseid() const;
  void set_houseid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_houseid() const;
  void _internal_set_houseid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 houseType = 2;
  void clear_housetype();
  ::PROTOBUF_NAMESPACE_ID::int32 housetype() const;
  void set_housetype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_housetype() const;
  void _internal_set_housetype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:shareEvent.SShareFinalSpaceMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr spacename_;
  ::PROTOBUF_NAMESPACE_ID::int32 houseid_;
  ::PROTOBUF_NAMESPACE_ID::int32 housetype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shareEvent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CShareEventRecord

// int32 shareUid = 1;
inline void CShareEventRecord::clear_shareuid() {
  shareuid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CShareEventRecord::_internal_shareuid() const {
  return shareuid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CShareEventRecord::shareuid() const {
  // @@protoc_insertion_point(field_get:shareEvent.CShareEventRecord.shareUid)
  return _internal_shareuid();
}
inline void CShareEventRecord::_internal_set_shareuid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  shareuid_ = value;
}
inline void CShareEventRecord::set_shareuid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_shareuid(value);
  // @@protoc_insertion_point(field_set:shareEvent.CShareEventRecord.shareUid)
}

// -------------------------------------------------------------------

// SShareEventRecord

// int32 status = 1;
inline void SShareEventRecord::clear_status() {
  status_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareEventRecord::_internal_status() const {
  return status_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareEventRecord::status() const {
  // @@protoc_insertion_point(field_get:shareEvent.SShareEventRecord.status)
  return _internal_status();
}
inline void SShareEventRecord::_internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  status_ = value;
}
inline void SShareEventRecord::set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:shareEvent.SShareEventRecord.status)
}

// -------------------------------------------------------------------

// SShareEventNotification

// string msg = 1;
inline void SShareEventNotification::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SShareEventNotification::msg() const {
  // @@protoc_insertion_point(field_get:shareEvent.SShareEventNotification.msg)
  return _internal_msg();
}
inline void SShareEventNotification::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:shareEvent.SShareEventNotification.msg)
}
inline std::string* SShareEventNotification::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:shareEvent.SShareEventNotification.msg)
  return _internal_mutable_msg();
}
inline const std::string& SShareEventNotification::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void SShareEventNotification::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SShareEventNotification::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:shareEvent.SShareEventNotification.msg)
}
inline void SShareEventNotification::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:shareEvent.SShareEventNotification.msg)
}
inline void SShareEventNotification::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:shareEvent.SShareEventNotification.msg)
}
inline std::string* SShareEventNotification::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SShareEventNotification::release_msg() {
  // @@protoc_insertion_point(field_release:shareEvent.SShareEventNotification.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SShareEventNotification::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:shareEvent.SShareEventNotification.msg)
}

// -------------------------------------------------------------------

// SShareFinalSpaceMessage

// int32 houseId = 1;
inline void SShareFinalSpaceMessage::clear_houseid() {
  houseid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareFinalSpaceMessage::_internal_houseid() const {
  return houseid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareFinalSpaceMessage::houseid() const {
  // @@protoc_insertion_point(field_get:shareEvent.SShareFinalSpaceMessage.houseId)
  return _internal_houseid();
}
inline void SShareFinalSpaceMessage::_internal_set_houseid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  houseid_ = value;
}
inline void SShareFinalSpaceMessage::set_houseid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_houseid(value);
  // @@protoc_insertion_point(field_set:shareEvent.SShareFinalSpaceMessage.houseId)
}

// int32 houseType = 2;
inline void SShareFinalSpaceMessage::clear_housetype() {
  housetype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareFinalSpaceMessage::_internal_housetype() const {
  return housetype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SShareFinalSpaceMessage::housetype() const {
  // @@protoc_insertion_point(field_get:shareEvent.SShareFinalSpaceMessage.houseType)
  return _internal_housetype();
}
inline void SShareFinalSpaceMessage::_internal_set_housetype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  housetype_ = value;
}
inline void SShareFinalSpaceMessage::set_housetype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_housetype(value);
  // @@protoc_insertion_point(field_set:shareEvent.SShareFinalSpaceMessage.houseType)
}

// string spaceName = 3;
inline void SShareFinalSpaceMessage::clear_spacename() {
  spacename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SShareFinalSpaceMessage::spacename() const {
  // @@protoc_insertion_point(field_get:shareEvent.SShareFinalSpaceMessage.spaceName)
  return _internal_spacename();
}
inline void SShareFinalSpaceMessage::set_spacename(const std::string& value) {
  _internal_set_spacename(value);
  // @@protoc_insertion_point(field_set:shareEvent.SShareFinalSpaceMessage.spaceName)
}
inline std::string* SShareFinalSpaceMessage::mutable_spacename() {
  // @@protoc_insertion_point(field_mutable:shareEvent.SShareFinalSpaceMessage.spaceName)
  return _internal_mutable_spacename();
}
inline const std::string& SShareFinalSpaceMessage::_internal_spacename() const {
  return spacename_.GetNoArena();
}
inline void SShareFinalSpaceMessage::_internal_set_spacename(const std::string& value) {
  
  spacename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SShareFinalSpaceMessage::set_spacename(std::string&& value) {
  
  spacename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:shareEvent.SShareFinalSpaceMessage.spaceName)
}
inline void SShareFinalSpaceMessage::set_spacename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  spacename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:shareEvent.SShareFinalSpaceMessage.spaceName)
}
inline void SShareFinalSpaceMessage::set_spacename(const char* value, size_t size) {
  
  spacename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:shareEvent.SShareFinalSpaceMessage.spaceName)
}
inline std::string* SShareFinalSpaceMessage::_internal_mutable_spacename() {
  
  return spacename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SShareFinalSpaceMessage::release_spacename() {
  // @@protoc_insertion_point(field_release:shareEvent.SShareFinalSpaceMessage.spaceName)
  
  return spacename_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SShareFinalSpaceMessage::set_allocated_spacename(std::string* spacename) {
  if (spacename != nullptr) {
    
  } else {
    
  }
  spacename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), spacename);
  // @@protoc_insertion_point(field_set_allocated:shareEvent.SShareFinalSpaceMessage.spaceName)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace shareEvent

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_shareEvent_2eproto
