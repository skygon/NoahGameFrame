// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: operation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_operation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_operation_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_operation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_operation_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_operation_2eproto;
namespace space {
class COperationSyn;
class COperationSynDefaultTypeInternal;
extern COperationSynDefaultTypeInternal _COperationSyn_default_instance_;
class SOperationSyn;
class SOperationSynDefaultTypeInternal;
extern SOperationSynDefaultTypeInternal _SOperationSyn_default_instance_;
class SOperationSynBroad;
class SOperationSynBroadDefaultTypeInternal;
extern SOperationSynBroadDefaultTypeInternal _SOperationSynBroad_default_instance_;
}  // namespace space
PROTOBUF_NAMESPACE_OPEN
template<> ::space::COperationSyn* Arena::CreateMaybeMessage<::space::COperationSyn>(Arena*);
template<> ::space::SOperationSyn* Arena::CreateMaybeMessage<::space::SOperationSyn>(Arena*);
template<> ::space::SOperationSynBroad* Arena::CreateMaybeMessage<::space::SOperationSynBroad>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace space {

// ===================================================================

class COperationSyn :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:space.COperationSyn) */ {
 public:
  COperationSyn();
  virtual ~COperationSyn();

  COperationSyn(const COperationSyn& from);
  COperationSyn(COperationSyn&& from) noexcept
    : COperationSyn() {
    *this = ::std::move(from);
  }

  inline COperationSyn& operator=(const COperationSyn& from) {
    CopyFrom(from);
    return *this;
  }
  inline COperationSyn& operator=(COperationSyn&& from) noexcept {
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
  static const COperationSyn& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const COperationSyn* internal_default_instance() {
    return reinterpret_cast<const COperationSyn*>(
               &_COperationSyn_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(COperationSyn& a, COperationSyn& b) {
    a.Swap(&b);
  }
  inline void Swap(COperationSyn* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline COperationSyn* New() const final {
    return CreateMaybeMessage<COperationSyn>(nullptr);
  }

  COperationSyn* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<COperationSyn>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const COperationSyn& from);
  void MergeFrom(const COperationSyn& from);
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
  void InternalSwap(COperationSyn* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "space.COperationSyn";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_operation_2eproto);
    return ::descriptor_table_operation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOperationIdFieldNumber = 1,
    kOperationTypeFieldNumber = 2,
  };
  // int32 operationId = 1;
  void clear_operationid();
  ::PROTOBUF_NAMESPACE_ID::int32 operationid() const;
  void set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_operationid() const;
  void _internal_set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 operationType = 2;
  void clear_operationtype();
  ::PROTOBUF_NAMESPACE_ID::int32 operationtype() const;
  void set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_operationtype() const;
  void _internal_set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:space.COperationSyn)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 operationid_;
  ::PROTOBUF_NAMESPACE_ID::int32 operationtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_operation_2eproto;
};
// -------------------------------------------------------------------

class SOperationSyn :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:space.SOperationSyn) */ {
 public:
  SOperationSyn();
  virtual ~SOperationSyn();

  SOperationSyn(const SOperationSyn& from);
  SOperationSyn(SOperationSyn&& from) noexcept
    : SOperationSyn() {
    *this = ::std::move(from);
  }

  inline SOperationSyn& operator=(const SOperationSyn& from) {
    CopyFrom(from);
    return *this;
  }
  inline SOperationSyn& operator=(SOperationSyn&& from) noexcept {
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
  static const SOperationSyn& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SOperationSyn* internal_default_instance() {
    return reinterpret_cast<const SOperationSyn*>(
               &_SOperationSyn_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SOperationSyn& a, SOperationSyn& b) {
    a.Swap(&b);
  }
  inline void Swap(SOperationSyn* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SOperationSyn* New() const final {
    return CreateMaybeMessage<SOperationSyn>(nullptr);
  }

  SOperationSyn* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SOperationSyn>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SOperationSyn& from);
  void MergeFrom(const SOperationSyn& from);
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
  void InternalSwap(SOperationSyn* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "space.SOperationSyn";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_operation_2eproto);
    return ::descriptor_table_operation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorIdFieldNumber = 1,
  };
  // int32 errorId = 1;
  void clear_errorid();
  ::PROTOBUF_NAMESPACE_ID::int32 errorid() const;
  void set_errorid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_errorid() const;
  void _internal_set_errorid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:space.SOperationSyn)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 errorid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_operation_2eproto;
};
// -------------------------------------------------------------------

class SOperationSynBroad :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:space.SOperationSynBroad) */ {
 public:
  SOperationSynBroad();
  virtual ~SOperationSynBroad();

  SOperationSynBroad(const SOperationSynBroad& from);
  SOperationSynBroad(SOperationSynBroad&& from) noexcept
    : SOperationSynBroad() {
    *this = ::std::move(from);
  }

  inline SOperationSynBroad& operator=(const SOperationSynBroad& from) {
    CopyFrom(from);
    return *this;
  }
  inline SOperationSynBroad& operator=(SOperationSynBroad&& from) noexcept {
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
  static const SOperationSynBroad& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SOperationSynBroad* internal_default_instance() {
    return reinterpret_cast<const SOperationSynBroad*>(
               &_SOperationSynBroad_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SOperationSynBroad& a, SOperationSynBroad& b) {
    a.Swap(&b);
  }
  inline void Swap(SOperationSynBroad* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SOperationSynBroad* New() const final {
    return CreateMaybeMessage<SOperationSynBroad>(nullptr);
  }

  SOperationSynBroad* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SOperationSynBroad>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SOperationSynBroad& from);
  void MergeFrom(const SOperationSynBroad& from);
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
  void InternalSwap(SOperationSynBroad* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "space.SOperationSynBroad";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_operation_2eproto);
    return ::descriptor_table_operation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOperationIdFieldNumber = 1,
    kOperationTypeFieldNumber = 2,
  };
  // int32 operationId = 1;
  void clear_operationid();
  ::PROTOBUF_NAMESPACE_ID::int32 operationid() const;
  void set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_operationid() const;
  void _internal_set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 operationType = 2;
  void clear_operationtype();
  ::PROTOBUF_NAMESPACE_ID::int32 operationtype() const;
  void set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_operationtype() const;
  void _internal_set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:space.SOperationSynBroad)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 operationid_;
  ::PROTOBUF_NAMESPACE_ID::int32 operationtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_operation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// COperationSyn

// int32 operationId = 1;
inline void COperationSyn::clear_operationid() {
  operationid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 COperationSyn::_internal_operationid() const {
  return operationid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 COperationSyn::operationid() const {
  // @@protoc_insertion_point(field_get:space.COperationSyn.operationId)
  return _internal_operationid();
}
inline void COperationSyn::_internal_set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  operationid_ = value;
}
inline void COperationSyn::set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_operationid(value);
  // @@protoc_insertion_point(field_set:space.COperationSyn.operationId)
}

// int32 operationType = 2;
inline void COperationSyn::clear_operationtype() {
  operationtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 COperationSyn::_internal_operationtype() const {
  return operationtype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 COperationSyn::operationtype() const {
  // @@protoc_insertion_point(field_get:space.COperationSyn.operationType)
  return _internal_operationtype();
}
inline void COperationSyn::_internal_set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  operationtype_ = value;
}
inline void COperationSyn::set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_operationtype(value);
  // @@protoc_insertion_point(field_set:space.COperationSyn.operationType)
}

// -------------------------------------------------------------------

// SOperationSyn

// int32 errorId = 1;
inline void SOperationSyn::clear_errorid() {
  errorid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSyn::_internal_errorid() const {
  return errorid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSyn::errorid() const {
  // @@protoc_insertion_point(field_get:space.SOperationSyn.errorId)
  return _internal_errorid();
}
inline void SOperationSyn::_internal_set_errorid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errorid_ = value;
}
inline void SOperationSyn::set_errorid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_errorid(value);
  // @@protoc_insertion_point(field_set:space.SOperationSyn.errorId)
}

// -------------------------------------------------------------------

// SOperationSynBroad

// int32 operationId = 1;
inline void SOperationSynBroad::clear_operationid() {
  operationid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSynBroad::_internal_operationid() const {
  return operationid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSynBroad::operationid() const {
  // @@protoc_insertion_point(field_get:space.SOperationSynBroad.operationId)
  return _internal_operationid();
}
inline void SOperationSynBroad::_internal_set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  operationid_ = value;
}
inline void SOperationSynBroad::set_operationid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_operationid(value);
  // @@protoc_insertion_point(field_set:space.SOperationSynBroad.operationId)
}

// int32 operationType = 2;
inline void SOperationSynBroad::clear_operationtype() {
  operationtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSynBroad::_internal_operationtype() const {
  return operationtype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SOperationSynBroad::operationtype() const {
  // @@protoc_insertion_point(field_get:space.SOperationSynBroad.operationType)
  return _internal_operationtype();
}
inline void SOperationSynBroad::_internal_set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  operationtype_ = value;
}
inline void SOperationSynBroad::set_operationtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_operationtype(value);
  // @@protoc_insertion_point(field_set:space.SOperationSynBroad.operationType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace space

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_operation_2eproto