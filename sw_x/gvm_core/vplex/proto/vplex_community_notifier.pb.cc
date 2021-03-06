// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vplex_community_notifier.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace vplex {
namespace community {
namespace notifier {

namespace {

const ::google::protobuf::Descriptor* ConnectionId_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectionId_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_vplex_5fcommunity_5fnotifier_2eproto() {
  protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "vplex_community_notifier.proto");
  GOOGLE_CHECK(file != NULL);
  ConnectionId_descriptor_ = file->message_type(0);
  static const int ConnectionId_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectionId, id_),
  };
  ConnectionId_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectionId_descriptor_,
      ConnectionId::default_instance_,
      ConnectionId_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectionId, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectionId, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectionId));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_vplex_5fcommunity_5fnotifier_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectionId_descriptor_, &ConnectionId::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_vplex_5fcommunity_5fnotifier_2eproto() {
  delete ConnectionId::default_instance_;
  delete ConnectionId_reflection_;
}

void protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036vplex_community_notifier.proto\022\030vplex."
    "community.notifier\"\032\n\014ConnectionId\022\n\n\002id"
    "\030\001 \002(\006B$\n\017igware.vplex.pbB\021CommunityNoti"
    "fier", 124);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vplex_community_notifier.proto", &protobuf_RegisterTypes);
  ConnectionId::default_instance_ = new ConnectionId();
  ConnectionId::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_vplex_5fcommunity_5fnotifier_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_vplex_5fcommunity_5fnotifier_2eproto {
  StaticDescriptorInitializer_vplex_5fcommunity_5fnotifier_2eproto() {
    protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto();
  }
} static_descriptor_initializer_vplex_5fcommunity_5fnotifier_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ConnectionId::kIdFieldNumber;
#endif  // !_MSC_VER

ConnectionId::ConnectionId()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectionId::InitAsDefaultInstance() {
}

ConnectionId::ConnectionId(const ConnectionId& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectionId::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectionId::~ConnectionId() {
  SharedDtor();
}

void ConnectionId::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConnectionId::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectionId::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectionId_descriptor_;
}

const ConnectionId& ConnectionId::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_vplex_5fcommunity_5fnotifier_2eproto();  return *default_instance_;
}

ConnectionId* ConnectionId::default_instance_ = NULL;

ConnectionId* ConnectionId::New() const {
  return new ConnectionId;
}

void ConnectionId::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectionId::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required fixed64 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectionId::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required fixed64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectionId::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required fixed64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectionId::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required fixed64 id = 1;
    if (has_id()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConnectionId::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectionId* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectionId*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectionId::MergeFrom(const ConnectionId& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectionId::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectionId::CopyFrom(const ConnectionId& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectionId::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void ConnectionId::Swap(ConnectionId* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectionId::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectionId_descriptor_;
  metadata.reflection = ConnectionId_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace notifier
}  // namespace community
}  // namespace vplex

// @@protoc_insertion_point(global_scope)
