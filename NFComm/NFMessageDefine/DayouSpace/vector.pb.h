// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vector.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_vector_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_vector_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_vector_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_vector_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_vector_2eproto;
namespace vector {
class PVector3;
class PVector3DefaultTypeInternal;
extern PVector3DefaultTypeInternal _PVector3_default_instance_;
}  // namespace vector
PROTOBUF_NAMESPACE_OPEN
template<> ::vector::PVector3* Arena::CreateMaybeMessage<::vector::PVector3>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace vector {

// ===================================================================

class PVector3 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:vector.PVector3) */ {
 public:
  PVector3();
  virtual ~PVector3();

  PVector3(const PVector3& from);
  PVector3(PVector3&& from) noexcept
    : PVector3() {
    *this = ::std::move(from);
  }

  inline PVector3& operator=(const PVector3& from) {
    CopyFrom(from);
    return *this;
  }
  inline PVector3& operator=(PVector3&& from) noexcept {
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
  static const PVector3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PVector3* internal_default_instance() {
    return reinterpret_cast<const PVector3*>(
               &_PVector3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PVector3& a, PVector3& b) {
    a.Swap(&b);
  }
  inline void Swap(PVector3* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PVector3* New() const final {
    return CreateMaybeMessage<PVector3>(nullptr);
  }

  PVector3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PVector3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PVector3& from);
  void MergeFrom(const PVector3& from);
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
  void InternalSwap(PVector3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "vector.PVector3";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_vector_2eproto);
    return ::descriptor_table_vector_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // float x = 1;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 2;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 3;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:vector.PVector3)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  float z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_vector_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PVector3

// float x = 1;
inline void PVector3::clear_x() {
  x_ = 0;
}
inline float PVector3::_internal_x() const {
  return x_;
}
inline float PVector3::x() const {
  // @@protoc_insertion_point(field_get:vector.PVector3.x)
  return _internal_x();
}
inline void PVector3::_internal_set_x(float value) {
  
  x_ = value;
}
inline void PVector3::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:vector.PVector3.x)
}

// float y = 2;
inline void PVector3::clear_y() {
  y_ = 0;
}
inline float PVector3::_internal_y() const {
  return y_;
}
inline float PVector3::y() const {
  // @@protoc_insertion_point(field_get:vector.PVector3.y)
  return _internal_y();
}
inline void PVector3::_internal_set_y(float value) {
  
  y_ = value;
}
inline void PVector3::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:vector.PVector3.y)
}

// float z = 3;
inline void PVector3::clear_z() {
  z_ = 0;
}
inline float PVector3::_internal_z() const {
  return z_;
}
inline float PVector3::z() const {
  // @@protoc_insertion_point(field_get:vector.PVector3.z)
  return _internal_z();
}
inline void PVector3::_internal_set_z(float value) {
  
  z_ = value;
}
inline void PVector3::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:vector.PVector3.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace vector

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_vector_2eproto
