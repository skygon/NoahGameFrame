// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: auth.proto

#include "auth.pb.h"

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
namespace auth {
class CAuthDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CAuth> _instance;
} _CAuth_default_instance_;
class SAuthDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SAuth> _instance;
} _SAuth_default_instance_;
}  // namespace auth
static void InitDefaultsscc_info_CAuth_auth_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::auth::_CAuth_default_instance_;
    new (ptr) ::auth::CAuth();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::auth::CAuth::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CAuth_auth_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CAuth_auth_2eproto}, {}};

static void InitDefaultsscc_info_SAuth_auth_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::auth::_SAuth_default_instance_;
    new (ptr) ::auth::SAuth();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::auth::SAuth::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SAuth_auth_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SAuth_auth_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_auth_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_auth_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_auth_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_auth_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::auth::CAuth, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::auth::CAuth, token_),
  PROTOBUF_FIELD_OFFSET(::auth::CAuth, uid_),
  PROTOBUF_FIELD_OFFSET(::auth::CAuth, os_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::auth::SAuth, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::auth::SAuth, uid_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::auth::CAuth)},
  { 8, -1, sizeof(::auth::SAuth)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::auth::_CAuth_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::auth::_SAuth_default_instance_),
};

const char descriptor_table_protodef_auth_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nauth.proto\022\004auth\"/\n\005CAuth\022\r\n\005token\030\001 \001"
  "(\t\022\013\n\003uid\030\002 \001(\005\022\n\n\002os\030\003 \001(\005\"\024\n\005SAuth\022\013\n\003"
  "uid\030\001 \001(\005B \n\030com.dayou.space.protobufB\004A"
  "uthb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_auth_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_auth_2eproto_sccs[2] = {
  &scc_info_CAuth_auth_2eproto.base,
  &scc_info_SAuth_auth_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_auth_2eproto_once;
static bool descriptor_table_auth_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_auth_2eproto = {
  &descriptor_table_auth_2eproto_initialized, descriptor_table_protodef_auth_2eproto, "auth.proto", 131,
  &descriptor_table_auth_2eproto_once, descriptor_table_auth_2eproto_sccs, descriptor_table_auth_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_auth_2eproto::offsets,
  file_level_metadata_auth_2eproto, 2, file_level_enum_descriptors_auth_2eproto, file_level_service_descriptors_auth_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_auth_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_auth_2eproto), true);
namespace auth {

// ===================================================================

void CAuth::InitAsDefaultInstance() {
}
class CAuth::_Internal {
 public:
};

CAuth::CAuth()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:auth.CAuth)
}
CAuth::CAuth(const CAuth& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_token().empty()) {
    token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
  ::memcpy(&uid_, &from.uid_,
    static_cast<size_t>(reinterpret_cast<char*>(&os_) -
    reinterpret_cast<char*>(&uid_)) + sizeof(os_));
  // @@protoc_insertion_point(copy_constructor:auth.CAuth)
}

void CAuth::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CAuth_auth_2eproto.base);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&os_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(os_));
}

CAuth::~CAuth() {
  // @@protoc_insertion_point(destructor:auth.CAuth)
  SharedDtor();
}

void CAuth::SharedDtor() {
  token_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CAuth::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CAuth& CAuth::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CAuth_auth_2eproto.base);
  return *internal_default_instance();
}


void CAuth::Clear() {
// @@protoc_insertion_point(message_clear_start:auth.CAuth)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  token_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&os_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(os_));
  _internal_metadata_.Clear();
}

const char* CAuth::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string token = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_token();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "auth.CAuth.token"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 uid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 os = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          os_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* CAuth::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:auth.CAuth)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string token = 1;
  if (this->token().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_token().data(), static_cast<int>(this->_internal_token().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "auth.CAuth.token");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_token(), target);
  }

  // int32 uid = 2;
  if (this->uid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_uid(), target);
  }

  // int32 os = 3;
  if (this->os() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_os(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:auth.CAuth)
  return target;
}

size_t CAuth::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:auth.CAuth)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string token = 1;
  if (this->token().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_token());
  }

  // int32 uid = 2;
  if (this->uid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_uid());
  }

  // int32 os = 3;
  if (this->os() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_os());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CAuth::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:auth.CAuth)
  GOOGLE_DCHECK_NE(&from, this);
  const CAuth* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CAuth>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:auth.CAuth)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:auth.CAuth)
    MergeFrom(*source);
  }
}

void CAuth::MergeFrom(const CAuth& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:auth.CAuth)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.token().size() > 0) {

    token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
  if (from.uid() != 0) {
    _internal_set_uid(from._internal_uid());
  }
  if (from.os() != 0) {
    _internal_set_os(from._internal_os());
  }
}

void CAuth::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:auth.CAuth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CAuth::CopyFrom(const CAuth& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:auth.CAuth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CAuth::IsInitialized() const {
  return true;
}

void CAuth::InternalSwap(CAuth* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  token_.Swap(&other->token_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(uid_, other->uid_);
  swap(os_, other->os_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CAuth::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SAuth::InitAsDefaultInstance() {
}
class SAuth::_Internal {
 public:
};

SAuth::SAuth()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:auth.SAuth)
}
SAuth::SAuth(const SAuth& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uid_ = from.uid_;
  // @@protoc_insertion_point(copy_constructor:auth.SAuth)
}

void SAuth::SharedCtor() {
  uid_ = 0;
}

SAuth::~SAuth() {
  // @@protoc_insertion_point(destructor:auth.SAuth)
  SharedDtor();
}

void SAuth::SharedDtor() {
}

void SAuth::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SAuth& SAuth::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SAuth_auth_2eproto.base);
  return *internal_default_instance();
}


void SAuth::Clear() {
// @@protoc_insertion_point(message_clear_start:auth.SAuth)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uid_ = 0;
  _internal_metadata_.Clear();
}

const char* SAuth::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 uid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SAuth::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:auth.SAuth)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 uid = 1;
  if (this->uid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_uid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:auth.SAuth)
  return target;
}

size_t SAuth::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:auth.SAuth)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 uid = 1;
  if (this->uid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_uid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SAuth::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:auth.SAuth)
  GOOGLE_DCHECK_NE(&from, this);
  const SAuth* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SAuth>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:auth.SAuth)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:auth.SAuth)
    MergeFrom(*source);
  }
}

void SAuth::MergeFrom(const SAuth& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:auth.SAuth)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uid() != 0) {
    _internal_set_uid(from._internal_uid());
  }
}

void SAuth::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:auth.SAuth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SAuth::CopyFrom(const SAuth& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:auth.SAuth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SAuth::IsInitialized() const {
  return true;
}

void SAuth::InternalSwap(SAuth* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(uid_, other->uid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SAuth::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace auth
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::auth::CAuth* Arena::CreateMaybeMessage< ::auth::CAuth >(Arena* arena) {
  return Arena::CreateInternal< ::auth::CAuth >(arena);
}
template<> PROTOBUF_NOINLINE ::auth::SAuth* Arena::CreateMaybeMessage< ::auth::SAuth >(Arena* arena) {
  return Arena::CreateInternal< ::auth::SAuth >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
