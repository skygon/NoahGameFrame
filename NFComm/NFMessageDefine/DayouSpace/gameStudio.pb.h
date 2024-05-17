// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gameStudio.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_gameStudio_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_gameStudio_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_gameStudio_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_gameStudio_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gameStudio_2eproto;
namespace gameStudio {
class BGameStudioInstance;
class BGameStudioInstanceDefaultTypeInternal;
extern BGameStudioInstanceDefaultTypeInternal _BGameStudioInstance_default_instance_;
class CGameStudioInstanceList;
class CGameStudioInstanceListDefaultTypeInternal;
extern CGameStudioInstanceListDefaultTypeInternal _CGameStudioInstanceList_default_instance_;
class SGameStudioInstanceList;
class SGameStudioInstanceListDefaultTypeInternal;
extern SGameStudioInstanceListDefaultTypeInternal _SGameStudioInstanceList_default_instance_;
}  // namespace gameStudio
PROTOBUF_NAMESPACE_OPEN
template<> ::gameStudio::BGameStudioInstance* Arena::CreateMaybeMessage<::gameStudio::BGameStudioInstance>(Arena*);
template<> ::gameStudio::CGameStudioInstanceList* Arena::CreateMaybeMessage<::gameStudio::CGameStudioInstanceList>(Arena*);
template<> ::gameStudio::SGameStudioInstanceList* Arena::CreateMaybeMessage<::gameStudio::SGameStudioInstanceList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gameStudio {

// ===================================================================

class BGameStudioInstance :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gameStudio.BGameStudioInstance) */ {
 public:
  BGameStudioInstance();
  virtual ~BGameStudioInstance();

  BGameStudioInstance(const BGameStudioInstance& from);
  BGameStudioInstance(BGameStudioInstance&& from) noexcept
    : BGameStudioInstance() {
    *this = ::std::move(from);
  }

  inline BGameStudioInstance& operator=(const BGameStudioInstance& from) {
    CopyFrom(from);
    return *this;
  }
  inline BGameStudioInstance& operator=(BGameStudioInstance&& from) noexcept {
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
  static const BGameStudioInstance& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BGameStudioInstance* internal_default_instance() {
    return reinterpret_cast<const BGameStudioInstance*>(
               &_BGameStudioInstance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BGameStudioInstance& a, BGameStudioInstance& b) {
    a.Swap(&b);
  }
  inline void Swap(BGameStudioInstance* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BGameStudioInstance* New() const final {
    return CreateMaybeMessage<BGameStudioInstance>(nullptr);
  }

  BGameStudioInstance* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BGameStudioInstance>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BGameStudioInstance& from);
  void MergeFrom(const BGameStudioInstance& from);
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
  void InternalSwap(BGameStudioInstance* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gameStudio.BGameStudioInstance";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_gameStudio_2eproto);
    return ::descriptor_table_gameStudio_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGameConfigFieldNumber = 1,
    kUserNumFieldNumber = 2,
    kMaxUserNumFieldNumber = 3,
    kIsFreeFieldNumber = 4,
  };
  // string gameConfig = 1;
  void clear_gameconfig();
  const std::string& gameconfig() const;
  void set_gameconfig(const std::string& value);
  void set_gameconfig(std::string&& value);
  void set_gameconfig(const char* value);
  void set_gameconfig(const char* value, size_t size);
  std::string* mutable_gameconfig();
  std::string* release_gameconfig();
  void set_allocated_gameconfig(std::string* gameconfig);
  private:
  const std::string& _internal_gameconfig() const;
  void _internal_set_gameconfig(const std::string& value);
  std::string* _internal_mutable_gameconfig();
  public:

  // int32 userNum = 2;
  void clear_usernum();
  ::PROTOBUF_NAMESPACE_ID::int32 usernum() const;
  void set_usernum(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_usernum() const;
  void _internal_set_usernum(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 maxUserNum = 3;
  void clear_maxusernum();
  ::PROTOBUF_NAMESPACE_ID::int32 maxusernum() const;
  void set_maxusernum(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_maxusernum() const;
  void _internal_set_maxusernum(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool isFree = 4;
  void clear_isfree();
  bool isfree() const;
  void set_isfree(bool value);
  private:
  bool _internal_isfree() const;
  void _internal_set_isfree(bool value);
  public:

  // @@protoc_insertion_point(class_scope:gameStudio.BGameStudioInstance)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr gameconfig_;
  ::PROTOBUF_NAMESPACE_ID::int32 usernum_;
  ::PROTOBUF_NAMESPACE_ID::int32 maxusernum_;
  bool isfree_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_gameStudio_2eproto;
};
// -------------------------------------------------------------------

class CGameStudioInstanceList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gameStudio.CGameStudioInstanceList) */ {
 public:
  CGameStudioInstanceList();
  virtual ~CGameStudioInstanceList();

  CGameStudioInstanceList(const CGameStudioInstanceList& from);
  CGameStudioInstanceList(CGameStudioInstanceList&& from) noexcept
    : CGameStudioInstanceList() {
    *this = ::std::move(from);
  }

  inline CGameStudioInstanceList& operator=(const CGameStudioInstanceList& from) {
    CopyFrom(from);
    return *this;
  }
  inline CGameStudioInstanceList& operator=(CGameStudioInstanceList&& from) noexcept {
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
  static const CGameStudioInstanceList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CGameStudioInstanceList* internal_default_instance() {
    return reinterpret_cast<const CGameStudioInstanceList*>(
               &_CGameStudioInstanceList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CGameStudioInstanceList& a, CGameStudioInstanceList& b) {
    a.Swap(&b);
  }
  inline void Swap(CGameStudioInstanceList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CGameStudioInstanceList* New() const final {
    return CreateMaybeMessage<CGameStudioInstanceList>(nullptr);
  }

  CGameStudioInstanceList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CGameStudioInstanceList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CGameStudioInstanceList& from);
  void MergeFrom(const CGameStudioInstanceList& from);
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
  void InternalSwap(CGameStudioInstanceList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gameStudio.CGameStudioInstanceList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_gameStudio_2eproto);
    return ::descriptor_table_gameStudio_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kVersionFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 version = 2;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::int32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_version() const;
  void _internal_set_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:gameStudio.CGameStudioInstanceList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_gameStudio_2eproto;
};
// -------------------------------------------------------------------

class SGameStudioInstanceList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gameStudio.SGameStudioInstanceList) */ {
 public:
  SGameStudioInstanceList();
  virtual ~SGameStudioInstanceList();

  SGameStudioInstanceList(const SGameStudioInstanceList& from);
  SGameStudioInstanceList(SGameStudioInstanceList&& from) noexcept
    : SGameStudioInstanceList() {
    *this = ::std::move(from);
  }

  inline SGameStudioInstanceList& operator=(const SGameStudioInstanceList& from) {
    CopyFrom(from);
    return *this;
  }
  inline SGameStudioInstanceList& operator=(SGameStudioInstanceList&& from) noexcept {
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
  static const SGameStudioInstanceList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SGameStudioInstanceList* internal_default_instance() {
    return reinterpret_cast<const SGameStudioInstanceList*>(
               &_SGameStudioInstanceList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SGameStudioInstanceList& a, SGameStudioInstanceList& b) {
    a.Swap(&b);
  }
  inline void Swap(SGameStudioInstanceList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SGameStudioInstanceList* New() const final {
    return CreateMaybeMessage<SGameStudioInstanceList>(nullptr);
  }

  SGameStudioInstanceList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SGameStudioInstanceList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SGameStudioInstanceList& from);
  void MergeFrom(const SGameStudioInstanceList& from);
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
  void InternalSwap(SGameStudioInstanceList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gameStudio.SGameStudioInstanceList";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_gameStudio_2eproto);
    return ::descriptor_table_gameStudio_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListsFieldNumber = 1,
    kStatusFieldNumber = 2,
  };
  // repeated .gameStudio.BGameStudioInstance lists = 1;
  int lists_size() const;
  private:
  int _internal_lists_size() const;
  public:
  void clear_lists();
  ::gameStudio::BGameStudioInstance* mutable_lists(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gameStudio::BGameStudioInstance >*
      mutable_lists();
  private:
  const ::gameStudio::BGameStudioInstance& _internal_lists(int index) const;
  ::gameStudio::BGameStudioInstance* _internal_add_lists();
  public:
  const ::gameStudio::BGameStudioInstance& lists(int index) const;
  ::gameStudio::BGameStudioInstance* add_lists();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gameStudio::BGameStudioInstance >&
      lists() const;

  // int32 status = 2;
  void clear_status();
  ::PROTOBUF_NAMESPACE_ID::int32 status() const;
  void set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_status() const;
  void _internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:gameStudio.SGameStudioInstanceList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gameStudio::BGameStudioInstance > lists_;
  ::PROTOBUF_NAMESPACE_ID::int32 status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_gameStudio_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BGameStudioInstance

// string gameConfig = 1;
inline void BGameStudioInstance::clear_gameconfig() {
  gameconfig_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BGameStudioInstance::gameconfig() const {
  // @@protoc_insertion_point(field_get:gameStudio.BGameStudioInstance.gameConfig)
  return _internal_gameconfig();
}
inline void BGameStudioInstance::set_gameconfig(const std::string& value) {
  _internal_set_gameconfig(value);
  // @@protoc_insertion_point(field_set:gameStudio.BGameStudioInstance.gameConfig)
}
inline std::string* BGameStudioInstance::mutable_gameconfig() {
  // @@protoc_insertion_point(field_mutable:gameStudio.BGameStudioInstance.gameConfig)
  return _internal_mutable_gameconfig();
}
inline const std::string& BGameStudioInstance::_internal_gameconfig() const {
  return gameconfig_.GetNoArena();
}
inline void BGameStudioInstance::_internal_set_gameconfig(const std::string& value) {
  
  gameconfig_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void BGameStudioInstance::set_gameconfig(std::string&& value) {
  
  gameconfig_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gameStudio.BGameStudioInstance.gameConfig)
}
inline void BGameStudioInstance::set_gameconfig(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  gameconfig_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gameStudio.BGameStudioInstance.gameConfig)
}
inline void BGameStudioInstance::set_gameconfig(const char* value, size_t size) {
  
  gameconfig_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gameStudio.BGameStudioInstance.gameConfig)
}
inline std::string* BGameStudioInstance::_internal_mutable_gameconfig() {
  
  return gameconfig_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BGameStudioInstance::release_gameconfig() {
  // @@protoc_insertion_point(field_release:gameStudio.BGameStudioInstance.gameConfig)
  
  return gameconfig_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BGameStudioInstance::set_allocated_gameconfig(std::string* gameconfig) {
  if (gameconfig != nullptr) {
    
  } else {
    
  }
  gameconfig_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), gameconfig);
  // @@protoc_insertion_point(field_set_allocated:gameStudio.BGameStudioInstance.gameConfig)
}

// int32 userNum = 2;
inline void BGameStudioInstance::clear_usernum() {
  usernum_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BGameStudioInstance::_internal_usernum() const {
  return usernum_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BGameStudioInstance::usernum() const {
  // @@protoc_insertion_point(field_get:gameStudio.BGameStudioInstance.userNum)
  return _internal_usernum();
}
inline void BGameStudioInstance::_internal_set_usernum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  usernum_ = value;
}
inline void BGameStudioInstance::set_usernum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_usernum(value);
  // @@protoc_insertion_point(field_set:gameStudio.BGameStudioInstance.userNum)
}

// int32 maxUserNum = 3;
inline void BGameStudioInstance::clear_maxusernum() {
  maxusernum_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BGameStudioInstance::_internal_maxusernum() const {
  return maxusernum_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BGameStudioInstance::maxusernum() const {
  // @@protoc_insertion_point(field_get:gameStudio.BGameStudioInstance.maxUserNum)
  return _internal_maxusernum();
}
inline void BGameStudioInstance::_internal_set_maxusernum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  maxusernum_ = value;
}
inline void BGameStudioInstance::set_maxusernum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_maxusernum(value);
  // @@protoc_insertion_point(field_set:gameStudio.BGameStudioInstance.maxUserNum)
}

// bool isFree = 4;
inline void BGameStudioInstance::clear_isfree() {
  isfree_ = false;
}
inline bool BGameStudioInstance::_internal_isfree() const {
  return isfree_;
}
inline bool BGameStudioInstance::isfree() const {
  // @@protoc_insertion_point(field_get:gameStudio.BGameStudioInstance.isFree)
  return _internal_isfree();
}
inline void BGameStudioInstance::_internal_set_isfree(bool value) {
  
  isfree_ = value;
}
inline void BGameStudioInstance::set_isfree(bool value) {
  _internal_set_isfree(value);
  // @@protoc_insertion_point(field_set:gameStudio.BGameStudioInstance.isFree)
}

// -------------------------------------------------------------------

// CGameStudioInstanceList

// string name = 1;
inline void CGameStudioInstanceList::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CGameStudioInstanceList::name() const {
  // @@protoc_insertion_point(field_get:gameStudio.CGameStudioInstanceList.name)
  return _internal_name();
}
inline void CGameStudioInstanceList::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:gameStudio.CGameStudioInstanceList.name)
}
inline std::string* CGameStudioInstanceList::mutable_name() {
  // @@protoc_insertion_point(field_mutable:gameStudio.CGameStudioInstanceList.name)
  return _internal_mutable_name();
}
inline const std::string& CGameStudioInstanceList::_internal_name() const {
  return name_.GetNoArena();
}
inline void CGameStudioInstanceList::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void CGameStudioInstanceList::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gameStudio.CGameStudioInstanceList.name)
}
inline void CGameStudioInstanceList::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gameStudio.CGameStudioInstanceList.name)
}
inline void CGameStudioInstanceList::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gameStudio.CGameStudioInstanceList.name)
}
inline std::string* CGameStudioInstanceList::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CGameStudioInstanceList::release_name() {
  // @@protoc_insertion_point(field_release:gameStudio.CGameStudioInstanceList.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CGameStudioInstanceList::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gameStudio.CGameStudioInstanceList.name)
}

// int32 version = 2;
inline void CGameStudioInstanceList::clear_version() {
  version_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CGameStudioInstanceList::_internal_version() const {
  return version_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CGameStudioInstanceList::version() const {
  // @@protoc_insertion_point(field_get:gameStudio.CGameStudioInstanceList.version)
  return _internal_version();
}
inline void CGameStudioInstanceList::_internal_set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  version_ = value;
}
inline void CGameStudioInstanceList::set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:gameStudio.CGameStudioInstanceList.version)
}

// -------------------------------------------------------------------

// SGameStudioInstanceList

// repeated .gameStudio.BGameStudioInstance lists = 1;
inline int SGameStudioInstanceList::_internal_lists_size() const {
  return lists_.size();
}
inline int SGameStudioInstanceList::lists_size() const {
  return _internal_lists_size();
}
inline void SGameStudioInstanceList::clear_lists() {
  lists_.Clear();
}
inline ::gameStudio::BGameStudioInstance* SGameStudioInstanceList::mutable_lists(int index) {
  // @@protoc_insertion_point(field_mutable:gameStudio.SGameStudioInstanceList.lists)
  return lists_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gameStudio::BGameStudioInstance >*
SGameStudioInstanceList::mutable_lists() {
  // @@protoc_insertion_point(field_mutable_list:gameStudio.SGameStudioInstanceList.lists)
  return &lists_;
}
inline const ::gameStudio::BGameStudioInstance& SGameStudioInstanceList::_internal_lists(int index) const {
  return lists_.Get(index);
}
inline const ::gameStudio::BGameStudioInstance& SGameStudioInstanceList::lists(int index) const {
  // @@protoc_insertion_point(field_get:gameStudio.SGameStudioInstanceList.lists)
  return _internal_lists(index);
}
inline ::gameStudio::BGameStudioInstance* SGameStudioInstanceList::_internal_add_lists() {
  return lists_.Add();
}
inline ::gameStudio::BGameStudioInstance* SGameStudioInstanceList::add_lists() {
  // @@protoc_insertion_point(field_add:gameStudio.SGameStudioInstanceList.lists)
  return _internal_add_lists();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gameStudio::BGameStudioInstance >&
SGameStudioInstanceList::lists() const {
  // @@protoc_insertion_point(field_list:gameStudio.SGameStudioInstanceList.lists)
  return lists_;
}

// int32 status = 2;
inline void SGameStudioInstanceList::clear_status() {
  status_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SGameStudioInstanceList::_internal_status() const {
  return status_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SGameStudioInstanceList::status() const {
  // @@protoc_insertion_point(field_get:gameStudio.SGameStudioInstanceList.status)
  return _internal_status();
}
inline void SGameStudioInstanceList::_internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  status_ = value;
}
inline void SGameStudioInstanceList::set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:gameStudio.SGameStudioInstanceList.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gameStudio

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_gameStudio_2eproto