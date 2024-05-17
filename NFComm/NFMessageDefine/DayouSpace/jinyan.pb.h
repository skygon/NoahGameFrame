// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: jinyan.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_jinyan_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_jinyan_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_jinyan_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_jinyan_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_jinyan_2eproto;
namespace jinyan {
class CNpcJieJin;
class CNpcJieJinDefaultTypeInternal;
extern CNpcJieJinDefaultTypeInternal _CNpcJieJin_default_instance_;
class CNpcJinyan;
class CNpcJinyanDefaultTypeInternal;
extern CNpcJinyanDefaultTypeInternal _CNpcJinyan_default_instance_;
class SNpcJieJin;
class SNpcJieJinDefaultTypeInternal;
extern SNpcJieJinDefaultTypeInternal _SNpcJieJin_default_instance_;
class SNpcJinyan;
class SNpcJinyanDefaultTypeInternal;
extern SNpcJinyanDefaultTypeInternal _SNpcJinyan_default_instance_;
}  // namespace jinyan
PROTOBUF_NAMESPACE_OPEN
template<> ::jinyan::CNpcJieJin* Arena::CreateMaybeMessage<::jinyan::CNpcJieJin>(Arena*);
template<> ::jinyan::CNpcJinyan* Arena::CreateMaybeMessage<::jinyan::CNpcJinyan>(Arena*);
template<> ::jinyan::SNpcJieJin* Arena::CreateMaybeMessage<::jinyan::SNpcJieJin>(Arena*);
template<> ::jinyan::SNpcJinyan* Arena::CreateMaybeMessage<::jinyan::SNpcJinyan>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace jinyan {

// ===================================================================

class CNpcJinyan :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:jinyan.CNpcJinyan) */ {
 public:
  CNpcJinyan();
  virtual ~CNpcJinyan();

  CNpcJinyan(const CNpcJinyan& from);
  CNpcJinyan(CNpcJinyan&& from) noexcept
    : CNpcJinyan() {
    *this = ::std::move(from);
  }

  inline CNpcJinyan& operator=(const CNpcJinyan& from) {
    CopyFrom(from);
    return *this;
  }
  inline CNpcJinyan& operator=(CNpcJinyan&& from) noexcept {
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
  static const CNpcJinyan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CNpcJinyan* internal_default_instance() {
    return reinterpret_cast<const CNpcJinyan*>(
               &_CNpcJinyan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CNpcJinyan& a, CNpcJinyan& b) {
    a.Swap(&b);
  }
  inline void Swap(CNpcJinyan* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CNpcJinyan* New() const final {
    return CreateMaybeMessage<CNpcJinyan>(nullptr);
  }

  CNpcJinyan* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CNpcJinyan>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CNpcJinyan& from);
  void MergeFrom(const CNpcJinyan& from);
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
  void InternalSwap(CNpcJinyan* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "jinyan.CNpcJinyan";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_jinyan_2eproto);
    return ::descriptor_table_jinyan_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
  };
  // int32 uid = 1;
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::int32 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:jinyan.CNpcJinyan)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 uid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_jinyan_2eproto;
};
// -------------------------------------------------------------------

class SNpcJinyan :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:jinyan.SNpcJinyan) */ {
 public:
  SNpcJinyan();
  virtual ~SNpcJinyan();

  SNpcJinyan(const SNpcJinyan& from);
  SNpcJinyan(SNpcJinyan&& from) noexcept
    : SNpcJinyan() {
    *this = ::std::move(from);
  }

  inline SNpcJinyan& operator=(const SNpcJinyan& from) {
    CopyFrom(from);
    return *this;
  }
  inline SNpcJinyan& operator=(SNpcJinyan&& from) noexcept {
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
  static const SNpcJinyan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SNpcJinyan* internal_default_instance() {
    return reinterpret_cast<const SNpcJinyan*>(
               &_SNpcJinyan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SNpcJinyan& a, SNpcJinyan& b) {
    a.Swap(&b);
  }
  inline void Swap(SNpcJinyan* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SNpcJinyan* New() const final {
    return CreateMaybeMessage<SNpcJinyan>(nullptr);
  }

  SNpcJinyan* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SNpcJinyan>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SNpcJinyan& from);
  void MergeFrom(const SNpcJinyan& from);
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
  void InternalSwap(SNpcJinyan* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "jinyan.SNpcJinyan";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_jinyan_2eproto);
    return ::descriptor_table_jinyan_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 3,
    kUidFieldNumber = 1,
    kCodeFieldNumber = 2,
  };
  // string msg = 3;
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

  // int32 uid = 1;
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::int32 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 code = 2;
  void clear_code();
  ::PROTOBUF_NAMESPACE_ID::int32 code() const;
  void set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_code() const;
  void _internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:jinyan.SNpcJinyan)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::int32 uid_;
  ::PROTOBUF_NAMESPACE_ID::int32 code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_jinyan_2eproto;
};
// -------------------------------------------------------------------

class CNpcJieJin :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:jinyan.CNpcJieJin) */ {
 public:
  CNpcJieJin();
  virtual ~CNpcJieJin();

  CNpcJieJin(const CNpcJieJin& from);
  CNpcJieJin(CNpcJieJin&& from) noexcept
    : CNpcJieJin() {
    *this = ::std::move(from);
  }

  inline CNpcJieJin& operator=(const CNpcJieJin& from) {
    CopyFrom(from);
    return *this;
  }
  inline CNpcJieJin& operator=(CNpcJieJin&& from) noexcept {
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
  static const CNpcJieJin& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CNpcJieJin* internal_default_instance() {
    return reinterpret_cast<const CNpcJieJin*>(
               &_CNpcJieJin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CNpcJieJin& a, CNpcJieJin& b) {
    a.Swap(&b);
  }
  inline void Swap(CNpcJieJin* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CNpcJieJin* New() const final {
    return CreateMaybeMessage<CNpcJieJin>(nullptr);
  }

  CNpcJieJin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CNpcJieJin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CNpcJieJin& from);
  void MergeFrom(const CNpcJieJin& from);
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
  void InternalSwap(CNpcJieJin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "jinyan.CNpcJieJin";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_jinyan_2eproto);
    return ::descriptor_table_jinyan_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
  };
  // int32 uid = 1;
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::int32 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:jinyan.CNpcJieJin)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 uid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_jinyan_2eproto;
};
// -------------------------------------------------------------------

class SNpcJieJin :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:jinyan.SNpcJieJin) */ {
 public:
  SNpcJieJin();
  virtual ~SNpcJieJin();

  SNpcJieJin(const SNpcJieJin& from);
  SNpcJieJin(SNpcJieJin&& from) noexcept
    : SNpcJieJin() {
    *this = ::std::move(from);
  }

  inline SNpcJieJin& operator=(const SNpcJieJin& from) {
    CopyFrom(from);
    return *this;
  }
  inline SNpcJieJin& operator=(SNpcJieJin&& from) noexcept {
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
  static const SNpcJieJin& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SNpcJieJin* internal_default_instance() {
    return reinterpret_cast<const SNpcJieJin*>(
               &_SNpcJieJin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SNpcJieJin& a, SNpcJieJin& b) {
    a.Swap(&b);
  }
  inline void Swap(SNpcJieJin* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SNpcJieJin* New() const final {
    return CreateMaybeMessage<SNpcJieJin>(nullptr);
  }

  SNpcJieJin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SNpcJieJin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SNpcJieJin& from);
  void MergeFrom(const SNpcJieJin& from);
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
  void InternalSwap(SNpcJieJin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "jinyan.SNpcJieJin";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_jinyan_2eproto);
    return ::descriptor_table_jinyan_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 3,
    kUidFieldNumber = 1,
    kCodeFieldNumber = 2,
  };
  // string msg = 3;
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

  // int32 uid = 1;
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::int32 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 code = 2;
  void clear_code();
  ::PROTOBUF_NAMESPACE_ID::int32 code() const;
  void set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_code() const;
  void _internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:jinyan.SNpcJieJin)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::int32 uid_;
  ::PROTOBUF_NAMESPACE_ID::int32 code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_jinyan_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CNpcJinyan

// int32 uid = 1;
inline void CNpcJinyan::clear_uid() {
  uid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CNpcJinyan::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CNpcJinyan::uid() const {
  // @@protoc_insertion_point(field_get:jinyan.CNpcJinyan.uid)
  return _internal_uid();
}
inline void CNpcJinyan::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  uid_ = value;
}
inline void CNpcJinyan::set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:jinyan.CNpcJinyan.uid)
}

// -------------------------------------------------------------------

// SNpcJinyan

// int32 uid = 1;
inline void SNpcJinyan::clear_uid() {
  uid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJinyan::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJinyan::uid() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJinyan.uid)
  return _internal_uid();
}
inline void SNpcJinyan::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  uid_ = value;
}
inline void SNpcJinyan::set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJinyan.uid)
}

// int32 code = 2;
inline void SNpcJinyan::clear_code() {
  code_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJinyan::_internal_code() const {
  return code_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJinyan::code() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJinyan.code)
  return _internal_code();
}
inline void SNpcJinyan::_internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  code_ = value;
}
inline void SNpcJinyan::set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJinyan.code)
}

// string msg = 3;
inline void SNpcJinyan::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SNpcJinyan::msg() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJinyan.msg)
  return _internal_msg();
}
inline void SNpcJinyan::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJinyan.msg)
}
inline std::string* SNpcJinyan::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:jinyan.SNpcJinyan.msg)
  return _internal_mutable_msg();
}
inline const std::string& SNpcJinyan::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void SNpcJinyan::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SNpcJinyan::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jinyan.SNpcJinyan.msg)
}
inline void SNpcJinyan::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jinyan.SNpcJinyan.msg)
}
inline void SNpcJinyan::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jinyan.SNpcJinyan.msg)
}
inline std::string* SNpcJinyan::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SNpcJinyan::release_msg() {
  // @@protoc_insertion_point(field_release:jinyan.SNpcJinyan.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SNpcJinyan::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:jinyan.SNpcJinyan.msg)
}

// -------------------------------------------------------------------

// CNpcJieJin

// int32 uid = 1;
inline void CNpcJieJin::clear_uid() {
  uid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CNpcJieJin::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CNpcJieJin::uid() const {
  // @@protoc_insertion_point(field_get:jinyan.CNpcJieJin.uid)
  return _internal_uid();
}
inline void CNpcJieJin::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  uid_ = value;
}
inline void CNpcJieJin::set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:jinyan.CNpcJieJin.uid)
}

// -------------------------------------------------------------------

// SNpcJieJin

// int32 uid = 1;
inline void SNpcJieJin::clear_uid() {
  uid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJieJin::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJieJin::uid() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJieJin.uid)
  return _internal_uid();
}
inline void SNpcJieJin::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  uid_ = value;
}
inline void SNpcJieJin::set_uid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJieJin.uid)
}

// int32 code = 2;
inline void SNpcJieJin::clear_code() {
  code_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJieJin::_internal_code() const {
  return code_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SNpcJieJin::code() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJieJin.code)
  return _internal_code();
}
inline void SNpcJieJin::_internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  code_ = value;
}
inline void SNpcJieJin::set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJieJin.code)
}

// string msg = 3;
inline void SNpcJieJin::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SNpcJieJin::msg() const {
  // @@protoc_insertion_point(field_get:jinyan.SNpcJieJin.msg)
  return _internal_msg();
}
inline void SNpcJieJin::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:jinyan.SNpcJieJin.msg)
}
inline std::string* SNpcJieJin::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:jinyan.SNpcJieJin.msg)
  return _internal_mutable_msg();
}
inline const std::string& SNpcJieJin::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void SNpcJieJin::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SNpcJieJin::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jinyan.SNpcJieJin.msg)
}
inline void SNpcJieJin::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jinyan.SNpcJieJin.msg)
}
inline void SNpcJieJin::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jinyan.SNpcJieJin.msg)
}
inline std::string* SNpcJieJin::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SNpcJieJin::release_msg() {
  // @@protoc_insertion_point(field_release:jinyan.SNpcJieJin.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SNpcJieJin::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:jinyan.SNpcJieJin.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace jinyan

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_jinyan_2eproto