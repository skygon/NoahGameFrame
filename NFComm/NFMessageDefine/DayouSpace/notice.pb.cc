// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notice.proto

#include "notice.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_notice_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_noticeMsg_notice_2eproto;
namespace notive {
class noticeMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<noticeMsg> _instance;
} _noticeMsg_default_instance_;
class SActiveNoticeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SActiveNotice> _instance;
} _SActiveNotice_default_instance_;
}  // namespace notive
static void InitDefaultsscc_info_SActiveNotice_notice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::notive::_SActiveNotice_default_instance_;
    new (ptr) ::notive::SActiveNotice();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::notive::SActiveNotice::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SActiveNotice_notice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SActiveNotice_notice_2eproto}, {
      &scc_info_noticeMsg_notice_2eproto.base,}};

static void InitDefaultsscc_info_noticeMsg_notice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::notive::_noticeMsg_default_instance_;
    new (ptr) ::notive::noticeMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::notive::noticeMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_noticeMsg_notice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_noticeMsg_notice_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_notice_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_notice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_notice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_notice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::notive::noticeMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::notive::noticeMsg, noticeid_),
  PROTOBUF_FIELD_OFFSET(::notive::noticeMsg, title_),
  PROTOBUF_FIELD_OFFSET(::notive::noticeMsg, content_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::notive::SActiveNotice, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::notive::SActiveNotice, notice_),
  PROTOBUF_FIELD_OFFSET(::notive::SActiveNotice, nextracetime_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::notive::noticeMsg)},
  { 8, -1, sizeof(::notive::SActiveNotice)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::notive::_noticeMsg_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::notive::_SActiveNotice_default_instance_),
};

const char descriptor_table_protodef_notice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014notice.proto\022\006notive\"=\n\tnoticeMsg\022\020\n\010n"
  "oticeId\030\001 \001(\005\022\r\n\005title\030\002 \001(\t\022\017\n\007content\030"
  "\003 \001(\t\"H\n\rSActiveNotice\022!\n\006notice\030\001 \001(\0132\021"
  ".notive.noticeMsg\022\024\n\014nextRaceTime\030\002 \001(\005B"
  "\"\n\030com.dayou.space.protobufB\006Noticeb\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_notice_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_notice_2eproto_sccs[2] = {
  &scc_info_SActiveNotice_notice_2eproto.base,
  &scc_info_noticeMsg_notice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_notice_2eproto_once;
static bool descriptor_table_notice_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_notice_2eproto = {
  &descriptor_table_notice_2eproto_initialized, descriptor_table_protodef_notice_2eproto, "notice.proto", 203,
  &descriptor_table_notice_2eproto_once, descriptor_table_notice_2eproto_sccs, descriptor_table_notice_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_notice_2eproto::offsets,
  file_level_metadata_notice_2eproto, 2, file_level_enum_descriptors_notice_2eproto, file_level_service_descriptors_notice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_notice_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_notice_2eproto), true);
namespace notive {

// ===================================================================

void noticeMsg::InitAsDefaultInstance() {
}
class noticeMsg::_Internal {
 public:
};

noticeMsg::noticeMsg()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:notive.noticeMsg)
}
noticeMsg::noticeMsg(const noticeMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_title().empty()) {
    title_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_content().empty()) {
    content_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  noticeid_ = from.noticeid_;
  // @@protoc_insertion_point(copy_constructor:notive.noticeMsg)
}

void noticeMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_noticeMsg_notice_2eproto.base);
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  noticeid_ = 0;
}

noticeMsg::~noticeMsg() {
  // @@protoc_insertion_point(destructor:notive.noticeMsg)
  SharedDtor();
}

void noticeMsg::SharedDtor() {
  title_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void noticeMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const noticeMsg& noticeMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_noticeMsg_notice_2eproto.base);
  return *internal_default_instance();
}


void noticeMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:notive.noticeMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  title_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  content_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  noticeid_ = 0;
  _internal_metadata_.Clear();
}

const char* noticeMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 noticeId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          noticeid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string title = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_title();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "notive.noticeMsg.title"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string content = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_content();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "notive.noticeMsg.content"));
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

::PROTOBUF_NAMESPACE_ID::uint8* noticeMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:notive.noticeMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 noticeId = 1;
  if (this->noticeid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_noticeid(), target);
  }

  // string title = 2;
  if (this->title().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_title().data(), static_cast<int>(this->_internal_title().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "notive.noticeMsg.title");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_title(), target);
  }

  // string content = 3;
  if (this->content().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_content().data(), static_cast<int>(this->_internal_content().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "notive.noticeMsg.content");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_content(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:notive.noticeMsg)
  return target;
}

size_t noticeMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:notive.noticeMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string title = 2;
  if (this->title().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_title());
  }

  // string content = 3;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_content());
  }

  // int32 noticeId = 1;
  if (this->noticeid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_noticeid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void noticeMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:notive.noticeMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const noticeMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<noticeMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:notive.noticeMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:notive.noticeMsg)
    MergeFrom(*source);
  }
}

void noticeMsg::MergeFrom(const noticeMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:notive.noticeMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.title().size() > 0) {

    title_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  if (from.noticeid() != 0) {
    _internal_set_noticeid(from._internal_noticeid());
  }
}

void noticeMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:notive.noticeMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void noticeMsg::CopyFrom(const noticeMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:notive.noticeMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool noticeMsg::IsInitialized() const {
  return true;
}

void noticeMsg::InternalSwap(noticeMsg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  title_.Swap(&other->title_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  content_.Swap(&other->content_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(noticeid_, other->noticeid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata noticeMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SActiveNotice::InitAsDefaultInstance() {
  ::notive::_SActiveNotice_default_instance_._instance.get_mutable()->notice_ = const_cast< ::notive::noticeMsg*>(
      ::notive::noticeMsg::internal_default_instance());
}
class SActiveNotice::_Internal {
 public:
  static const ::notive::noticeMsg& notice(const SActiveNotice* msg);
};

const ::notive::noticeMsg&
SActiveNotice::_Internal::notice(const SActiveNotice* msg) {
  return *msg->notice_;
}
SActiveNotice::SActiveNotice()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:notive.SActiveNotice)
}
SActiveNotice::SActiveNotice(const SActiveNotice& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_notice()) {
    notice_ = new ::notive::noticeMsg(*from.notice_);
  } else {
    notice_ = nullptr;
  }
  nextracetime_ = from.nextracetime_;
  // @@protoc_insertion_point(copy_constructor:notive.SActiveNotice)
}

void SActiveNotice::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SActiveNotice_notice_2eproto.base);
  ::memset(&notice_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nextracetime_) -
      reinterpret_cast<char*>(&notice_)) + sizeof(nextracetime_));
}

SActiveNotice::~SActiveNotice() {
  // @@protoc_insertion_point(destructor:notive.SActiveNotice)
  SharedDtor();
}

void SActiveNotice::SharedDtor() {
  if (this != internal_default_instance()) delete notice_;
}

void SActiveNotice::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SActiveNotice& SActiveNotice::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SActiveNotice_notice_2eproto.base);
  return *internal_default_instance();
}


void SActiveNotice::Clear() {
// @@protoc_insertion_point(message_clear_start:notive.SActiveNotice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && notice_ != nullptr) {
    delete notice_;
  }
  notice_ = nullptr;
  nextracetime_ = 0;
  _internal_metadata_.Clear();
}

const char* SActiveNotice::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .notive.noticeMsg notice = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_notice(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 nextRaceTime = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          nextracetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SActiveNotice::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:notive.SActiveNotice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .notive.noticeMsg notice = 1;
  if (this->has_notice()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::notice(this), target, stream);
  }

  // int32 nextRaceTime = 2;
  if (this->nextracetime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_nextracetime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:notive.SActiveNotice)
  return target;
}

size_t SActiveNotice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:notive.SActiveNotice)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .notive.noticeMsg notice = 1;
  if (this->has_notice()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *notice_);
  }

  // int32 nextRaceTime = 2;
  if (this->nextracetime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_nextracetime());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SActiveNotice::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:notive.SActiveNotice)
  GOOGLE_DCHECK_NE(&from, this);
  const SActiveNotice* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SActiveNotice>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:notive.SActiveNotice)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:notive.SActiveNotice)
    MergeFrom(*source);
  }
}

void SActiveNotice::MergeFrom(const SActiveNotice& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:notive.SActiveNotice)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_notice()) {
    _internal_mutable_notice()->::notive::noticeMsg::MergeFrom(from._internal_notice());
  }
  if (from.nextracetime() != 0) {
    _internal_set_nextracetime(from._internal_nextracetime());
  }
}

void SActiveNotice::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:notive.SActiveNotice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SActiveNotice::CopyFrom(const SActiveNotice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:notive.SActiveNotice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SActiveNotice::IsInitialized() const {
  return true;
}

void SActiveNotice::InternalSwap(SActiveNotice* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(notice_, other->notice_);
  swap(nextracetime_, other->nextracetime_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SActiveNotice::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace notive
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::notive::noticeMsg* Arena::CreateMaybeMessage< ::notive::noticeMsg >(Arena* arena) {
  return Arena::CreateInternal< ::notive::noticeMsg >(arena);
}
template<> PROTOBUF_NOINLINE ::notive::SActiveNotice* Arena::CreateMaybeMessage< ::notive::SActiveNotice >(Arena* arena) {
  return Arena::CreateInternal< ::notive::SActiveNotice >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
