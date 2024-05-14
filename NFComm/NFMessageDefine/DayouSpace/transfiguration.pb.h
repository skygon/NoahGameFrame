// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transfiguration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_transfiguration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_transfiguration_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_transfiguration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_transfiguration_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_transfiguration_2eproto;
namespace transfiguration {
class CTransfiguration;
class CTransfigurationDefaultTypeInternal;
extern CTransfigurationDefaultTypeInternal _CTransfiguration_default_instance_;
class STransfiguration;
class STransfigurationDefaultTypeInternal;
extern STransfigurationDefaultTypeInternal _STransfiguration_default_instance_;
}  // namespace transfiguration
PROTOBUF_NAMESPACE_OPEN
template<> ::transfiguration::CTransfiguration* Arena::CreateMaybeMessage<::transfiguration::CTransfiguration>(Arena*);
template<> ::transfiguration::STransfiguration* Arena::CreateMaybeMessage<::transfiguration::STransfiguration>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace transfiguration {

// ===================================================================

class CTransfiguration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:transfiguration.CTransfiguration) */ {
 public:
  CTransfiguration();
  virtual ~CTransfiguration();

  CTransfiguration(const CTransfiguration& from);
  CTransfiguration(CTransfiguration&& from) noexcept
    : CTransfiguration() {
    *this = ::std::move(from);
  }

  inline CTransfiguration& operator=(const CTransfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline CTransfiguration& operator=(CTransfiguration&& from) noexcept {
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
  static const CTransfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CTransfiguration* internal_default_instance() {
    return reinterpret_cast<const CTransfiguration*>(
               &_CTransfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CTransfiguration& a, CTransfiguration& b) {
    a.Swap(&b);
  }
  inline void Swap(CTransfiguration* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CTransfiguration* New() const final {
    return CreateMaybeMessage<CTransfiguration>(nullptr);
  }

  CTransfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CTransfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CTransfiguration& from);
  void MergeFrom(const CTransfiguration& from);
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
  void InternalSwap(CTransfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "transfiguration.CTransfiguration";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_transfiguration_2eproto);
    return ::descriptor_table_transfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAssetKeysFieldNumber = 1,
  };
  // string assetKeys = 1;
  void clear_assetkeys();
  const std::string& assetkeys() const;
  void set_assetkeys(const std::string& value);
  void set_assetkeys(std::string&& value);
  void set_assetkeys(const char* value);
  void set_assetkeys(const char* value, size_t size);
  std::string* mutable_assetkeys();
  std::string* release_assetkeys();
  void set_allocated_assetkeys(std::string* assetkeys);
  private:
  const std::string& _internal_assetkeys() const;
  void _internal_set_assetkeys(const std::string& value);
  std::string* _internal_mutable_assetkeys();
  public:

  // @@protoc_insertion_point(class_scope:transfiguration.CTransfiguration)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr assetkeys_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_transfiguration_2eproto;
};
// -------------------------------------------------------------------

class STransfiguration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:transfiguration.STransfiguration) */ {
 public:
  STransfiguration();
  virtual ~STransfiguration();

  STransfiguration(const STransfiguration& from);
  STransfiguration(STransfiguration&& from) noexcept
    : STransfiguration() {
    *this = ::std::move(from);
  }

  inline STransfiguration& operator=(const STransfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline STransfiguration& operator=(STransfiguration&& from) noexcept {
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
  static const STransfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const STransfiguration* internal_default_instance() {
    return reinterpret_cast<const STransfiguration*>(
               &_STransfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(STransfiguration& a, STransfiguration& b) {
    a.Swap(&b);
  }
  inline void Swap(STransfiguration* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline STransfiguration* New() const final {
    return CreateMaybeMessage<STransfiguration>(nullptr);
  }

  STransfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<STransfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const STransfiguration& from);
  void MergeFrom(const STransfiguration& from);
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
  void InternalSwap(STransfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "transfiguration.STransfiguration";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_transfiguration_2eproto);
    return ::descriptor_table_transfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidListFieldNumber = 2,
    kAssetKeysFieldNumber = 3,
    kDurationFieldNumber = 1,
  };
  // repeated int32 uidList = 2;
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

  // string assetKeys = 3;
  void clear_assetkeys();
  const std::string& assetkeys() const;
  void set_assetkeys(const std::string& value);
  void set_assetkeys(std::string&& value);
  void set_assetkeys(const char* value);
  void set_assetkeys(const char* value, size_t size);
  std::string* mutable_assetkeys();
  std::string* release_assetkeys();
  void set_allocated_assetkeys(std::string* assetkeys);
  private:
  const std::string& _internal_assetkeys() const;
  void _internal_set_assetkeys(const std::string& value);
  std::string* _internal_mutable_assetkeys();
  public:

  // int32 duration = 1;
  void clear_duration();
  ::PROTOBUF_NAMESPACE_ID::int32 duration() const;
  void set_duration(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_duration() const;
  void _internal_set_duration(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:transfiguration.STransfiguration)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > uidlist_;
  mutable std::atomic<int> _uidlist_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr assetkeys_;
  ::PROTOBUF_NAMESPACE_ID::int32 duration_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_transfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CTransfiguration

// string assetKeys = 1;
inline void CTransfiguration::clear_assetkeys() {
  assetkeys_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CTransfiguration::assetkeys() const {
  // @@protoc_insertion_point(field_get:transfiguration.CTransfiguration.assetKeys)
  return _internal_assetkeys();
}
inline void CTransfiguration::set_assetkeys(const std::string& value) {
  _internal_set_assetkeys(value);
  // @@protoc_insertion_point(field_set:transfiguration.CTransfiguration.assetKeys)
}
inline std::string* CTransfiguration::mutable_assetkeys() {
  // @@protoc_insertion_point(field_mutable:transfiguration.CTransfiguration.assetKeys)
  return _internal_mutable_assetkeys();
}
inline const std::string& CTransfiguration::_internal_assetkeys() const {
  return assetkeys_.GetNoArena();
}
inline void CTransfiguration::_internal_set_assetkeys(const std::string& value) {
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void CTransfiguration::set_assetkeys(std::string&& value) {
  
  assetkeys_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:transfiguration.CTransfiguration.assetKeys)
}
inline void CTransfiguration::set_assetkeys(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:transfiguration.CTransfiguration.assetKeys)
}
inline void CTransfiguration::set_assetkeys(const char* value, size_t size) {
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:transfiguration.CTransfiguration.assetKeys)
}
inline std::string* CTransfiguration::_internal_mutable_assetkeys() {
  
  return assetkeys_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CTransfiguration::release_assetkeys() {
  // @@protoc_insertion_point(field_release:transfiguration.CTransfiguration.assetKeys)
  
  return assetkeys_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CTransfiguration::set_allocated_assetkeys(std::string* assetkeys) {
  if (assetkeys != nullptr) {
    
  } else {
    
  }
  assetkeys_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), assetkeys);
  // @@protoc_insertion_point(field_set_allocated:transfiguration.CTransfiguration.assetKeys)
}

// -------------------------------------------------------------------

// STransfiguration

// int32 duration = 1;
inline void STransfiguration::clear_duration() {
  duration_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 STransfiguration::_internal_duration() const {
  return duration_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 STransfiguration::duration() const {
  // @@protoc_insertion_point(field_get:transfiguration.STransfiguration.duration)
  return _internal_duration();
}
inline void STransfiguration::_internal_set_duration(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  duration_ = value;
}
inline void STransfiguration::set_duration(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_duration(value);
  // @@protoc_insertion_point(field_set:transfiguration.STransfiguration.duration)
}

// repeated int32 uidList = 2;
inline int STransfiguration::_internal_uidlist_size() const {
  return uidlist_.size();
}
inline int STransfiguration::uidlist_size() const {
  return _internal_uidlist_size();
}
inline void STransfiguration::clear_uidlist() {
  uidlist_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 STransfiguration::_internal_uidlist(int index) const {
  return uidlist_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 STransfiguration::uidlist(int index) const {
  // @@protoc_insertion_point(field_get:transfiguration.STransfiguration.uidList)
  return _internal_uidlist(index);
}
inline void STransfiguration::set_uidlist(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  uidlist_.Set(index, value);
  // @@protoc_insertion_point(field_set:transfiguration.STransfiguration.uidList)
}
inline void STransfiguration::_internal_add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value) {
  uidlist_.Add(value);
}
inline void STransfiguration::add_uidlist(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_uidlist(value);
  // @@protoc_insertion_point(field_add:transfiguration.STransfiguration.uidList)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
STransfiguration::_internal_uidlist() const {
  return uidlist_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
STransfiguration::uidlist() const {
  // @@protoc_insertion_point(field_list:transfiguration.STransfiguration.uidList)
  return _internal_uidlist();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
STransfiguration::_internal_mutable_uidlist() {
  return &uidlist_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
STransfiguration::mutable_uidlist() {
  // @@protoc_insertion_point(field_mutable_list:transfiguration.STransfiguration.uidList)
  return _internal_mutable_uidlist();
}

// string assetKeys = 3;
inline void STransfiguration::clear_assetkeys() {
  assetkeys_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& STransfiguration::assetkeys() const {
  // @@protoc_insertion_point(field_get:transfiguration.STransfiguration.assetKeys)
  return _internal_assetkeys();
}
inline void STransfiguration::set_assetkeys(const std::string& value) {
  _internal_set_assetkeys(value);
  // @@protoc_insertion_point(field_set:transfiguration.STransfiguration.assetKeys)
}
inline std::string* STransfiguration::mutable_assetkeys() {
  // @@protoc_insertion_point(field_mutable:transfiguration.STransfiguration.assetKeys)
  return _internal_mutable_assetkeys();
}
inline const std::string& STransfiguration::_internal_assetkeys() const {
  return assetkeys_.GetNoArena();
}
inline void STransfiguration::_internal_set_assetkeys(const std::string& value) {
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void STransfiguration::set_assetkeys(std::string&& value) {
  
  assetkeys_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:transfiguration.STransfiguration.assetKeys)
}
inline void STransfiguration::set_assetkeys(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:transfiguration.STransfiguration.assetKeys)
}
inline void STransfiguration::set_assetkeys(const char* value, size_t size) {
  
  assetkeys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:transfiguration.STransfiguration.assetKeys)
}
inline std::string* STransfiguration::_internal_mutable_assetkeys() {
  
  return assetkeys_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* STransfiguration::release_assetkeys() {
  // @@protoc_insertion_point(field_release:transfiguration.STransfiguration.assetKeys)
  
  return assetkeys_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void STransfiguration::set_allocated_assetkeys(std::string* assetkeys) {
  if (assetkeys != nullptr) {
    
  } else {
    
  }
  assetkeys_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), assetkeys);
  // @@protoc_insertion_point(field_set_allocated:transfiguration.STransfiguration.assetKeys)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace transfiguration

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_transfiguration_2eproto
