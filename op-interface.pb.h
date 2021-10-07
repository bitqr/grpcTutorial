// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: op-interface.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_op_2dinterface_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_op_2dinterface_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_op_2dinterface_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_op_2dinterface_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_op_2dinterface_2eproto;
class Item;
class ItemDefaultTypeInternal;
extern ItemDefaultTypeInternal _Item_default_instance_;
class OrienteeringProblemRequest;
class OrienteeringProblemRequestDefaultTypeInternal;
extern OrienteeringProblemRequestDefaultTypeInternal _OrienteeringProblemRequest_default_instance_;
class OrienteeringProblemResponse;
class OrienteeringProblemResponseDefaultTypeInternal;
extern OrienteeringProblemResponseDefaultTypeInternal _OrienteeringProblemResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Item* Arena::CreateMaybeMessage<::Item>(Arena*);
template<> ::OrienteeringProblemRequest* Arena::CreateMaybeMessage<::OrienteeringProblemRequest>(Arena*);
template<> ::OrienteeringProblemResponse* Arena::CreateMaybeMessage<::OrienteeringProblemResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class OrienteeringProblemRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:OrienteeringProblemRequest) */ {
 public:
  inline OrienteeringProblemRequest() : OrienteeringProblemRequest(nullptr) {}
  virtual ~OrienteeringProblemRequest();

  OrienteeringProblemRequest(const OrienteeringProblemRequest& from);
  OrienteeringProblemRequest(OrienteeringProblemRequest&& from) noexcept
    : OrienteeringProblemRequest() {
    *this = ::std::move(from);
  }

  inline OrienteeringProblemRequest& operator=(const OrienteeringProblemRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline OrienteeringProblemRequest& operator=(OrienteeringProblemRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const OrienteeringProblemRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrienteeringProblemRequest* internal_default_instance() {
    return reinterpret_cast<const OrienteeringProblemRequest*>(
               &_OrienteeringProblemRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(OrienteeringProblemRequest& a, OrienteeringProblemRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(OrienteeringProblemRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OrienteeringProblemRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OrienteeringProblemRequest* New() const final {
    return CreateMaybeMessage<OrienteeringProblemRequest>(nullptr);
  }

  OrienteeringProblemRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OrienteeringProblemRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OrienteeringProblemRequest& from);
  void MergeFrom(const OrienteeringProblemRequest& from);
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
  void InternalSwap(OrienteeringProblemRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "OrienteeringProblemRequest";
  }
  protected:
  explicit OrienteeringProblemRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_op_2dinterface_2eproto);
    return ::descriptor_table_op_2dinterface_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kItemsFieldNumber = 1,
    kTimeLimitFieldNumber = 2,
  };
  // repeated .Item items = 1;
  int items_size() const;
  private:
  int _internal_items_size() const;
  public:
  void clear_items();
  ::Item* mutable_items(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >*
      mutable_items();
  private:
  const ::Item& _internal_items(int index) const;
  ::Item* _internal_add_items();
  public:
  const ::Item& items(int index) const;
  ::Item* add_items();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >&
      items() const;

  // double time_limit = 2;
  void clear_time_limit();
  double time_limit() const;
  void set_time_limit(double value);
  private:
  double _internal_time_limit() const;
  void _internal_set_time_limit(double value);
  public:

  // @@protoc_insertion_point(class_scope:OrienteeringProblemRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item > items_;
  double time_limit_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_op_2dinterface_2eproto;
};
// -------------------------------------------------------------------

class OrienteeringProblemResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:OrienteeringProblemResponse) */ {
 public:
  inline OrienteeringProblemResponse() : OrienteeringProblemResponse(nullptr) {}
  virtual ~OrienteeringProblemResponse();

  OrienteeringProblemResponse(const OrienteeringProblemResponse& from);
  OrienteeringProblemResponse(OrienteeringProblemResponse&& from) noexcept
    : OrienteeringProblemResponse() {
    *this = ::std::move(from);
  }

  inline OrienteeringProblemResponse& operator=(const OrienteeringProblemResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline OrienteeringProblemResponse& operator=(OrienteeringProblemResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const OrienteeringProblemResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrienteeringProblemResponse* internal_default_instance() {
    return reinterpret_cast<const OrienteeringProblemResponse*>(
               &_OrienteeringProblemResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(OrienteeringProblemResponse& a, OrienteeringProblemResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(OrienteeringProblemResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OrienteeringProblemResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OrienteeringProblemResponse* New() const final {
    return CreateMaybeMessage<OrienteeringProblemResponse>(nullptr);
  }

  OrienteeringProblemResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OrienteeringProblemResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OrienteeringProblemResponse& from);
  void MergeFrom(const OrienteeringProblemResponse& from);
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
  void InternalSwap(OrienteeringProblemResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "OrienteeringProblemResponse";
  }
  protected:
  explicit OrienteeringProblemResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_op_2dinterface_2eproto);
    return ::descriptor_table_op_2dinterface_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCollectedItemsFieldNumber = 1,
  };
  // repeated .Item collected_items = 1;
  int collected_items_size() const;
  private:
  int _internal_collected_items_size() const;
  public:
  void clear_collected_items();
  ::Item* mutable_collected_items(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >*
      mutable_collected_items();
  private:
  const ::Item& _internal_collected_items(int index) const;
  ::Item* _internal_add_collected_items();
  public:
  const ::Item& collected_items(int index) const;
  ::Item* add_collected_items();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >&
      collected_items() const;

  // @@protoc_insertion_point(class_scope:OrienteeringProblemResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item > collected_items_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_op_2dinterface_2eproto;
};
// -------------------------------------------------------------------

class Item PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Item) */ {
 public:
  inline Item() : Item(nullptr) {}
  virtual ~Item();

  Item(const Item& from);
  Item(Item&& from) noexcept
    : Item() {
    *this = ::std::move(from);
  }

  inline Item& operator=(const Item& from) {
    CopyFrom(from);
    return *this;
  }
  inline Item& operator=(Item&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Item* internal_default_instance() {
    return reinterpret_cast<const Item*>(
               &_Item_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Item& a, Item& b) {
    a.Swap(&b);
  }
  inline void Swap(Item* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Item* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Item* New() const final {
    return CreateMaybeMessage<Item>(nullptr);
  }

  Item* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Item>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Item& from);
  void MergeFrom(const Item& from);
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
  void InternalSwap(Item* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Item";
  }
  protected:
  explicit Item(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_op_2dinterface_2eproto);
    return ::descriptor_table_op_2dinterface_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // uint32 x = 1;
  void clear_x();
  ::PROTOBUF_NAMESPACE_ID::uint32 x() const;
  void set_x(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_x() const;
  void _internal_set_x(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 y = 2;
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::uint32 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:Item)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 x_;
  ::PROTOBUF_NAMESPACE_ID::uint32 y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_op_2dinterface_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OrienteeringProblemRequest

// repeated .Item items = 1;
inline int OrienteeringProblemRequest::_internal_items_size() const {
  return items_.size();
}
inline int OrienteeringProblemRequest::items_size() const {
  return _internal_items_size();
}
inline void OrienteeringProblemRequest::clear_items() {
  items_.Clear();
}
inline ::Item* OrienteeringProblemRequest::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:OrienteeringProblemRequest.items)
  return items_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >*
OrienteeringProblemRequest::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:OrienteeringProblemRequest.items)
  return &items_;
}
inline const ::Item& OrienteeringProblemRequest::_internal_items(int index) const {
  return items_.Get(index);
}
inline const ::Item& OrienteeringProblemRequest::items(int index) const {
  // @@protoc_insertion_point(field_get:OrienteeringProblemRequest.items)
  return _internal_items(index);
}
inline ::Item* OrienteeringProblemRequest::_internal_add_items() {
  return items_.Add();
}
inline ::Item* OrienteeringProblemRequest::add_items() {
  // @@protoc_insertion_point(field_add:OrienteeringProblemRequest.items)
  return _internal_add_items();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >&
OrienteeringProblemRequest::items() const {
  // @@protoc_insertion_point(field_list:OrienteeringProblemRequest.items)
  return items_;
}

// double time_limit = 2;
inline void OrienteeringProblemRequest::clear_time_limit() {
  time_limit_ = 0;
}
inline double OrienteeringProblemRequest::_internal_time_limit() const {
  return time_limit_;
}
inline double OrienteeringProblemRequest::time_limit() const {
  // @@protoc_insertion_point(field_get:OrienteeringProblemRequest.time_limit)
  return _internal_time_limit();
}
inline void OrienteeringProblemRequest::_internal_set_time_limit(double value) {
  
  time_limit_ = value;
}
inline void OrienteeringProblemRequest::set_time_limit(double value) {
  _internal_set_time_limit(value);
  // @@protoc_insertion_point(field_set:OrienteeringProblemRequest.time_limit)
}

// -------------------------------------------------------------------

// OrienteeringProblemResponse

// repeated .Item collected_items = 1;
inline int OrienteeringProblemResponse::_internal_collected_items_size() const {
  return collected_items_.size();
}
inline int OrienteeringProblemResponse::collected_items_size() const {
  return _internal_collected_items_size();
}
inline void OrienteeringProblemResponse::clear_collected_items() {
  collected_items_.Clear();
}
inline ::Item* OrienteeringProblemResponse::mutable_collected_items(int index) {
  // @@protoc_insertion_point(field_mutable:OrienteeringProblemResponse.collected_items)
  return collected_items_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >*
OrienteeringProblemResponse::mutable_collected_items() {
  // @@protoc_insertion_point(field_mutable_list:OrienteeringProblemResponse.collected_items)
  return &collected_items_;
}
inline const ::Item& OrienteeringProblemResponse::_internal_collected_items(int index) const {
  return collected_items_.Get(index);
}
inline const ::Item& OrienteeringProblemResponse::collected_items(int index) const {
  // @@protoc_insertion_point(field_get:OrienteeringProblemResponse.collected_items)
  return _internal_collected_items(index);
}
inline ::Item* OrienteeringProblemResponse::_internal_add_collected_items() {
  return collected_items_.Add();
}
inline ::Item* OrienteeringProblemResponse::add_collected_items() {
  // @@protoc_insertion_point(field_add:OrienteeringProblemResponse.collected_items)
  return _internal_add_collected_items();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Item >&
OrienteeringProblemResponse::collected_items() const {
  // @@protoc_insertion_point(field_list:OrienteeringProblemResponse.collected_items)
  return collected_items_;
}

// -------------------------------------------------------------------

// Item

// uint32 x = 1;
inline void Item::clear_x() {
  x_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Item::_internal_x() const {
  return x_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Item::x() const {
  // @@protoc_insertion_point(field_get:Item.x)
  return _internal_x();
}
inline void Item::_internal_set_x(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  x_ = value;
}
inline void Item::set_x(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Item.x)
}

// uint32 y = 2;
inline void Item::clear_y() {
  y_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Item::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Item::y() const {
  // @@protoc_insertion_point(field_get:Item.y)
  return _internal_y();
}
inline void Item::_internal_set_y(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  y_ = value;
}
inline void Item::set_y(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:Item.y)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_op_2dinterface_2eproto
