// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: my_message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_my_5fmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_my_5fmessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_my_5fmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_my_5fmessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_my_5fmessage_2eproto;
class my_message_t;
class my_message_tDefaultTypeInternal;
extern my_message_tDefaultTypeInternal _my_message_t_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::my_message_t* Arena::CreateMaybeMessage<::my_message_t>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class my_message_t :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:my_message_t) */ {
 public:
  my_message_t();
  virtual ~my_message_t();

  my_message_t(const my_message_t& from);
  my_message_t(my_message_t&& from) noexcept
    : my_message_t() {
    *this = ::std::move(from);
  }

  inline my_message_t& operator=(const my_message_t& from) {
    CopyFrom(from);
    return *this;
  }
  inline my_message_t& operator=(my_message_t&& from) noexcept {
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
  static const my_message_t& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const my_message_t* internal_default_instance() {
    return reinterpret_cast<const my_message_t*>(
               &_my_message_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(my_message_t& a, my_message_t& b) {
    a.Swap(&b);
  }
  inline void Swap(my_message_t* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline my_message_t* New() const final {
    return CreateMaybeMessage<my_message_t>(nullptr);
  }

  my_message_t* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<my_message_t>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const my_message_t& from);
  void MergeFrom(const my_message_t& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(my_message_t* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "my_message_t";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_my_5fmessage_2eproto);
    return ::descriptor_table_my_5fmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMystringFieldNumber = 2,
    kMyintFieldNumber = 3,
    kMyfloatFieldNumber = 4,
    kMyboolFieldNumber = 5,
  };
  // string mystring = 2;
  void clear_mystring();
  const std::string& mystring() const;
  void set_mystring(const std::string& value);
  void set_mystring(std::string&& value);
  void set_mystring(const char* value);
  void set_mystring(const char* value, size_t size);
  std::string* mutable_mystring();
  std::string* release_mystring();
  void set_allocated_mystring(std::string* mystring);

  // int32 myint = 3;
  void clear_myint();
  ::PROTOBUF_NAMESPACE_ID::int32 myint() const;
  void set_myint(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float myfloat = 4;
  void clear_myfloat();
  float myfloat() const;
  void set_myfloat(float value);

  // bool mybool = 5;
  void clear_mybool();
  bool mybool() const;
  void set_mybool(bool value);

  // @@protoc_insertion_point(class_scope:my_message_t)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mystring_;
  ::PROTOBUF_NAMESPACE_ID::int32 myint_;
  float myfloat_;
  bool mybool_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_my_5fmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// my_message_t

// string mystring = 2;
inline void my_message_t::clear_mystring() {
  mystring_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& my_message_t::mystring() const {
  // @@protoc_insertion_point(field_get:my_message_t.mystring)
  return mystring_.GetNoArena();
}
inline void my_message_t::set_mystring(const std::string& value) {
  
  mystring_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_message_t.mystring)
}
inline void my_message_t::set_mystring(std::string&& value) {
  
  mystring_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_message_t.mystring)
}
inline void my_message_t::set_mystring(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  mystring_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_message_t.mystring)
}
inline void my_message_t::set_mystring(const char* value, size_t size) {
  
  mystring_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_message_t.mystring)
}
inline std::string* my_message_t::mutable_mystring() {
  
  // @@protoc_insertion_point(field_mutable:my_message_t.mystring)
  return mystring_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* my_message_t::release_mystring() {
  // @@protoc_insertion_point(field_release:my_message_t.mystring)
  
  return mystring_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void my_message_t::set_allocated_mystring(std::string* mystring) {
  if (mystring != nullptr) {
    
  } else {
    
  }
  mystring_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), mystring);
  // @@protoc_insertion_point(field_set_allocated:my_message_t.mystring)
}

// int32 myint = 3;
inline void my_message_t::clear_myint() {
  myint_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 my_message_t::myint() const {
  // @@protoc_insertion_point(field_get:my_message_t.myint)
  return myint_;
}
inline void my_message_t::set_myint(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  myint_ = value;
  // @@protoc_insertion_point(field_set:my_message_t.myint)
}

// float myfloat = 4;
inline void my_message_t::clear_myfloat() {
  myfloat_ = 0;
}
inline float my_message_t::myfloat() const {
  // @@protoc_insertion_point(field_get:my_message_t.myfloat)
  return myfloat_;
}
inline void my_message_t::set_myfloat(float value) {
  
  myfloat_ = value;
  // @@protoc_insertion_point(field_set:my_message_t.myfloat)
}

// bool mybool = 5;
inline void my_message_t::clear_mybool() {
  mybool_ = false;
}
inline bool my_message_t::mybool() const {
  // @@protoc_insertion_point(field_get:my_message_t.mybool)
  return mybool_;
}
inline void my_message_t::set_mybool(bool value) {
  
  mybool_ = value;
  // @@protoc_insertion_point(field_set:my_message_t.mybool)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_my_5fmessage_2eproto
