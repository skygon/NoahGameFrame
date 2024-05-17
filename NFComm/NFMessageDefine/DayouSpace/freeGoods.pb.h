// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: freeGoods.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_freeGoods_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_freeGoods_2eproto

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
#include "vector.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_freeGoods_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_freeGoods_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_freeGoods_2eproto;
namespace freeGoods {
class CFreeGoodsList;
class CFreeGoodsListDefaultTypeInternal;
extern CFreeGoodsListDefaultTypeInternal _CFreeGoodsList_default_instance_;
class FreeGoods;
class FreeGoodsDefaultTypeInternal;
extern FreeGoodsDefaultTypeInternal _FreeGoods_default_instance_;
class SFreeGoodsList;
class SFreeGoodsListDefaultTypeInternal;
extern SFreeGoodsListDefaultTypeInternal _SFreeGoodsList_default_instance_;
}  // namespace freeGoods
PROTOBUF_NAMESPACE_OPEN
template<> ::freeGoods::CFreeGoodsList* Arena::CreateMaybeMessage<::freeGoods::CFreeGoodsList>(Arena*);
template<> ::freeGoods::FreeGoods* Arena::CreateMaybeMessage<::freeGoods::FreeGoods>(Arena*);
template<> ::freeGoods::SFreeGoodsList* Arena::CreateMaybeMessage<::freeGoods::SFreeGoodsList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace freeGoods {

// ===================================================================

class FreeGoods :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:freeGoods.FreeGoods) */ {
 public:
  FreeGoods();
  virtual ~FreeGoods();

  FreeGoods(const FreeGoods& from);
  FreeGoods(FreeGoods&& from) noexcept
    : FreeGoods() {
    *this = ::std::move(from);
  }

  inline FreeGoods& operator=(const FreeGoods& from) {
    CopyFrom(from);
    return *this;
  }
  inline FreeGoods& operator=(FreeGoods&& from) noexcept {
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
  static const FreeGoods& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FreeGoods* internal_default_instance() {
    return reinterpret_cast<const FreeGoods*>(
               &_FreeGoods_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FreeGoods& a, FreeGoods& b) {
    a.Swap(&b);
  }
  inline void Swap(FreeGoods* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FreeGoods* New() const final {
    return CreateMaybeMessage<FreeGoods>(nullptr);
  }

  FreeGoods* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FreeGoods>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FreeGoods& from);
  void MergeFrom(const FreeGoods& from);
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
  void InternalSwap(FreeGoods* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "freeGoods.FreeGoods";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_freeGoods_2eproto);
    return ::descriptor_table_freeGoods_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGoodsIDFieldNumber = 1,
    kNumFieldNumber = 2,
  };
  // int32 GoodsID = 1;
  void clear_goodsid();
  ::PROTOBUF_NAMESPACE_ID::int32 goodsid() const;
  void set_goodsid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_goodsid() const;
  void _internal_set_goodsid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 Num = 2;
  void clear_num();
  ::PROTOBUF_NAMESPACE_ID::int32 num() const;
  void set_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num() const;
  void _internal_set_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:freeGoods.FreeGoods)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 goodsid_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_freeGoods_2eproto;
};
// -------------------------------------------------------------------

class CFreeGoodsList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:freeGoods.CFreeGoodsList) */ {
 public:
  CFreeGoodsList();
  virtual ~CFreeGoodsList();

  CFreeGoodsList(const CFreeGoodsList& from);
  CFreeGoodsList(CFreeGoodsList&& from) noexcept
    : CFreeGoodsList() {
    *this = ::std::move(from);
  }

  inline CFreeGoodsList& operator=(const CFreeGoodsList& from) {
    CopyFrom(from);
    return *this;
  }
  inline CFreeGoodsList& operator=(CFreeGoodsList&& from) noexcept {
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
  static const CFreeGoodsList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CFreeGoodsList* internal_default_instance() {
    return reinterpret_cast<const CFreeGoodsList*>(
               &_CFreeGoodsList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CFreeGoodsList& a, CFreeGoodsList& b) {
    a.Swap(&b);
  }
  inline void Swap(CFreeGoodsList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CFreeGoodsList* New() const final {
    return CreateMaybeMessage<CFreeGoodsList>(nullptr);
  }

  CFreeGoodsList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CFreeGoodsList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CFreeGoodsList& from);
  void MergeFrom(const CFreeGoodsList& from);
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
  void InternalSwap(CFreeGoodsList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "freeGoods.CFreeGoodsList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_freeGoods_2eproto);
    return ::descriptor_table_freeGoods_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFreeGoodsListFieldNumber = 1,
  };
  // repeated .freeGoods.FreeGoods FreeGoodsList = 1;
  int freegoodslist_size() const;
  private:
  int _internal_freegoodslist_size() const;
  public:
  void clear_freegoodslist();
  ::freeGoods::FreeGoods* mutable_freegoodslist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >*
      mutable_freegoodslist();
  private:
  const ::freeGoods::FreeGoods& _internal_freegoodslist(int index) const;
  ::freeGoods::FreeGoods* _internal_add_freegoodslist();
  public:
  const ::freeGoods::FreeGoods& freegoodslist(int index) const;
  ::freeGoods::FreeGoods* add_freegoodslist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >&
      freegoodslist() const;

  // @@protoc_insertion_point(class_scope:freeGoods.CFreeGoodsList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods > freegoodslist_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_freeGoods_2eproto;
};
// -------------------------------------------------------------------

class SFreeGoodsList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:freeGoods.SFreeGoodsList) */ {
 public:
  SFreeGoodsList();
  virtual ~SFreeGoodsList();

  SFreeGoodsList(const SFreeGoodsList& from);
  SFreeGoodsList(SFreeGoodsList&& from) noexcept
    : SFreeGoodsList() {
    *this = ::std::move(from);
  }

  inline SFreeGoodsList& operator=(const SFreeGoodsList& from) {
    CopyFrom(from);
    return *this;
  }
  inline SFreeGoodsList& operator=(SFreeGoodsList&& from) noexcept {
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
  static const SFreeGoodsList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SFreeGoodsList* internal_default_instance() {
    return reinterpret_cast<const SFreeGoodsList*>(
               &_SFreeGoodsList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SFreeGoodsList& a, SFreeGoodsList& b) {
    a.Swap(&b);
  }
  inline void Swap(SFreeGoodsList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SFreeGoodsList* New() const final {
    return CreateMaybeMessage<SFreeGoodsList>(nullptr);
  }

  SFreeGoodsList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SFreeGoodsList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SFreeGoodsList& from);
  void MergeFrom(const SFreeGoodsList& from);
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
  void InternalSwap(SFreeGoodsList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "freeGoods.SFreeGoodsList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_freeGoods_2eproto);
    return ::descriptor_table_freeGoods_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFreeGoodsListFieldNumber = 1,
  };
  // repeated .freeGoods.FreeGoods FreeGoodsList = 1;
  int freegoodslist_size() const;
  private:
  int _internal_freegoodslist_size() const;
  public:
  void clear_freegoodslist();
  ::freeGoods::FreeGoods* mutable_freegoodslist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >*
      mutable_freegoodslist();
  private:
  const ::freeGoods::FreeGoods& _internal_freegoodslist(int index) const;
  ::freeGoods::FreeGoods* _internal_add_freegoodslist();
  public:
  const ::freeGoods::FreeGoods& freegoodslist(int index) const;
  ::freeGoods::FreeGoods* add_freegoodslist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >&
      freegoodslist() const;

  // @@protoc_insertion_point(class_scope:freeGoods.SFreeGoodsList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods > freegoodslist_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_freeGoods_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FreeGoods

// int32 GoodsID = 1;
inline void FreeGoods::clear_goodsid() {
  goodsid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FreeGoods::_internal_goodsid() const {
  return goodsid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FreeGoods::goodsid() const {
  // @@protoc_insertion_point(field_get:freeGoods.FreeGoods.GoodsID)
  return _internal_goodsid();
}
inline void FreeGoods::_internal_set_goodsid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  goodsid_ = value;
}
inline void FreeGoods::set_goodsid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_goodsid(value);
  // @@protoc_insertion_point(field_set:freeGoods.FreeGoods.GoodsID)
}

// int32 Num = 2;
inline void FreeGoods::clear_num() {
  num_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FreeGoods::_internal_num() const {
  return num_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FreeGoods::num() const {
  // @@protoc_insertion_point(field_get:freeGoods.FreeGoods.Num)
  return _internal_num();
}
inline void FreeGoods::_internal_set_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  num_ = value;
}
inline void FreeGoods::set_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num(value);
  // @@protoc_insertion_point(field_set:freeGoods.FreeGoods.Num)
}

// -------------------------------------------------------------------

// CFreeGoodsList

// repeated .freeGoods.FreeGoods FreeGoodsList = 1;
inline int CFreeGoodsList::_internal_freegoodslist_size() const {
  return freegoodslist_.size();
}
inline int CFreeGoodsList::freegoodslist_size() const {
  return _internal_freegoodslist_size();
}
inline void CFreeGoodsList::clear_freegoodslist() {
  freegoodslist_.Clear();
}
inline ::freeGoods::FreeGoods* CFreeGoodsList::mutable_freegoodslist(int index) {
  // @@protoc_insertion_point(field_mutable:freeGoods.CFreeGoodsList.FreeGoodsList)
  return freegoodslist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >*
CFreeGoodsList::mutable_freegoodslist() {
  // @@protoc_insertion_point(field_mutable_list:freeGoods.CFreeGoodsList.FreeGoodsList)
  return &freegoodslist_;
}
inline const ::freeGoods::FreeGoods& CFreeGoodsList::_internal_freegoodslist(int index) const {
  return freegoodslist_.Get(index);
}
inline const ::freeGoods::FreeGoods& CFreeGoodsList::freegoodslist(int index) const {
  // @@protoc_insertion_point(field_get:freeGoods.CFreeGoodsList.FreeGoodsList)
  return _internal_freegoodslist(index);
}
inline ::freeGoods::FreeGoods* CFreeGoodsList::_internal_add_freegoodslist() {
  return freegoodslist_.Add();
}
inline ::freeGoods::FreeGoods* CFreeGoodsList::add_freegoodslist() {
  // @@protoc_insertion_point(field_add:freeGoods.CFreeGoodsList.FreeGoodsList)
  return _internal_add_freegoodslist();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >&
CFreeGoodsList::freegoodslist() const {
  // @@protoc_insertion_point(field_list:freeGoods.CFreeGoodsList.FreeGoodsList)
  return freegoodslist_;
}

// -------------------------------------------------------------------

// SFreeGoodsList

// repeated .freeGoods.FreeGoods FreeGoodsList = 1;
inline int SFreeGoodsList::_internal_freegoodslist_size() const {
  return freegoodslist_.size();
}
inline int SFreeGoodsList::freegoodslist_size() const {
  return _internal_freegoodslist_size();
}
inline void SFreeGoodsList::clear_freegoodslist() {
  freegoodslist_.Clear();
}
inline ::freeGoods::FreeGoods* SFreeGoodsList::mutable_freegoodslist(int index) {
  // @@protoc_insertion_point(field_mutable:freeGoods.SFreeGoodsList.FreeGoodsList)
  return freegoodslist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >*
SFreeGoodsList::mutable_freegoodslist() {
  // @@protoc_insertion_point(field_mutable_list:freeGoods.SFreeGoodsList.FreeGoodsList)
  return &freegoodslist_;
}
inline const ::freeGoods::FreeGoods& SFreeGoodsList::_internal_freegoodslist(int index) const {
  return freegoodslist_.Get(index);
}
inline const ::freeGoods::FreeGoods& SFreeGoodsList::freegoodslist(int index) const {
  // @@protoc_insertion_point(field_get:freeGoods.SFreeGoodsList.FreeGoodsList)
  return _internal_freegoodslist(index);
}
inline ::freeGoods::FreeGoods* SFreeGoodsList::_internal_add_freegoodslist() {
  return freegoodslist_.Add();
}
inline ::freeGoods::FreeGoods* SFreeGoodsList::add_freegoodslist() {
  // @@protoc_insertion_point(field_add:freeGoods.SFreeGoodsList.FreeGoodsList)
  return _internal_add_freegoodslist();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::freeGoods::FreeGoods >&
SFreeGoodsList::freegoodslist() const {
  // @@protoc_insertion_point(field_list:freeGoods.SFreeGoodsList.FreeGoodsList)
  return freegoodslist_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace freeGoods

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_freeGoods_2eproto