// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssigmaapi/productibit/v1/productibit.proto

#include "ssigmaapi/productibit/v1/productibit.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_ssigmaapi_2ftype_2fuseractivity_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_ssigmaapi_2ftype_2fuseractivity_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_UserActivity;
}  // namespace protobuf_ssigmaapi_2ftype_2fuseractivity_2eproto
namespace ssigmaapi {
namespace productibit {
namespace v1 {
class SensorMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SensorMessage>
      _instance;
} _SensorMessage_default_instance_;
}  // namespace v1
}  // namespace productibit
}  // namespace ssigmaapi
namespace protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto {
static void InitDefaultsSensorMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ssigmaapi::productibit::v1::_SensorMessage_default_instance_;
    new (ptr) ::ssigmaapi::productibit::v1::SensorMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ssigmaapi::productibit::v1::SensorMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_SensorMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSensorMessage}, {
      &protobuf_ssigmaapi_2ftype_2fuseractivity_2eproto::scc_info_UserActivity.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SensorMessage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssigmaapi::productibit::v1::SensorMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssigmaapi::productibit::v1::SensorMessage, uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssigmaapi::productibit::v1::SensorMessage, activities_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ssigmaapi::productibit::v1::SensorMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ssigmaapi::productibit::v1::_SensorMessage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ssigmaapi/productibit/v1/productibit.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n*ssigmaapi/productibit/v1/productibit.p"
      "roto\022\030ssigmaapi.productibit.v1\032!ssigmaap"
      "i/type/useractivity.proto\032\033google/protob"
      "uf/empty.proto\"N\n\rSensorMessage\022\013\n\003uid\030\001"
      " \001(\t\0220\n\nactivities\030\002 \003(\0132\034.ssigmaapi.typ"
      "e.UserActivity2i\n\024ProductibitServiceV1\022Q"
      "\n\014UploadSensor\022\'.ssigmaapi.productibit.v"
      "1.SensorMessage\032\026.google.protobuf.Empty\""
      "\000B:Z8github.com/kaito2/ssigmaapigo/produ"
      "ctibit/v1;productibitb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 389);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ssigmaapi/productibit/v1/productibit.proto", &protobuf_RegisterTypes);
  ::protobuf_ssigmaapi_2ftype_2fuseractivity_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fempty_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto
namespace ssigmaapi {
namespace productibit {
namespace v1 {

// ===================================================================

void SensorMessage::InitAsDefaultInstance() {
}
void SensorMessage::clear_activities() {
  activities_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SensorMessage::kUidFieldNumber;
const int SensorMessage::kActivitiesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SensorMessage::SensorMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::scc_info_SensorMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ssigmaapi.productibit.v1.SensorMessage)
}
SensorMessage::SensorMessage(const SensorMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      activities_(from.activities_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uid().size() > 0) {
    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
  // @@protoc_insertion_point(copy_constructor:ssigmaapi.productibit.v1.SensorMessage)
}

void SensorMessage::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SensorMessage::~SensorMessage() {
  // @@protoc_insertion_point(destructor:ssigmaapi.productibit.v1.SensorMessage)
  SharedDtor();
}

void SensorMessage::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SensorMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SensorMessage::descriptor() {
  ::protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SensorMessage& SensorMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::scc_info_SensorMessage.base);
  return *internal_default_instance();
}


void SensorMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:ssigmaapi.productibit.v1.SensorMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  activities_.Clear();
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool SensorMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ssigmaapi.productibit.v1.SensorMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string uid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uid().data(), static_cast<int>(this->uid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ssigmaapi.productibit.v1.SensorMessage.uid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ssigmaapi.type.UserActivity activities = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_activities()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ssigmaapi.productibit.v1.SensorMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ssigmaapi.productibit.v1.SensorMessage)
  return false;
#undef DO_
}

void SensorMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ssigmaapi.productibit.v1.SensorMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uid = 1;
  if (this->uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uid().data(), static_cast<int>(this->uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ssigmaapi.productibit.v1.SensorMessage.uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->uid(), output);
  }

  // repeated .ssigmaapi.type.UserActivity activities = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->activities_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->activities(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ssigmaapi.productibit.v1.SensorMessage)
}

::google::protobuf::uint8* SensorMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ssigmaapi.productibit.v1.SensorMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uid = 1;
  if (this->uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uid().data(), static_cast<int>(this->uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ssigmaapi.productibit.v1.SensorMessage.uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uid(), target);
  }

  // repeated .ssigmaapi.type.UserActivity activities = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->activities_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->activities(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ssigmaapi.productibit.v1.SensorMessage)
  return target;
}

size_t SensorMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ssigmaapi.productibit.v1.SensorMessage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ssigmaapi.type.UserActivity activities = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->activities_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->activities(static_cast<int>(i)));
    }
  }

  // string uid = 1;
  if (this->uid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SensorMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ssigmaapi.productibit.v1.SensorMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const SensorMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SensorMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ssigmaapi.productibit.v1.SensorMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ssigmaapi.productibit.v1.SensorMessage)
    MergeFrom(*source);
  }
}

void SensorMessage::MergeFrom(const SensorMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ssigmaapi.productibit.v1.SensorMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  activities_.MergeFrom(from.activities_);
  if (from.uid().size() > 0) {

    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
}

void SensorMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ssigmaapi.productibit.v1.SensorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SensorMessage::CopyFrom(const SensorMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ssigmaapi.productibit.v1.SensorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorMessage::IsInitialized() const {
  return true;
}

void SensorMessage::Swap(SensorMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SensorMessage::InternalSwap(SensorMessage* other) {
  using std::swap;
  CastToBase(&activities_)->InternalSwap(CastToBase(&other->activities_));
  uid_.Swap(&other->uid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SensorMessage::GetMetadata() const {
  protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ssigmaapi_2fproductibit_2fv1_2fproductibit_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace productibit
}  // namespace ssigmaapi
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ssigmaapi::productibit::v1::SensorMessage* Arena::CreateMaybeMessage< ::ssigmaapi::productibit::v1::SensorMessage >(Arena* arena) {
  return Arena::CreateInternal< ::ssigmaapi::productibit::v1::SensorMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
