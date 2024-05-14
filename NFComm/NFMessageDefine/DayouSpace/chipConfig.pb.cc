// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chipConfig.proto

#include "chipConfig.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_chipConfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GoodsMsg_chipConfig_2eproto;
namespace chipConfig {
class GoodsMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GoodsMsg> _instance;
} _GoodsMsg_default_instance_;
class SChipConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SChipConfig> _instance;
} _SChipConfig_default_instance_;
}  // namespace chipConfig
static void InitDefaultsscc_info_GoodsMsg_chipConfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chipConfig::_GoodsMsg_default_instance_;
    new (ptr) ::chipConfig::GoodsMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chipConfig::GoodsMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GoodsMsg_chipConfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GoodsMsg_chipConfig_2eproto}, {}};

static void InitDefaultsscc_info_SChipConfig_chipConfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chipConfig::_SChipConfig_default_instance_;
    new (ptr) ::chipConfig::SChipConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chipConfig::SChipConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SChipConfig_chipConfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SChipConfig_chipConfig_2eproto}, {
      &scc_info_GoodsMsg_chipConfig_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_chipConfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_chipConfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_chipConfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_chipConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::chipConfig::GoodsMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chipConfig::GoodsMsg, position_),
  PROTOBUF_FIELD_OFFSET(::chipConfig::GoodsMsg, goodsid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::chipConfig::SChipConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chipConfig::SChipConfig, goodslist_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::chipConfig::GoodsMsg)},
  { 7, -1, sizeof(::chipConfig::SChipConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chipConfig::_GoodsMsg_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chipConfig::_SChipConfig_default_instance_),
};

const char descriptor_table_protodef_chipConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020chipConfig.proto\022\nchipConfig\"-\n\010GoodsM"
  "sg\022\020\n\010position\030\001 \001(\005\022\017\n\007goodsId\030\002 \001(\005\"6\n"
  "\013SChipConfig\022\'\n\tgoodsList\030\001 \003(\0132\024.chipCo"
  "nfig.GoodsMsgB&\n\030com.dayou.space.protobu"
  "fB\nChipConfigb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_chipConfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_chipConfig_2eproto_sccs[2] = {
  &scc_info_GoodsMsg_chipConfig_2eproto.base,
  &scc_info_SChipConfig_chipConfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_chipConfig_2eproto_once;
static bool descriptor_table_chipConfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_chipConfig_2eproto = {
  &descriptor_table_chipConfig_2eproto_initialized, descriptor_table_protodef_chipConfig_2eproto, "chipConfig.proto", 181,
  &descriptor_table_chipConfig_2eproto_once, descriptor_table_chipConfig_2eproto_sccs, descriptor_table_chipConfig_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_chipConfig_2eproto::offsets,
  file_level_metadata_chipConfig_2eproto, 2, file_level_enum_descriptors_chipConfig_2eproto, file_level_service_descriptors_chipConfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_chipConfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_chipConfig_2eproto), true);
namespace chipConfig {

// ===================================================================

void GoodsMsg::InitAsDefaultInstance() {
}
class GoodsMsg::_Internal {
 public:
};

GoodsMsg::GoodsMsg()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chipConfig.GoodsMsg)
}
GoodsMsg::GoodsMsg(const GoodsMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&position_, &from.position_,
    static_cast<size_t>(reinterpret_cast<char*>(&goodsid_) -
    reinterpret_cast<char*>(&position_)) + sizeof(goodsid_));
  // @@protoc_insertion_point(copy_constructor:chipConfig.GoodsMsg)
}

void GoodsMsg::SharedCtor() {
  ::memset(&position_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&goodsid_) -
      reinterpret_cast<char*>(&position_)) + sizeof(goodsid_));
}

GoodsMsg::~GoodsMsg() {
  // @@protoc_insertion_point(destructor:chipConfig.GoodsMsg)
  SharedDtor();
}

void GoodsMsg::SharedDtor() {
}

void GoodsMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GoodsMsg& GoodsMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GoodsMsg_chipConfig_2eproto.base);
  return *internal_default_instance();
}


void GoodsMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:chipConfig.GoodsMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&position_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&goodsid_) -
      reinterpret_cast<char*>(&position_)) + sizeof(goodsid_));
  _internal_metadata_.Clear();
}

const char* GoodsMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 position = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          position_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 goodsId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          goodsid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* GoodsMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chipConfig.GoodsMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 position = 1;
  if (this->position() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_position(), target);
  }

  // int32 goodsId = 2;
  if (this->goodsid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_goodsid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chipConfig.GoodsMsg)
  return target;
}

size_t GoodsMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chipConfig.GoodsMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 position = 1;
  if (this->position() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_position());
  }

  // int32 goodsId = 2;
  if (this->goodsid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_goodsid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GoodsMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chipConfig.GoodsMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const GoodsMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GoodsMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chipConfig.GoodsMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chipConfig.GoodsMsg)
    MergeFrom(*source);
  }
}

void GoodsMsg::MergeFrom(const GoodsMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chipConfig.GoodsMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.position() != 0) {
    _internal_set_position(from._internal_position());
  }
  if (from.goodsid() != 0) {
    _internal_set_goodsid(from._internal_goodsid());
  }
}

void GoodsMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chipConfig.GoodsMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GoodsMsg::CopyFrom(const GoodsMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chipConfig.GoodsMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GoodsMsg::IsInitialized() const {
  return true;
}

void GoodsMsg::InternalSwap(GoodsMsg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(position_, other->position_);
  swap(goodsid_, other->goodsid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GoodsMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SChipConfig::InitAsDefaultInstance() {
}
class SChipConfig::_Internal {
 public:
};

SChipConfig::SChipConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chipConfig.SChipConfig)
}
SChipConfig::SChipConfig(const SChipConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      goodslist_(from.goodslist_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:chipConfig.SChipConfig)
}

void SChipConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SChipConfig_chipConfig_2eproto.base);
}

SChipConfig::~SChipConfig() {
  // @@protoc_insertion_point(destructor:chipConfig.SChipConfig)
  SharedDtor();
}

void SChipConfig::SharedDtor() {
}

void SChipConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SChipConfig& SChipConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SChipConfig_chipConfig_2eproto.base);
  return *internal_default_instance();
}


void SChipConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:chipConfig.SChipConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  goodslist_.Clear();
  _internal_metadata_.Clear();
}

const char* SChipConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .chipConfig.GoodsMsg goodsList = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_goodslist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* SChipConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chipConfig.SChipConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .chipConfig.GoodsMsg goodsList = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_goodslist_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_goodslist(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chipConfig.SChipConfig)
  return target;
}

size_t SChipConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chipConfig.SChipConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .chipConfig.GoodsMsg goodsList = 1;
  total_size += 1UL * this->_internal_goodslist_size();
  for (const auto& msg : this->goodslist_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SChipConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chipConfig.SChipConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const SChipConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SChipConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chipConfig.SChipConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chipConfig.SChipConfig)
    MergeFrom(*source);
  }
}

void SChipConfig::MergeFrom(const SChipConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chipConfig.SChipConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  goodslist_.MergeFrom(from.goodslist_);
}

void SChipConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chipConfig.SChipConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SChipConfig::CopyFrom(const SChipConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chipConfig.SChipConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SChipConfig::IsInitialized() const {
  return true;
}

void SChipConfig::InternalSwap(SChipConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  goodslist_.InternalSwap(&other->goodslist_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SChipConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chipConfig
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::chipConfig::GoodsMsg* Arena::CreateMaybeMessage< ::chipConfig::GoodsMsg >(Arena* arena) {
  return Arena::CreateInternal< ::chipConfig::GoodsMsg >(arena);
}
template<> PROTOBUF_NOINLINE ::chipConfig::SChipConfig* Arena::CreateMaybeMessage< ::chipConfig::SChipConfig >(Arena* arena) {
  return Arena::CreateInternal< ::chipConfig::SChipConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
