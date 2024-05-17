// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: countdown.proto

#include "countdown.pb.h"

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
namespace countdown {
class SCountdownDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SCountdown> _instance;
} _SCountdown_default_instance_;
}  // namespace countdown
static void InitDefaultsscc_info_SCountdown_countdown_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::countdown::_SCountdown_default_instance_;
    new (ptr) ::countdown::SCountdown();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::countdown::SCountdown::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SCountdown_countdown_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SCountdown_countdown_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_countdown_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_countdown_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_countdown_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_countdown_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, starttime_),
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, endtime_),
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, countdowntype_),
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, countdowndescribe_),
  PROTOBUF_FIELD_OFFSET(::countdown::SCountdown, intervaltime_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::countdown::SCountdown)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::countdown::_SCountdown_default_instance_),
};

const char descriptor_table_protodef_countdown_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017countdown.proto\022\tcountdown\"x\n\nSCountdo"
  "wn\022\021\n\tstartTime\030\001 \001(\003\022\017\n\007endTime\030\002 \001(\003\022\025"
  "\n\rcountdownType\030\003 \001(\005\022\031\n\021countdownDescri"
  "be\030\004 \001(\t\022\024\n\014intervalTime\030\005 \001(\005B%\n\030com.da"
  "you.space.protobufB\tCountdownb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_countdown_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_countdown_2eproto_sccs[1] = {
  &scc_info_SCountdown_countdown_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_countdown_2eproto_once;
static bool descriptor_table_countdown_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_countdown_2eproto = {
  &descriptor_table_countdown_2eproto_initialized, descriptor_table_protodef_countdown_2eproto, "countdown.proto", 197,
  &descriptor_table_countdown_2eproto_once, descriptor_table_countdown_2eproto_sccs, descriptor_table_countdown_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_countdown_2eproto::offsets,
  file_level_metadata_countdown_2eproto, 1, file_level_enum_descriptors_countdown_2eproto, file_level_service_descriptors_countdown_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_countdown_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_countdown_2eproto), true);
namespace countdown {

// ===================================================================

void SCountdown::InitAsDefaultInstance() {
}
class SCountdown::_Internal {
 public:
};

SCountdown::SCountdown()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:countdown.SCountdown)
}
SCountdown::SCountdown(const SCountdown& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  countdowndescribe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_countdowndescribe().empty()) {
    countdowndescribe_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.countdowndescribe_);
  }
  ::memcpy(&starttime_, &from.starttime_,
    static_cast<size_t>(reinterpret_cast<char*>(&intervaltime_) -
    reinterpret_cast<char*>(&starttime_)) + sizeof(intervaltime_));
  // @@protoc_insertion_point(copy_constructor:countdown.SCountdown)
}

void SCountdown::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SCountdown_countdown_2eproto.base);
  countdowndescribe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&starttime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&intervaltime_) -
      reinterpret_cast<char*>(&starttime_)) + sizeof(intervaltime_));
}

SCountdown::~SCountdown() {
  // @@protoc_insertion_point(destructor:countdown.SCountdown)
  SharedDtor();
}

void SCountdown::SharedDtor() {
  countdowndescribe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SCountdown::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SCountdown& SCountdown::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SCountdown_countdown_2eproto.base);
  return *internal_default_instance();
}


void SCountdown::Clear() {
// @@protoc_insertion_point(message_clear_start:countdown.SCountdown)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  countdowndescribe_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&starttime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&intervaltime_) -
      reinterpret_cast<char*>(&starttime_)) + sizeof(intervaltime_));
  _internal_metadata_.Clear();
}

const char* SCountdown::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 startTime = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          starttime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 endTime = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          endtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 countdownType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          countdowntype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string countdownDescribe = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_countdowndescribe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "countdown.SCountdown.countdownDescribe"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 intervalTime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          intervaltime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SCountdown::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:countdown.SCountdown)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 startTime = 1;
  if (this->starttime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_starttime(), target);
  }

  // int64 endTime = 2;
  if (this->endtime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_endtime(), target);
  }

  // int32 countdownType = 3;
  if (this->countdowntype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_countdowntype(), target);
  }

  // string countdownDescribe = 4;
  if (this->countdowndescribe().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_countdowndescribe().data(), static_cast<int>(this->_internal_countdowndescribe().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "countdown.SCountdown.countdownDescribe");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_countdowndescribe(), target);
  }

  // int32 intervalTime = 5;
  if (this->intervaltime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_intervaltime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:countdown.SCountdown)
  return target;
}

size_t SCountdown::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:countdown.SCountdown)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string countdownDescribe = 4;
  if (this->countdowndescribe().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_countdowndescribe());
  }

  // int64 startTime = 1;
  if (this->starttime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_starttime());
  }

  // int64 endTime = 2;
  if (this->endtime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_endtime());
  }

  // int32 countdownType = 3;
  if (this->countdowntype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_countdowntype());
  }

  // int32 intervalTime = 5;
  if (this->intervaltime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_intervaltime());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SCountdown::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:countdown.SCountdown)
  GOOGLE_DCHECK_NE(&from, this);
  const SCountdown* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SCountdown>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:countdown.SCountdown)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:countdown.SCountdown)
    MergeFrom(*source);
  }
}

void SCountdown::MergeFrom(const SCountdown& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:countdown.SCountdown)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.countdowndescribe().size() > 0) {

    countdowndescribe_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.countdowndescribe_);
  }
  if (from.starttime() != 0) {
    _internal_set_starttime(from._internal_starttime());
  }
  if (from.endtime() != 0) {
    _internal_set_endtime(from._internal_endtime());
  }
  if (from.countdowntype() != 0) {
    _internal_set_countdowntype(from._internal_countdowntype());
  }
  if (from.intervaltime() != 0) {
    _internal_set_intervaltime(from._internal_intervaltime());
  }
}

void SCountdown::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:countdown.SCountdown)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SCountdown::CopyFrom(const SCountdown& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:countdown.SCountdown)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SCountdown::IsInitialized() const {
  return true;
}

void SCountdown::InternalSwap(SCountdown* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  countdowndescribe_.Swap(&other->countdowndescribe_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(starttime_, other->starttime_);
  swap(endtime_, other->endtime_);
  swap(countdowntype_, other->countdowntype_);
  swap(intervaltime_, other->intervaltime_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SCountdown::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace countdown
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::countdown::SCountdown* Arena::CreateMaybeMessage< ::countdown::SCountdown >(Arena* arena) {
  return Arena::CreateInternal< ::countdown::SCountdown >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>