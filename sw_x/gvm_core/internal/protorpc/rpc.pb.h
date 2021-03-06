// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#ifndef PROTOBUF_rpc_2eproto__INCLUDED
#define PROTOBUF_rpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpc_2eproto();
void protobuf_AssignDesc_rpc_2eproto();
void protobuf_ShutdownFile_rpc_2eproto();

class RpcRequestHeader;
class RpcStatus;

enum RpcStatus_Status {
  RpcStatus_Status_OK = 0,
  RpcStatus_Status_IO_ERROR = 1,
  RpcStatus_Status_BAD_REQUEST = 2,
  RpcStatus_Status_BAD_REQUEST_SERVER = 10,
  RpcStatus_Status_BAD_RESPONSE = 3,
  RpcStatus_Status_BAD_RESPONSE_SERVER = 4,
  RpcStatus_Status_INTERNAL_ERROR = 5,
  RpcStatus_Status_HEADER_ERROR = 6,
  RpcStatus_Status_UNKNOWN_METHOD = 7
};
bool RpcStatus_Status_IsValid(int value);
const RpcStatus_Status RpcStatus_Status_Status_MIN = RpcStatus_Status_OK;
const RpcStatus_Status RpcStatus_Status_Status_MAX = RpcStatus_Status_BAD_REQUEST_SERVER;
const int RpcStatus_Status_Status_ARRAYSIZE = RpcStatus_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* RpcStatus_Status_descriptor();
inline const ::std::string& RpcStatus_Status_Name(RpcStatus_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    RpcStatus_Status_descriptor(), value);
}
inline bool RpcStatus_Status_Parse(
    const ::std::string& name, RpcStatus_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RpcStatus_Status>(
    RpcStatus_Status_descriptor(), name, value);
}
// ===================================================================

class RpcRequestHeader : public ::google::protobuf::Message {
 public:
  RpcRequestHeader();
  virtual ~RpcRequestHeader();
  
  RpcRequestHeader(const RpcRequestHeader& from);
  
  inline RpcRequestHeader& operator=(const RpcRequestHeader& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcRequestHeader& default_instance();
  
  void Swap(RpcRequestHeader* other);
  
  // implements Message ----------------------------------------------
  
  RpcRequestHeader* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcRequestHeader& from);
  void MergeFrom(const RpcRequestHeader& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string methodName = 1;
  inline bool has_methodname() const;
  inline void clear_methodname();
  static const int kMethodNameFieldNumber = 1;
  inline const ::std::string& methodname() const;
  inline void set_methodname(const ::std::string& value);
  inline void set_methodname(const char* value);
  inline void set_methodname(const char* value, size_t size);
  inline ::std::string* mutable_methodname();
  inline ::std::string* release_methodname();
  
  // @@protoc_insertion_point(class_scope:RpcRequestHeader)
 private:
  inline void set_has_methodname();
  inline void clear_has_methodname();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* methodname_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();
  
  void InitAsDefaultInstance();
  static RpcRequestHeader* default_instance_;
};
// -------------------------------------------------------------------

class RpcStatus : public ::google::protobuf::Message {
 public:
  RpcStatus();
  virtual ~RpcStatus();
  
  RpcStatus(const RpcStatus& from);
  
  inline RpcStatus& operator=(const RpcStatus& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcStatus& default_instance();
  
  void Swap(RpcStatus* other);
  
  // implements Message ----------------------------------------------
  
  RpcStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcStatus& from);
  void MergeFrom(const RpcStatus& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef RpcStatus_Status Status;
  static const Status OK = RpcStatus_Status_OK;
  static const Status IO_ERROR = RpcStatus_Status_IO_ERROR;
  static const Status BAD_REQUEST = RpcStatus_Status_BAD_REQUEST;
  static const Status BAD_REQUEST_SERVER = RpcStatus_Status_BAD_REQUEST_SERVER;
  static const Status BAD_RESPONSE = RpcStatus_Status_BAD_RESPONSE;
  static const Status BAD_RESPONSE_SERVER = RpcStatus_Status_BAD_RESPONSE_SERVER;
  static const Status INTERNAL_ERROR = RpcStatus_Status_INTERNAL_ERROR;
  static const Status HEADER_ERROR = RpcStatus_Status_HEADER_ERROR;
  static const Status UNKNOWN_METHOD = RpcStatus_Status_UNKNOWN_METHOD;
  static inline bool Status_IsValid(int value) {
    return RpcStatus_Status_IsValid(value);
  }
  static const Status Status_MIN =
    RpcStatus_Status_Status_MIN;
  static const Status Status_MAX =
    RpcStatus_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    RpcStatus_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return RpcStatus_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return RpcStatus_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return RpcStatus_Status_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .RpcStatus.Status status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::RpcStatus_Status status() const;
  inline void set_status(::RpcStatus_Status value);
  
  // optional int32 appStatus = 3;
  inline bool has_appstatus() const;
  inline void clear_appstatus();
  static const int kAppStatusFieldNumber = 3;
  inline ::google::protobuf::int32 appstatus() const;
  inline void set_appstatus(::google::protobuf::int32 value);
  
  // optional string errorDetail = 2;
  inline bool has_errordetail() const;
  inline void clear_errordetail();
  static const int kErrorDetailFieldNumber = 2;
  inline const ::std::string& errordetail() const;
  inline void set_errordetail(const ::std::string& value);
  inline void set_errordetail(const char* value);
  inline void set_errordetail(const char* value, size_t size);
  inline ::std::string* mutable_errordetail();
  inline ::std::string* release_errordetail();
  
  // @@protoc_insertion_point(class_scope:RpcStatus)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_appstatus();
  inline void clear_has_appstatus();
  inline void set_has_errordetail();
  inline void clear_has_errordetail();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int status_;
  ::google::protobuf::int32 appstatus_;
  ::std::string* errordetail_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();
  
  void InitAsDefaultInstance();
  static RpcStatus* default_instance_;
};
// ===================================================================


// ===================================================================

// RpcRequestHeader

// required string methodName = 1;
inline bool RpcRequestHeader::has_methodname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcRequestHeader::set_has_methodname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcRequestHeader::clear_has_methodname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcRequestHeader::clear_methodname() {
  if (methodname_ != &::google::protobuf::internal::kEmptyString) {
    methodname_->clear();
  }
  clear_has_methodname();
}
inline const ::std::string& RpcRequestHeader::methodname() const {
  return *methodname_;
}
inline void RpcRequestHeader::set_methodname(const ::std::string& value) {
  set_has_methodname();
  if (methodname_ == &::google::protobuf::internal::kEmptyString) {
    methodname_ = new ::std::string;
  }
  methodname_->assign(value);
}
inline void RpcRequestHeader::set_methodname(const char* value) {
  set_has_methodname();
  if (methodname_ == &::google::protobuf::internal::kEmptyString) {
    methodname_ = new ::std::string;
  }
  methodname_->assign(value);
}
inline void RpcRequestHeader::set_methodname(const char* value, size_t size) {
  set_has_methodname();
  if (methodname_ == &::google::protobuf::internal::kEmptyString) {
    methodname_ = new ::std::string;
  }
  methodname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcRequestHeader::mutable_methodname() {
  set_has_methodname();
  if (methodname_ == &::google::protobuf::internal::kEmptyString) {
    methodname_ = new ::std::string;
  }
  return methodname_;
}
inline ::std::string* RpcRequestHeader::release_methodname() {
  clear_has_methodname();
  if (methodname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = methodname_;
    methodname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RpcStatus

// required .RpcStatus.Status status = 1;
inline bool RpcStatus::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcStatus::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcStatus::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcStatus::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::RpcStatus_Status RpcStatus::status() const {
  return static_cast< ::RpcStatus_Status >(status_);
}
inline void RpcStatus::set_status(::RpcStatus_Status value) {
  GOOGLE_DCHECK(::RpcStatus_Status_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional int32 appStatus = 3;
inline bool RpcStatus::has_appstatus() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcStatus::set_has_appstatus() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcStatus::clear_has_appstatus() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcStatus::clear_appstatus() {
  appstatus_ = 0;
  clear_has_appstatus();
}
inline ::google::protobuf::int32 RpcStatus::appstatus() const {
  return appstatus_;
}
inline void RpcStatus::set_appstatus(::google::protobuf::int32 value) {
  set_has_appstatus();
  appstatus_ = value;
}

// optional string errorDetail = 2;
inline bool RpcStatus::has_errordetail() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcStatus::set_has_errordetail() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcStatus::clear_has_errordetail() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcStatus::clear_errordetail() {
  if (errordetail_ != &::google::protobuf::internal::kEmptyString) {
    errordetail_->clear();
  }
  clear_has_errordetail();
}
inline const ::std::string& RpcStatus::errordetail() const {
  return *errordetail_;
}
inline void RpcStatus::set_errordetail(const ::std::string& value) {
  set_has_errordetail();
  if (errordetail_ == &::google::protobuf::internal::kEmptyString) {
    errordetail_ = new ::std::string;
  }
  errordetail_->assign(value);
}
inline void RpcStatus::set_errordetail(const char* value) {
  set_has_errordetail();
  if (errordetail_ == &::google::protobuf::internal::kEmptyString) {
    errordetail_ = new ::std::string;
  }
  errordetail_->assign(value);
}
inline void RpcStatus::set_errordetail(const char* value, size_t size) {
  set_has_errordetail();
  if (errordetail_ == &::google::protobuf::internal::kEmptyString) {
    errordetail_ = new ::std::string;
  }
  errordetail_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcStatus::mutable_errordetail() {
  set_has_errordetail();
  if (errordetail_ == &::google::protobuf::internal::kEmptyString) {
    errordetail_ = new ::std::string;
  }
  return errordetail_;
}
inline ::std::string* RpcStatus::release_errordetail() {
  clear_has_errordetail();
  if (errordetail_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = errordetail_;
    errordetail_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::RpcStatus_Status>() {
  return ::RpcStatus_Status_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_2eproto__INCLUDED
