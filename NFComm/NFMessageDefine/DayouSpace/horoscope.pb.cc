// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: horoscope.proto

#include "horoscope.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace horoscope {
class CHoroscopeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CHoroscope> _instance;
} _CHoroscope_default_instance_;
class SHoroscopeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SHoroscope> _instance;
} _SHoroscope_default_instance_;
}  // namespace horoscope
static void InitDefaultsscc_info_CHoroscope_horoscope_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::horoscope::_CHoroscope_default_instance_;
    new (ptr) ::horoscope::CHoroscope();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::horoscope::CHoroscope::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CHoroscope_horoscope_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CHoroscope_horoscope_2eproto}, {}};

static void InitDefaultsscc_info_SHoroscope_horoscope_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::horoscope::_SHoroscope_default_instance_;
    new (ptr) ::horoscope::SHoroscope();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::horoscope::SHoroscope::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SHoroscope_horoscope_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SHoroscope_horoscope_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_horoscope_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_horoscope_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_horoscope_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_horoscope_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::horoscope::CHoroscope, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::horoscope::CHoroscope, horoscopeid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::horoscope::SHoroscope, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::horoscope::SHoroscope, uid_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::horoscope::CHoroscope)},
  { 6, -1, sizeof(::horoscope::SHoroscope)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::horoscope::_CHoroscope_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::horoscope::_SHoroscope_default_instance_),
};

const char descriptor_table_protodef_horoscope_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017horoscope.proto\022\thoroscope\"!\n\nCHorosco"
  "pe\022\023\n\013horoscopeID\030\001 \001(\005\"\031\n\nSHoroscope\022\013\n"
  "\003uid\030\001 \003(\005B%\n\030com.dayou.space.protobufB\t"
  "Horoscopeb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_horoscope_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_horoscope_2eproto_sccs[2] = {
  &scc_info_CHoroscope_horoscope_2eproto.base,
  &scc_info_SHoroscope_horoscope_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_horoscope_2eproto_once;
static bool descriptor_table_horoscope_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_horoscope_2eproto = {
  &descriptor_table_horoscope_2eproto_initialized, descriptor_table_protodef_horoscope_2eproto, "horoscope.proto", 137,
  &descriptor_table_horoscope_2eproto_once, descriptor_table_horoscope_2eproto_sccs, descriptor_table_horoscope_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_horoscope_2eproto::offsets,
  file_level_metadata_horoscope_2eproto, 2, file_level_enum_descriptors_horoscope_2eproto, file_level_service_descriptors_horoscope_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_horoscope_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_horoscope_2eproto), true);
namespace horoscope {

// ===================================================================

void CHoroscope::InitAsDefaultInstance() {
}
class CHoroscope::_Internal {
 public:
};

CHoroscope::CHoroscope()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:horoscope.CHoroscope)
}
CHoroscope::CHoroscope(const CHoroscope& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  horoscopeid_ = from.horoscopeid_;
  // @@protoc_insertion_point(copy_constructor:horoscope.CHoroscope)
}

void CHoroscope::SharedCtor() {
  horoscopeid_ = 0;
}

CHoroscope::~CHoroscope() {
  // @@protoc_insertion_point(destructor:horoscope.CHoroscope)
  SharedDtor();
}

void CHoroscope::SharedDtor() {
}

void CHoroscope::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CHoroscope& CHoroscope::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CHoroscope_horoscope_2eproto.base);
  return *internal_default_instance();
}


void CHoroscope::Clear() {
// @@protoc_insertion_point(message_clear_start:horoscope.CHoroscope)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  horoscopeid_ = 0;
  _internal_metadata_.Clear();
}

const char* CHoroscope::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 horoscopeID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          horoscopeid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CHoroscope::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:horoscope.CHoroscope)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 horoscopeID = 1;
  if (this->horoscopeid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_horoscopeid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:horoscope.CHoroscope)
  return target;
}

size_t CHoroscope::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:horoscope.CHoroscope)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 horoscopeID = 1;
  if (this->horoscopeid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_horoscopeid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CHoroscope::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:horoscope.CHoroscope)
  GOOGLE_DCHECK_NE(&from, this);
  const CHoroscope* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CHoroscope>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:horoscope.CHoroscope)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:horoscope.CHoroscope)
    MergeFrom(*source);
  }
}

void CHoroscope::MergeFrom(const CHoroscope& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:horoscope.CHoroscope)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.horoscopeid() != 0) {
    _internal_set_horoscopeid(from._internal_horoscopeid());
  }
}

void CHoroscope::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:horoscope.CHoroscope)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CHoroscope::CopyFrom(const CHoroscope& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:horoscope.CHoroscope)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CHoroscope::IsInitialized() const {
  return true;
}

void CHoroscope::InternalSwap(CHoroscope* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(horoscopeid_, other->horoscopeid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CHoroscope::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SHoroscope::InitAsDefaultInstance() {
}
class SHoroscope::_Internal {
 public:
};

SHoroscope::SHoroscope()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:horoscope.SHoroscope)
}
SHoroscope::SHoroscope(const SHoroscope& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      uid_(from.uid_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:horoscope.SHoroscope)
}

void SHoroscope::SharedCtor() {
}

SHoroscope::~SHoroscope() {
  // @@protoc_insertion_point(destructor:horoscope.SHoroscope)
  SharedDtor();
}

void SHoroscope::SharedDtor() {
}

void SHoroscope::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SHoroscope& SHoroscope::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SHoroscope_horoscope_2eproto.base);
  return *internal_default_instance();
}


void SHoroscope::Clear() {
// @@protoc_insertion_point(message_clear_start:horoscope.SHoroscope)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uid_.Clear();
  _internal_metadata_.Clear();
}

const char* SHoroscope::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated int32 uid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_uid(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8) {
          _internal_add_uid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SHoroscope::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:horoscope.SHoroscope)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 uid = 1;
  {
    int byte_size = _uid_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          1, _internal_uid(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:horoscope.SHoroscope)
  return target;
}

size_t SHoroscope::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:horoscope.SHoroscope)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 uid = 1;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->uid_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _uid_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SHoroscope::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:horoscope.SHoroscope)
  GOOGLE_DCHECK_NE(&from, this);
  const SHoroscope* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SHoroscope>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:horoscope.SHoroscope)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:horoscope.SHoroscope)
    MergeFrom(*source);
  }
}

void SHoroscope::MergeFrom(const SHoroscope& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:horoscope.SHoroscope)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  uid_.MergeFrom(from.uid_);
}

void SHoroscope::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:horoscope.SHoroscope)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SHoroscope::CopyFrom(const SHoroscope& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:horoscope.SHoroscope)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SHoroscope::IsInitialized() const {
  return true;
}

void SHoroscope::InternalSwap(SHoroscope* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  uid_.InternalSwap(&other->uid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SHoroscope::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace horoscope
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::horoscope::CHoroscope* Arena::CreateMaybeMessage< ::horoscope::CHoroscope >(Arena* arena) {
  return Arena::CreateInternal< ::horoscope::CHoroscope >(arena);
}
template<> PROTOBUF_NOINLINE ::horoscope::SHoroscope* Arena::CreateMaybeMessage< ::horoscope::SHoroscope >(Arena* arena) {
  return Arena::CreateInternal< ::horoscope::SHoroscope >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
