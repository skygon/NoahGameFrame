// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layPosition.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_layPosition_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_layPosition_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_layPosition_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_layPosition_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_layPosition_2eproto;
namespace layPosition {
class BLayPosition;
class BLayPositionDefaultTypeInternal;
extern BLayPositionDefaultTypeInternal _BLayPosition_default_instance_;
}  // namespace layPosition
PROTOBUF_NAMESPACE_OPEN
template<> ::layPosition::BLayPosition* Arena::CreateMaybeMessage<::layPosition::BLayPosition>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace layPosition {

// ===================================================================

class BLayPosition :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:layPosition.BLayPosition) */ {
 public:
  BLayPosition();
  virtual ~BLayPosition();

  BLayPosition(const BLayPosition& from);
  BLayPosition(BLayPosition&& from) noexcept
    : BLayPosition() {
    *this = ::std::move(from);
  }

  inline BLayPosition& operator=(const BLayPosition& from) {
    CopyFrom(from);
    return *this;
  }
  inline BLayPosition& operator=(BLayPosition&& from) noexcept {
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
  static const BLayPosition& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BLayPosition* internal_default_instance() {
    return reinterpret_cast<const BLayPosition*>(
               &_BLayPosition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BLayPosition& a, BLayPosition& b) {
    a.Swap(&b);
  }
  inline void Swap(BLayPosition* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BLayPosition* New() const final {
    return CreateMaybeMessage<BLayPosition>(nullptr);
  }

  BLayPosition* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BLayPosition>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BLayPosition& from);
  void MergeFrom(const BLayPosition& from);
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
  void InternalSwap(BLayPosition* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "layPosition.BLayPosition";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_layPosition_2eproto);
    return ::descriptor_table_layPosition_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResourceFieldNumber = 8,
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kPxFieldNumber = 4,
    kPyFieldNumber = 5,
    kPzFieldNumber = 6,
    kNumberFieldNumber = 7,
  };
  // string resource = 8;
  void clear_resource();
  const std::string& resource() const;
  void set_resource(const std::string& value);
  void set_resource(std::string&& value);
  void set_resource(const char* value);
  void set_resource(const char* value, size_t size);
  std::string* mutable_resource();
  std::string* release_resource();
  void set_allocated_resource(std::string* resource);
  private:
  const std::string& _internal_resource() const;
  void _internal_set_resource(const std::string& value);
  std::string* _internal_mutable_resource();
  public:

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

  // float px = 4;
  void clear_px();
  float px() const;
  void set_px(float value);
  private:
  float _internal_px() const;
  void _internal_set_px(float value);
  public:

  // float py = 5;
  void clear_py();
  float py() const;
  void set_py(float value);
  private:
  float _internal_py() const;
  void _internal_set_py(float value);
  public:

  // float pz = 6;
  void clear_pz();
  float pz() const;
  void set_pz(float value);
  private:
  float _internal_pz() const;
  void _internal_set_pz(float value);
  public:

  // int32 number = 7;
  void clear_number();
  ::PROTOBUF_NAMESPACE_ID::int32 number() const;
  void set_number(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_number() const;
  void _internal_set_number(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:layPosition.BLayPosition)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr resource_;
  float x_;
  float y_;
  float z_;
  float px_;
  float py_;
  float pz_;
  ::PROTOBUF_NAMESPACE_ID::int32 number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_layPosition_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BLayPosition

// float x = 1;
inline void BLayPosition::clear_x() {
  x_ = 0;
}
inline float BLayPosition::_internal_x() const {
  return x_;
}
inline float BLayPosition::x() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.x)
  return _internal_x();
}
inline void BLayPosition::_internal_set_x(float value) {
  
  x_ = value;
}
inline void BLayPosition::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.x)
}

// float y = 2;
inline void BLayPosition::clear_y() {
  y_ = 0;
}
inline float BLayPosition::_internal_y() const {
  return y_;
}
inline float BLayPosition::y() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.y)
  return _internal_y();
}
inline void BLayPosition::_internal_set_y(float value) {
  
  y_ = value;
}
inline void BLayPosition::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.y)
}

// float z = 3;
inline void BLayPosition::clear_z() {
  z_ = 0;
}
inline float BLayPosition::_internal_z() const {
  return z_;
}
inline float BLayPosition::z() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.z)
  return _internal_z();
}
inline void BLayPosition::_internal_set_z(float value) {
  
  z_ = value;
}
inline void BLayPosition::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.z)
}

// float px = 4;
inline void BLayPosition::clear_px() {
  px_ = 0;
}
inline float BLayPosition::_internal_px() const {
  return px_;
}
inline float BLayPosition::px() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.px)
  return _internal_px();
}
inline void BLayPosition::_internal_set_px(float value) {
  
  px_ = value;
}
inline void BLayPosition::set_px(float value) {
  _internal_set_px(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.px)
}

// float py = 5;
inline void BLayPosition::clear_py() {
  py_ = 0;
}
inline float BLayPosition::_internal_py() const {
  return py_;
}
inline float BLayPosition::py() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.py)
  return _internal_py();
}
inline void BLayPosition::_internal_set_py(float value) {
  
  py_ = value;
}
inline void BLayPosition::set_py(float value) {
  _internal_set_py(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.py)
}

// float pz = 6;
inline void BLayPosition::clear_pz() {
  pz_ = 0;
}
inline float BLayPosition::_internal_pz() const {
  return pz_;
}
inline float BLayPosition::pz() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.pz)
  return _internal_pz();
}
inline void BLayPosition::_internal_set_pz(float value) {
  
  pz_ = value;
}
inline void BLayPosition::set_pz(float value) {
  _internal_set_pz(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.pz)
}

// int32 number = 7;
inline void BLayPosition::clear_number() {
  number_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BLayPosition::_internal_number() const {
  return number_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BLayPosition::number() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.number)
  return _internal_number();
}
inline void BLayPosition::_internal_set_number(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  number_ = value;
}
inline void BLayPosition::set_number(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.number)
}

// string resource = 8;
inline void BLayPosition::clear_resource() {
  resource_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BLayPosition::resource() const {
  // @@protoc_insertion_point(field_get:layPosition.BLayPosition.resource)
  return _internal_resource();
}
inline void BLayPosition::set_resource(const std::string& value) {
  _internal_set_resource(value);
  // @@protoc_insertion_point(field_set:layPosition.BLayPosition.resource)
}
inline std::string* BLayPosition::mutable_resource() {
  // @@protoc_insertion_point(field_mutable:layPosition.BLayPosition.resource)
  return _internal_mutable_resource();
}
inline const std::string& BLayPosition::_internal_resource() const {
  return resource_.GetNoArena();
}
inline void BLayPosition::_internal_set_resource(const std::string& value) {
  
  resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void BLayPosition::set_resource(std::string&& value) {
  
  resource_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:layPosition.BLayPosition.resource)
}
inline void BLayPosition::set_resource(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:layPosition.BLayPosition.resource)
}
inline void BLayPosition::set_resource(const char* value, size_t size) {
  
  resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:layPosition.BLayPosition.resource)
}
inline std::string* BLayPosition::_internal_mutable_resource() {
  
  return resource_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BLayPosition::release_resource() {
  // @@protoc_insertion_point(field_release:layPosition.BLayPosition.resource)
  
  return resource_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BLayPosition::set_allocated_resource(std::string* resource) {
  if (resource != nullptr) {
    
  } else {
    
  }
  resource_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), resource);
  // @@protoc_insertion_point(field_set_allocated:layPosition.BLayPosition.resource)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace layPosition

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_layPosition_2eproto
