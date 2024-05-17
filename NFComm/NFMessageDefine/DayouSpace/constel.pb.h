// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: constel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_constel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_constel_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_constel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_constel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[5]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_constel_2eproto;
namespace horoscope {
class CConstel;
class CConstelDefaultTypeInternal;
extern CConstelDefaultTypeInternal _CConstel_default_instance_;
class CSaveConstel;
class CSaveConstelDefaultTypeInternal;
extern CSaveConstelDefaultTypeInternal _CSaveConstel_default_instance_;
class SConstel;
class SConstelDefaultTypeInternal;
extern SConstelDefaultTypeInternal _SConstel_default_instance_;
class SSaveConstel;
class SSaveConstelDefaultTypeInternal;
extern SSaveConstelDefaultTypeInternal _SSaveConstel_default_instance_;
class SUserConstelInfo;
class SUserConstelInfoDefaultTypeInternal;
extern SUserConstelInfoDefaultTypeInternal _SUserConstelInfo_default_instance_;
}  // namespace horoscope
PROTOBUF_NAMESPACE_OPEN
template<> ::horoscope::CConstel* Arena::CreateMaybeMessage<::horoscope::CConstel>(Arena*);
template<> ::horoscope::CSaveConstel* Arena::CreateMaybeMessage<::horoscope::CSaveConstel>(Arena*);
template<> ::horoscope::SConstel* Arena::CreateMaybeMessage<::horoscope::SConstel>(Arena*);
template<> ::horoscope::SSaveConstel* Arena::CreateMaybeMessage<::horoscope::SSaveConstel>(Arena*);
template<> ::horoscope::SUserConstelInfo* Arena::CreateMaybeMessage<::horoscope::SUserConstelInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace horoscope {

// ===================================================================

class CConstel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:horoscope.CConstel) */ {
 public:
  CConstel();
  virtual ~CConstel();

  CConstel(const CConstel& from);
  CConstel(CConstel&& from) noexcept
    : CConstel() {
    *this = ::std::move(from);
  }

  inline CConstel& operator=(const CConstel& from) {
    CopyFrom(from);
    return *this;
  }
  inline CConstel& operator=(CConstel&& from) noexcept {
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
  static const CConstel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CConstel* internal_default_instance() {
    return reinterpret_cast<const CConstel*>(
               &_CConstel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CConstel& a, CConstel& b) {
    a.Swap(&b);
  }
  inline void Swap(CConstel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CConstel* New() const final {
    return CreateMaybeMessage<CConstel>(nullptr);
  }

  CConstel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CConstel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CConstel& from);
  void MergeFrom(const CConstel& from);
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
  void InternalSwap(CConstel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "horoscope.CConstel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_constel_2eproto);
    return ::descriptor_table_constel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConstelIDFieldNumber = 1,
  };
  // int32 constelID = 1;
  void clear_constelid();
  ::PROTOBUF_NAMESPACE_ID::int32 constelid() const;
  void set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_constelid() const;
  void _internal_set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:horoscope.CConstel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 constelid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_constel_2eproto;
};
// -------------------------------------------------------------------

class SConstel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:horoscope.SConstel) */ {
 public:
  SConstel();
  virtual ~SConstel();

  SConstel(const SConstel& from);
  SConstel(SConstel&& from) noexcept
    : SConstel() {
    *this = ::std::move(from);
  }

  inline SConstel& operator=(const SConstel& from) {
    CopyFrom(from);
    return *this;
  }
  inline SConstel& operator=(SConstel&& from) noexcept {
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
  static const SConstel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SConstel* internal_default_instance() {
    return reinterpret_cast<const SConstel*>(
               &_SConstel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SConstel& a, SConstel& b) {
    a.Swap(&b);
  }
  inline void Swap(SConstel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SConstel* New() const final {
    return CreateMaybeMessage<SConstel>(nullptr);
  }

  SConstel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SConstel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SConstel& from);
  void MergeFrom(const SConstel& from);
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
  void InternalSwap(SConstel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "horoscope.SConstel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_constel_2eproto);
    return ::descriptor_table_constel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidListFieldNumber = 1,
  };
  // repeated int32 uidList = 1;
  int uidlist_size() const;
  private:
  int _internal_uidlist_size() const;
  public:
  void clear_uidlist();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_uidlist(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_uidlist() const;
  void _internal_add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_uidlist();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 uidlist(int index) const;
  void set_uidlist(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      uidlist() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_uidlist();

  // @@protoc_insertion_point(class_scope:horoscope.SConstel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > uidlist_;
  mutable std::atomic<int> _uidlist_cached_byte_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_constel_2eproto;
};
// -------------------------------------------------------------------

class CSaveConstel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:horoscope.CSaveConstel) */ {
 public:
  CSaveConstel();
  virtual ~CSaveConstel();

  CSaveConstel(const CSaveConstel& from);
  CSaveConstel(CSaveConstel&& from) noexcept
    : CSaveConstel() {
    *this = ::std::move(from);
  }

  inline CSaveConstel& operator=(const CSaveConstel& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSaveConstel& operator=(CSaveConstel&& from) noexcept {
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
  static const CSaveConstel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CSaveConstel* internal_default_instance() {
    return reinterpret_cast<const CSaveConstel*>(
               &_CSaveConstel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CSaveConstel& a, CSaveConstel& b) {
    a.Swap(&b);
  }
  inline void Swap(CSaveConstel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSaveConstel* New() const final {
    return CreateMaybeMessage<CSaveConstel>(nullptr);
  }

  CSaveConstel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSaveConstel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSaveConstel& from);
  void MergeFrom(const CSaveConstel& from);
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
  void InternalSwap(CSaveConstel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "horoscope.CSaveConstel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_constel_2eproto);
    return ::descriptor_table_constel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConstelFieldNumber = 1,
  };
  // int32 constel = 1;
  void clear_constel();
  ::PROTOBUF_NAMESPACE_ID::int32 constel() const;
  void set_constel(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_constel() const;
  void _internal_set_constel(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:horoscope.CSaveConstel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 constel_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_constel_2eproto;
};
// -------------------------------------------------------------------

class SSaveConstel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:horoscope.SSaveConstel) */ {
 public:
  SSaveConstel();
  virtual ~SSaveConstel();

  SSaveConstel(const SSaveConstel& from);
  SSaveConstel(SSaveConstel&& from) noexcept
    : SSaveConstel() {
    *this = ::std::move(from);
  }

  inline SSaveConstel& operator=(const SSaveConstel& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSaveConstel& operator=(SSaveConstel&& from) noexcept {
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
  static const SSaveConstel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSaveConstel* internal_default_instance() {
    return reinterpret_cast<const SSaveConstel*>(
               &_SSaveConstel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SSaveConstel& a, SSaveConstel& b) {
    a.Swap(&b);
  }
  inline void Swap(SSaveConstel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSaveConstel* New() const final {
    return CreateMaybeMessage<SSaveConstel>(nullptr);
  }

  SSaveConstel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSaveConstel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSaveConstel& from);
  void MergeFrom(const SSaveConstel& from);
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
  void InternalSwap(SSaveConstel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "horoscope.SSaveConstel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_constel_2eproto);
    return ::descriptor_table_constel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // int32 data = 1;
  void clear_data();
  ::PROTOBUF_NAMESPACE_ID::int32 data() const;
  void set_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_data() const;
  void _internal_set_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:horoscope.SSaveConstel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_constel_2eproto;
};
// -------------------------------------------------------------------

class SUserConstelInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:horoscope.SUserConstelInfo) */ {
 public:
  SUserConstelInfo();
  virtual ~SUserConstelInfo();

  SUserConstelInfo(const SUserConstelInfo& from);
  SUserConstelInfo(SUserConstelInfo&& from) noexcept
    : SUserConstelInfo() {
    *this = ::std::move(from);
  }

  inline SUserConstelInfo& operator=(const SUserConstelInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SUserConstelInfo& operator=(SUserConstelInfo&& from) noexcept {
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
  static const SUserConstelInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SUserConstelInfo* internal_default_instance() {
    return reinterpret_cast<const SUserConstelInfo*>(
               &_SUserConstelInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(SUserConstelInfo& a, SUserConstelInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SUserConstelInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SUserConstelInfo* New() const final {
    return CreateMaybeMessage<SUserConstelInfo>(nullptr);
  }

  SUserConstelInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SUserConstelInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SUserConstelInfo& from);
  void MergeFrom(const SUserConstelInfo& from);
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
  void InternalSwap(SUserConstelInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "horoscope.SUserConstelInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_constel_2eproto);
    return ::descriptor_table_constel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConstelIdFieldNumber = 1,
  };
  // int32 constelId = 1;
  void clear_constelid();
  ::PROTOBUF_NAMESPACE_ID::int32 constelid() const;
  void set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_constelid() const;
  void _internal_set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:horoscope.SUserConstelInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 constelid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_constel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CConstel

// int32 constelID = 1;
inline void CConstel::clear_constelid() {
  constelid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CConstel::_internal_constelid() const {
  return constelid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CConstel::constelid() const {
  // @@protoc_insertion_point(field_get:horoscope.CConstel.constelID)
  return _internal_constelid();
}
inline void CConstel::_internal_set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  constelid_ = value;
}
inline void CConstel::set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_constelid(value);
  // @@protoc_insertion_point(field_set:horoscope.CConstel.constelID)
}

// -------------------------------------------------------------------

// SConstel

// repeated int32 uidList = 1;
inline int SConstel::_internal_uidlist_size() const {
  return uidlist_.size();
}
inline int SConstel::uidlist_size() const {
  return _internal_uidlist_size();
}
inline void SConstel::clear_uidlist() {
  uidlist_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SConstel::_internal_uidlist(int index) const {
  return uidlist_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SConstel::uidlist(int index) const {
  // @@protoc_insertion_point(field_get:horoscope.SConstel.uidList)
  return _internal_uidlist(index);
}
inline void SConstel::set_uidlist(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  uidlist_.Set(index, value);
  // @@protoc_insertion_point(field_set:horoscope.SConstel.uidList)
}
inline void SConstel::_internal_add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value) {
  uidlist_.Add(value);
}
inline void SConstel::add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_uidlist(value);
  // @@protoc_insertion_point(field_add:horoscope.SConstel.uidList)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SConstel::_internal_uidlist() const {
  return uidlist_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SConstel::uidlist() const {
  // @@protoc_insertion_point(field_list:horoscope.SConstel.uidList)
  return _internal_uidlist();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SConstel::_internal_mutable_uidlist() {
  return &uidlist_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SConstel::mutable_uidlist() {
  // @@protoc_insertion_point(field_mutable_list:horoscope.SConstel.uidList)
  return _internal_mutable_uidlist();
}

// -------------------------------------------------------------------

// CSaveConstel

// int32 constel = 1;
inline void CSaveConstel::clear_constel() {
  constel_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CSaveConstel::_internal_constel() const {
  return constel_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CSaveConstel::constel() const {
  // @@protoc_insertion_point(field_get:horoscope.CSaveConstel.constel)
  return _internal_constel();
}
inline void CSaveConstel::_internal_set_constel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  constel_ = value;
}
inline void CSaveConstel::set_constel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_constel(value);
  // @@protoc_insertion_point(field_set:horoscope.CSaveConstel.constel)
}

// -------------------------------------------------------------------

// SSaveConstel

// int32 data = 1;
inline void SSaveConstel::clear_data() {
  data_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SSaveConstel::_internal_data() const {
  return data_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SSaveConstel::data() const {
  // @@protoc_insertion_point(field_get:horoscope.SSaveConstel.data)
  return _internal_data();
}
inline void SSaveConstel::_internal_set_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  data_ = value;
}
inline void SSaveConstel::set_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:horoscope.SSaveConstel.data)
}

// -------------------------------------------------------------------

// SUserConstelInfo

// int32 constelId = 1;
inline void SUserConstelInfo::clear_constelid() {
  constelid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserConstelInfo::_internal_constelid() const {
  return constelid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SUserConstelInfo::constelid() const {
  // @@protoc_insertion_point(field_get:horoscope.SUserConstelInfo.constelId)
  return _internal_constelid();
}
inline void SUserConstelInfo::_internal_set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  constelid_ = value;
}
inline void SUserConstelInfo::set_constelid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_constelid(value);
  // @@protoc_insertion_point(field_set:horoscope.SUserConstelInfo.constelId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace horoscope

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_constel_2eproto