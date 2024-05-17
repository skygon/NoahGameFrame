// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: switchCommand.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_switchCommand_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_switchCommand_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_switchCommand_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_switchCommand_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_switchCommand_2eproto;
namespace pb {
class CSwitchCommandStatusList;
class CSwitchCommandStatusListDefaultTypeInternal;
extern CSwitchCommandStatusListDefaultTypeInternal _CSwitchCommandStatusList_default_instance_;
class SSwitchCommandStatus;
class SSwitchCommandStatusDefaultTypeInternal;
extern SSwitchCommandStatusDefaultTypeInternal _SSwitchCommandStatus_default_instance_;
class SSwitchCommandStatusList;
class SSwitchCommandStatusListDefaultTypeInternal;
extern SSwitchCommandStatusListDefaultTypeInternal _SSwitchCommandStatusList_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::CSwitchCommandStatusList* Arena::CreateMaybeMessage<::pb::CSwitchCommandStatusList>(Arena*);
template<> ::pb::SSwitchCommandStatus* Arena::CreateMaybeMessage<::pb::SSwitchCommandStatus>(Arena*);
template<> ::pb::SSwitchCommandStatusList* Arena::CreateMaybeMessage<::pb::SSwitchCommandStatusList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class CSwitchCommandStatusList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.CSwitchCommandStatusList) */ {
 public:
  CSwitchCommandStatusList();
  virtual ~CSwitchCommandStatusList();

  CSwitchCommandStatusList(const CSwitchCommandStatusList& from);
  CSwitchCommandStatusList(CSwitchCommandStatusList&& from) noexcept
    : CSwitchCommandStatusList() {
    *this = ::std::move(from);
  }

  inline CSwitchCommandStatusList& operator=(const CSwitchCommandStatusList& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSwitchCommandStatusList& operator=(CSwitchCommandStatusList&& from) noexcept {
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
  static const CSwitchCommandStatusList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CSwitchCommandStatusList* internal_default_instance() {
    return reinterpret_cast<const CSwitchCommandStatusList*>(
               &_CSwitchCommandStatusList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CSwitchCommandStatusList& a, CSwitchCommandStatusList& b) {
    a.Swap(&b);
  }
  inline void Swap(CSwitchCommandStatusList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSwitchCommandStatusList* New() const final {
    return CreateMaybeMessage<CSwitchCommandStatusList>(nullptr);
  }

  CSwitchCommandStatusList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSwitchCommandStatusList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSwitchCommandStatusList& from);
  void MergeFrom(const CSwitchCommandStatusList& from);
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
  void InternalSwap(CSwitchCommandStatusList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.CSwitchCommandStatusList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_switchCommand_2eproto);
    return ::descriptor_table_switchCommand_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandFieldNumber = 1,
  };
  // repeated string command = 1;
  int command_size() const;
  private:
  int _internal_command_size() const;
  public:
  void clear_command();
  const std::string& command(int index) const;
  std::string* mutable_command(int index);
  void set_command(int index, const std::string& value);
  void set_command(int index, std::string&& value);
  void set_command(int index, const char* value);
  void set_command(int index, const char* value, size_t size);
  std::string* add_command();
  void add_command(const std::string& value);
  void add_command(std::string&& value);
  void add_command(const char* value);
  void add_command(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& command() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_command();
  private:
  const std::string& _internal_command(int index) const;
  std::string* _internal_add_command();
  public:

  // @@protoc_insertion_point(class_scope:pb.CSwitchCommandStatusList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> command_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_switchCommand_2eproto;
};
// -------------------------------------------------------------------

class SSwitchCommandStatusList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.SSwitchCommandStatusList) */ {
 public:
  SSwitchCommandStatusList();
  virtual ~SSwitchCommandStatusList();

  SSwitchCommandStatusList(const SSwitchCommandStatusList& from);
  SSwitchCommandStatusList(SSwitchCommandStatusList&& from) noexcept
    : SSwitchCommandStatusList() {
    *this = ::std::move(from);
  }

  inline SSwitchCommandStatusList& operator=(const SSwitchCommandStatusList& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSwitchCommandStatusList& operator=(SSwitchCommandStatusList&& from) noexcept {
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
  static const SSwitchCommandStatusList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSwitchCommandStatusList* internal_default_instance() {
    return reinterpret_cast<const SSwitchCommandStatusList*>(
               &_SSwitchCommandStatusList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SSwitchCommandStatusList& a, SSwitchCommandStatusList& b) {
    a.Swap(&b);
  }
  inline void Swap(SSwitchCommandStatusList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSwitchCommandStatusList* New() const final {
    return CreateMaybeMessage<SSwitchCommandStatusList>(nullptr);
  }

  SSwitchCommandStatusList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSwitchCommandStatusList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSwitchCommandStatusList& from);
  void MergeFrom(const SSwitchCommandStatusList& from);
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
  void InternalSwap(SSwitchCommandStatusList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.SSwitchCommandStatusList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_switchCommand_2eproto);
    return ::descriptor_table_switchCommand_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListFieldNumber = 1,
  };
  // repeated .pb.SSwitchCommandStatus list = 1;
  int list_size() const;
  private:
  int _internal_list_size() const;
  public:
  void clear_list();
  ::pb::SSwitchCommandStatus* mutable_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::SSwitchCommandStatus >*
      mutable_list();
  private:
  const ::pb::SSwitchCommandStatus& _internal_list(int index) const;
  ::pb::SSwitchCommandStatus* _internal_add_list();
  public:
  const ::pb::SSwitchCommandStatus& list(int index) const;
  ::pb::SSwitchCommandStatus* add_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::SSwitchCommandStatus >&
      list() const;

  // @@protoc_insertion_point(class_scope:pb.SSwitchCommandStatusList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::SSwitchCommandStatus > list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_switchCommand_2eproto;
};
// -------------------------------------------------------------------

class SSwitchCommandStatus :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.SSwitchCommandStatus) */ {
 public:
  SSwitchCommandStatus();
  virtual ~SSwitchCommandStatus();

  SSwitchCommandStatus(const SSwitchCommandStatus& from);
  SSwitchCommandStatus(SSwitchCommandStatus&& from) noexcept
    : SSwitchCommandStatus() {
    *this = ::std::move(from);
  }

  inline SSwitchCommandStatus& operator=(const SSwitchCommandStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSwitchCommandStatus& operator=(SSwitchCommandStatus&& from) noexcept {
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
  static const SSwitchCommandStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSwitchCommandStatus* internal_default_instance() {
    return reinterpret_cast<const SSwitchCommandStatus*>(
               &_SSwitchCommandStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SSwitchCommandStatus& a, SSwitchCommandStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(SSwitchCommandStatus* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSwitchCommandStatus* New() const final {
    return CreateMaybeMessage<SSwitchCommandStatus>(nullptr);
  }

  SSwitchCommandStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSwitchCommandStatus>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSwitchCommandStatus& from);
  void MergeFrom(const SSwitchCommandStatus& from);
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
  void InternalSwap(SSwitchCommandStatus* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.SSwitchCommandStatus";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_switchCommand_2eproto);
    return ::descriptor_table_switchCommand_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandFieldNumber = 1,
    kTimeStampFieldNumber = 2,
  };
  // string command = 1;
  void clear_command();
  const std::string& command() const;
  void set_command(const std::string& value);
  void set_command(std::string&& value);
  void set_command(const char* value);
  void set_command(const char* value, size_t size);
  std::string* mutable_command();
  std::string* release_command();
  void set_allocated_command(std::string* command);
  private:
  const std::string& _internal_command() const;
  void _internal_set_command(const std::string& value);
  std::string* _internal_mutable_command();
  public:

  // int32 timeStamp = 2;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int32 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.SSwitchCommandStatus)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr command_;
  ::PROTOBUF_NAMESPACE_ID::int32 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_switchCommand_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CSwitchCommandStatusList

// repeated string command = 1;
inline int CSwitchCommandStatusList::_internal_command_size() const {
  return command_.size();
}
inline int CSwitchCommandStatusList::command_size() const {
  return _internal_command_size();
}
inline void CSwitchCommandStatusList::clear_command() {
  command_.Clear();
}
inline std::string* CSwitchCommandStatusList::add_command() {
  // @@protoc_insertion_point(field_add_mutable:pb.CSwitchCommandStatusList.command)
  return _internal_add_command();
}
inline const std::string& CSwitchCommandStatusList::_internal_command(int index) const {
  return command_.Get(index);
}
inline const std::string& CSwitchCommandStatusList::command(int index) const {
  // @@protoc_insertion_point(field_get:pb.CSwitchCommandStatusList.command)
  return _internal_command(index);
}
inline std::string* CSwitchCommandStatusList::mutable_command(int index) {
  // @@protoc_insertion_point(field_mutable:pb.CSwitchCommandStatusList.command)
  return command_.Mutable(index);
}
inline void CSwitchCommandStatusList::set_command(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:pb.CSwitchCommandStatusList.command)
  command_.Mutable(index)->assign(value);
}
inline void CSwitchCommandStatusList::set_command(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:pb.CSwitchCommandStatusList.command)
  command_.Mutable(index)->assign(std::move(value));
}
inline void CSwitchCommandStatusList::set_command(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  command_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pb.CSwitchCommandStatusList.command)
}
inline void CSwitchCommandStatusList::set_command(int index, const char* value, size_t size) {
  command_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pb.CSwitchCommandStatusList.command)
}
inline std::string* CSwitchCommandStatusList::_internal_add_command() {
  return command_.Add();
}
inline void CSwitchCommandStatusList::add_command(const std::string& value) {
  command_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pb.CSwitchCommandStatusList.command)
}
inline void CSwitchCommandStatusList::add_command(std::string&& value) {
  command_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pb.CSwitchCommandStatusList.command)
}
inline void CSwitchCommandStatusList::add_command(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  command_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pb.CSwitchCommandStatusList.command)
}
inline void CSwitchCommandStatusList::add_command(const char* value, size_t size) {
  command_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pb.CSwitchCommandStatusList.command)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
CSwitchCommandStatusList::command() const {
  // @@protoc_insertion_point(field_list:pb.CSwitchCommandStatusList.command)
  return command_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
CSwitchCommandStatusList::mutable_command() {
  // @@protoc_insertion_point(field_mutable_list:pb.CSwitchCommandStatusList.command)
  return &command_;
}

// -------------------------------------------------------------------

// SSwitchCommandStatusList

// repeated .pb.SSwitchCommandStatus list = 1;
inline int SSwitchCommandStatusList::_internal_list_size() const {
  return list_.size();
}
inline int SSwitchCommandStatusList::list_size() const {
  return _internal_list_size();
}
inline void SSwitchCommandStatusList::clear_list() {
  list_.Clear();
}
inline ::pb::SSwitchCommandStatus* SSwitchCommandStatusList::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:pb.SSwitchCommandStatusList.list)
  return list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::SSwitchCommandStatus >*
SSwitchCommandStatusList::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:pb.SSwitchCommandStatusList.list)
  return &list_;
}
inline const ::pb::SSwitchCommandStatus& SSwitchCommandStatusList::_internal_list(int index) const {
  return list_.Get(index);
}
inline const ::pb::SSwitchCommandStatus& SSwitchCommandStatusList::list(int index) const {
  // @@protoc_insertion_point(field_get:pb.SSwitchCommandStatusList.list)
  return _internal_list(index);
}
inline ::pb::SSwitchCommandStatus* SSwitchCommandStatusList::_internal_add_list() {
  return list_.Add();
}
inline ::pb::SSwitchCommandStatus* SSwitchCommandStatusList::add_list() {
  // @@protoc_insertion_point(field_add:pb.SSwitchCommandStatusList.list)
  return _internal_add_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::SSwitchCommandStatus >&
SSwitchCommandStatusList::list() const {
  // @@protoc_insertion_point(field_list:pb.SSwitchCommandStatusList.list)
  return list_;
}

// -------------------------------------------------------------------

// SSwitchCommandStatus

// string command = 1;
inline void SSwitchCommandStatus::clear_command() {
  command_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SSwitchCommandStatus::command() const {
  // @@protoc_insertion_point(field_get:pb.SSwitchCommandStatus.command)
  return _internal_command();
}
inline void SSwitchCommandStatus::set_command(const std::string& value) {
  _internal_set_command(value);
  // @@protoc_insertion_point(field_set:pb.SSwitchCommandStatus.command)
}
inline std::string* SSwitchCommandStatus::mutable_command() {
  // @@protoc_insertion_point(field_mutable:pb.SSwitchCommandStatus.command)
  return _internal_mutable_command();
}
inline const std::string& SSwitchCommandStatus::_internal_command() const {
  return command_.GetNoArena();
}
inline void SSwitchCommandStatus::_internal_set_command(const std::string& value) {
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SSwitchCommandStatus::set_command(std::string&& value) {
  
  command_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.SSwitchCommandStatus.command)
}
inline void SSwitchCommandStatus::set_command(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.SSwitchCommandStatus.command)
}
inline void SSwitchCommandStatus::set_command(const char* value, size_t size) {
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.SSwitchCommandStatus.command)
}
inline std::string* SSwitchCommandStatus::_internal_mutable_command() {
  
  return command_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SSwitchCommandStatus::release_command() {
  // @@protoc_insertion_point(field_release:pb.SSwitchCommandStatus.command)
  
  return command_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SSwitchCommandStatus::set_allocated_command(std::string* command) {
  if (command != nullptr) {
    
  } else {
    
  }
  command_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), command);
  // @@protoc_insertion_point(field_set_allocated:pb.SSwitchCommandStatus.command)
}

// int32 timeStamp = 2;
inline void SSwitchCommandStatus::clear_timestamp() {
  timestamp_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SSwitchCommandStatus::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SSwitchCommandStatus::timestamp() const {
  // @@protoc_insertion_point(field_get:pb.SSwitchCommandStatus.timeStamp)
  return _internal_timestamp();
}
inline void SSwitchCommandStatus::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  timestamp_ = value;
}
inline void SSwitchCommandStatus::set_timestamp(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:pb.SSwitchCommandStatus.timeStamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_switchCommand_2eproto