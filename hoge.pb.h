// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssigmaapi/hoge.proto

#ifndef PROTOBUF_INCLUDED_ssigmaapi_2fhoge_2eproto
#define PROTOBUF_INCLUDED_ssigmaapi_2fhoge_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ssigmaapi_2fhoge_2eproto 

namespace protobuf_ssigmaapi_2fhoge_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ssigmaapi_2fhoge_2eproto
namespace ssigmaapi {
namespace type {
class Hoge;
class HogeDefaultTypeInternal;
extern HogeDefaultTypeInternal _Hoge_default_instance_;
}  // namespace type
}  // namespace ssigmaapi
namespace google {
namespace protobuf {
template<> ::ssigmaapi::type::Hoge* Arena::CreateMaybeMessage<::ssigmaapi::type::Hoge>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssigmaapi {
namespace type {

// ===================================================================

class Hoge : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssigmaapi.type.Hoge) */ {
 public:
  Hoge();
  virtual ~Hoge();

  Hoge(const Hoge& from);

  inline Hoge& operator=(const Hoge& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hoge(Hoge&& from) noexcept
    : Hoge() {
    *this = ::std::move(from);
  }

  inline Hoge& operator=(Hoge&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Hoge& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hoge* internal_default_instance() {
    return reinterpret_cast<const Hoge*>(
               &_Hoge_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Hoge* other);
  friend void swap(Hoge& a, Hoge& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hoge* New() const final {
    return CreateMaybeMessage<Hoge>(NULL);
  }

  Hoge* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Hoge>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Hoge& from);
  void MergeFrom(const Hoge& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hoge* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string huga = 1;
  void clear_huga();
  static const int kHugaFieldNumber = 1;
  const ::std::string& huga() const;
  void set_huga(const ::std::string& value);
  #if LANG_CXX11
  void set_huga(::std::string&& value);
  #endif
  void set_huga(const char* value);
  void set_huga(const char* value, size_t size);
  ::std::string* mutable_huga();
  ::std::string* release_huga();
  void set_allocated_huga(::std::string* huga);

  // @@protoc_insertion_point(class_scope:ssigmaapi.type.Hoge)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr huga_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ssigmaapi_2fhoge_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hoge

// string huga = 1;
inline void Hoge::clear_huga() {
  huga_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Hoge::huga() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Hoge.huga)
  return huga_.GetNoArena();
}
inline void Hoge::set_huga(const ::std::string& value) {
  
  huga_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Hoge.huga)
}
#if LANG_CXX11
inline void Hoge::set_huga(::std::string&& value) {
  
  huga_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Hoge.huga)
}
#endif
inline void Hoge::set_huga(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  huga_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Hoge.huga)
}
inline void Hoge::set_huga(const char* value, size_t size) {
  
  huga_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Hoge.huga)
}
inline ::std::string* Hoge::mutable_huga() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Hoge.huga)
  return huga_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Hoge::release_huga() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Hoge.huga)
  
  return huga_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Hoge::set_allocated_huga(::std::string* huga) {
  if (huga != NULL) {
    
  } else {
    
  }
  huga_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), huga);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Hoge.huga)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace ssigmaapi

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ssigmaapi_2fhoge_2eproto
