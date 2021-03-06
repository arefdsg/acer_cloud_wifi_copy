// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.lite.proto

package igware.protobuf.pb;

public final class Rpc {
  private Rpc() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface RpcRequestHeaderOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {
    
    // required string methodName = 1;
    boolean hasMethodName();
    String getMethodName();
  }
  public static final class RpcRequestHeader extends
      com.google.protobuf.GeneratedMessageLite
      implements RpcRequestHeaderOrBuilder {
    // Use RpcRequestHeader.newBuilder() to construct.
    private RpcRequestHeader(Builder builder) {
      super(builder);
    }
    private RpcRequestHeader(boolean noInit) {}
    
    private static final RpcRequestHeader defaultInstance;
    public static RpcRequestHeader getDefaultInstance() {
      return defaultInstance;
    }
    
    public RpcRequestHeader getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    private int bitField0_;
    // required string methodName = 1;
    public static final int METHODNAME_FIELD_NUMBER = 1;
    private Object methodName_;
    public boolean hasMethodName() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    public String getMethodName() {
      Object ref = methodName_;
      if (ref instanceof String) {
        return (String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        String s = bs.toStringUtf8();
        if (com.google.protobuf.Internal.isValidUtf8(bs)) {
          methodName_ = s;
        }
        return s;
      }
    }
    private com.google.protobuf.ByteString getMethodNameBytes() {
      Object ref = methodName_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8((String) ref);
        methodName_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    
    private void initFields() {
      methodName_ = "";
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;
      
      if (!hasMethodName()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeBytes(1, getMethodNameBytes());
      }
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(1, getMethodNameBytes());
      }
      memoizedSerializedSize = size;
      return size;
    }
    
    @java.lang.Override
    protected Object writeReplace() throws java.io.ObjectStreamException {
      return super.writeReplace();
    }
    
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcRequestHeader parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(igware.protobuf.pb.Rpc.RpcRequestHeader prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          igware.protobuf.pb.Rpc.RpcRequestHeader, Builder>
        implements igware.protobuf.pb.Rpc.RpcRequestHeaderOrBuilder {
      // Construct using igware.protobuf.pb.Rpc.RpcRequestHeader.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }
      
      private void maybeForceBuilderInitialization() {
      }
      private static Builder create() {
        return new Builder();
      }
      
      public Builder clear() {
        super.clear();
        methodName_ = "";
        bitField0_ = (bitField0_ & ~0x00000001);
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }
      
      public igware.protobuf.pb.Rpc.RpcRequestHeader getDefaultInstanceForType() {
        return igware.protobuf.pb.Rpc.RpcRequestHeader.getDefaultInstance();
      }
      
      public igware.protobuf.pb.Rpc.RpcRequestHeader build() {
        igware.protobuf.pb.Rpc.RpcRequestHeader result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }
      
      private igware.protobuf.pb.Rpc.RpcRequestHeader buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        igware.protobuf.pb.Rpc.RpcRequestHeader result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return result;
      }
      
      public igware.protobuf.pb.Rpc.RpcRequestHeader buildPartial() {
        igware.protobuf.pb.Rpc.RpcRequestHeader result = new igware.protobuf.pb.Rpc.RpcRequestHeader(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.methodName_ = methodName_;
        result.bitField0_ = to_bitField0_;
        return result;
      }
      
      public Builder mergeFrom(igware.protobuf.pb.Rpc.RpcRequestHeader other) {
        if (other == igware.protobuf.pb.Rpc.RpcRequestHeader.getDefaultInstance()) return this;
        if (other.hasMethodName()) {
          setMethodName(other.getMethodName());
        }
        return this;
      }
      
      public final boolean isInitialized() {
        if (!hasMethodName()) {
          
          return false;
        }
        return true;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              
              return this;
            default: {
              if (!parseUnknownField(input, extensionRegistry, tag)) {
                
                return this;
              }
              break;
            }
            case 10: {
              bitField0_ |= 0x00000001;
              methodName_ = input.readBytes();
              break;
            }
          }
        }
      }
      
      private int bitField0_;
      
      // required string methodName = 1;
      private Object methodName_ = "";
      public boolean hasMethodName() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      public String getMethodName() {
        Object ref = methodName_;
        if (!(ref instanceof String)) {
          String s = ((com.google.protobuf.ByteString) ref).toStringUtf8();
          methodName_ = s;
          return s;
        } else {
          return (String) ref;
        }
      }
      public Builder setMethodName(String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        methodName_ = value;
        
        return this;
      }
      public Builder clearMethodName() {
        bitField0_ = (bitField0_ & ~0x00000001);
        methodName_ = getDefaultInstance().getMethodName();
        
        return this;
      }
      void setMethodName(com.google.protobuf.ByteString value) {
        bitField0_ |= 0x00000001;
        methodName_ = value;
        
      }
      
      // @@protoc_insertion_point(builder_scope:RpcRequestHeader)
    }
    
    static {
      defaultInstance = new RpcRequestHeader(true);
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:RpcRequestHeader)
  }
  
  public interface RpcStatusOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {
    
    // required .RpcStatus.Status status = 1;
    boolean hasStatus();
    igware.protobuf.pb.Rpc.RpcStatus.Status getStatus();
    
    // optional int32 appStatus = 3;
    boolean hasAppStatus();
    int getAppStatus();
    
    // optional string errorDetail = 2;
    boolean hasErrorDetail();
    String getErrorDetail();
  }
  public static final class RpcStatus extends
      com.google.protobuf.GeneratedMessageLite
      implements RpcStatusOrBuilder {
    // Use RpcStatus.newBuilder() to construct.
    private RpcStatus(Builder builder) {
      super(builder);
    }
    private RpcStatus(boolean noInit) {}
    
    private static final RpcStatus defaultInstance;
    public static RpcStatus getDefaultInstance() {
      return defaultInstance;
    }
    
    public RpcStatus getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    public enum Status
        implements com.google.protobuf.Internal.EnumLite {
      OK(0, 0),
      IO_ERROR(1, 1),
      BAD_REQUEST(2, 2),
      BAD_REQUEST_SERVER(3, 10),
      BAD_RESPONSE(4, 3),
      BAD_RESPONSE_SERVER(5, 4),
      INTERNAL_ERROR(6, 5),
      HEADER_ERROR(7, 6),
      UNKNOWN_METHOD(8, 7),
      ;
      
      public static final int OK_VALUE = 0;
      public static final int IO_ERROR_VALUE = 1;
      public static final int BAD_REQUEST_VALUE = 2;
      public static final int BAD_REQUEST_SERVER_VALUE = 10;
      public static final int BAD_RESPONSE_VALUE = 3;
      public static final int BAD_RESPONSE_SERVER_VALUE = 4;
      public static final int INTERNAL_ERROR_VALUE = 5;
      public static final int HEADER_ERROR_VALUE = 6;
      public static final int UNKNOWN_METHOD_VALUE = 7;
      
      
      public final int getNumber() { return value; }
      
      public static Status valueOf(int value) {
        switch (value) {
          case 0: return OK;
          case 1: return IO_ERROR;
          case 2: return BAD_REQUEST;
          case 10: return BAD_REQUEST_SERVER;
          case 3: return BAD_RESPONSE;
          case 4: return BAD_RESPONSE_SERVER;
          case 5: return INTERNAL_ERROR;
          case 6: return HEADER_ERROR;
          case 7: return UNKNOWN_METHOD;
          default: return null;
        }
      }
      
      public static com.google.protobuf.Internal.EnumLiteMap<Status>
          internalGetValueMap() {
        return internalValueMap;
      }
      private static com.google.protobuf.Internal.EnumLiteMap<Status>
          internalValueMap =
            new com.google.protobuf.Internal.EnumLiteMap<Status>() {
              public Status findValueByNumber(int number) {
                return Status.valueOf(number);
              }
            };
      
      private final int value;
      
      private Status(int index, int value) {
        this.value = value;
      }
      
      // @@protoc_insertion_point(enum_scope:RpcStatus.Status)
    }
    
    private int bitField0_;
    // required .RpcStatus.Status status = 1;
    public static final int STATUS_FIELD_NUMBER = 1;
    private igware.protobuf.pb.Rpc.RpcStatus.Status status_;
    public boolean hasStatus() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    public igware.protobuf.pb.Rpc.RpcStatus.Status getStatus() {
      return status_;
    }
    
    // optional int32 appStatus = 3;
    public static final int APPSTATUS_FIELD_NUMBER = 3;
    private int appStatus_;
    public boolean hasAppStatus() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    public int getAppStatus() {
      return appStatus_;
    }
    
    // optional string errorDetail = 2;
    public static final int ERRORDETAIL_FIELD_NUMBER = 2;
    private Object errorDetail_;
    public boolean hasErrorDetail() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    public String getErrorDetail() {
      Object ref = errorDetail_;
      if (ref instanceof String) {
        return (String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        String s = bs.toStringUtf8();
        if (com.google.protobuf.Internal.isValidUtf8(bs)) {
          errorDetail_ = s;
        }
        return s;
      }
    }
    private com.google.protobuf.ByteString getErrorDetailBytes() {
      Object ref = errorDetail_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8((String) ref);
        errorDetail_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    
    private void initFields() {
      status_ = igware.protobuf.pb.Rpc.RpcStatus.Status.OK;
      appStatus_ = 0;
      errorDetail_ = "";
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;
      
      if (!hasStatus()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeEnum(1, status_.getNumber());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeBytes(2, getErrorDetailBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeInt32(3, appStatus_);
      }
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, status_.getNumber());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, getErrorDetailBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(3, appStatus_);
      }
      memoizedSerializedSize = size;
      return size;
    }
    
    @java.lang.Override
    protected Object writeReplace() throws java.io.ObjectStreamException {
      return super.writeReplace();
    }
    
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static igware.protobuf.pb.Rpc.RpcStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(igware.protobuf.pb.Rpc.RpcStatus prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          igware.protobuf.pb.Rpc.RpcStatus, Builder>
        implements igware.protobuf.pb.Rpc.RpcStatusOrBuilder {
      // Construct using igware.protobuf.pb.Rpc.RpcStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }
      
      private void maybeForceBuilderInitialization() {
      }
      private static Builder create() {
        return new Builder();
      }
      
      public Builder clear() {
        super.clear();
        status_ = igware.protobuf.pb.Rpc.RpcStatus.Status.OK;
        bitField0_ = (bitField0_ & ~0x00000001);
        appStatus_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        errorDetail_ = "";
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }
      
      public igware.protobuf.pb.Rpc.RpcStatus getDefaultInstanceForType() {
        return igware.protobuf.pb.Rpc.RpcStatus.getDefaultInstance();
      }
      
      public igware.protobuf.pb.Rpc.RpcStatus build() {
        igware.protobuf.pb.Rpc.RpcStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }
      
      private igware.protobuf.pb.Rpc.RpcStatus buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        igware.protobuf.pb.Rpc.RpcStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return result;
      }
      
      public igware.protobuf.pb.Rpc.RpcStatus buildPartial() {
        igware.protobuf.pb.Rpc.RpcStatus result = new igware.protobuf.pb.Rpc.RpcStatus(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.status_ = status_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.appStatus_ = appStatus_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.errorDetail_ = errorDetail_;
        result.bitField0_ = to_bitField0_;
        return result;
      }
      
      public Builder mergeFrom(igware.protobuf.pb.Rpc.RpcStatus other) {
        if (other == igware.protobuf.pb.Rpc.RpcStatus.getDefaultInstance()) return this;
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasAppStatus()) {
          setAppStatus(other.getAppStatus());
        }
        if (other.hasErrorDetail()) {
          setErrorDetail(other.getErrorDetail());
        }
        return this;
      }
      
      public final boolean isInitialized() {
        if (!hasStatus()) {
          
          return false;
        }
        return true;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              
              return this;
            default: {
              if (!parseUnknownField(input, extensionRegistry, tag)) {
                
                return this;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();
              igware.protobuf.pb.Rpc.RpcStatus.Status value = igware.protobuf.pb.Rpc.RpcStatus.Status.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000001;
                status_ = value;
              }
              break;
            }
            case 18: {
              bitField0_ |= 0x00000004;
              errorDetail_ = input.readBytes();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000002;
              appStatus_ = input.readInt32();
              break;
            }
          }
        }
      }
      
      private int bitField0_;
      
      // required .RpcStatus.Status status = 1;
      private igware.protobuf.pb.Rpc.RpcStatus.Status status_ = igware.protobuf.pb.Rpc.RpcStatus.Status.OK;
      public boolean hasStatus() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      public igware.protobuf.pb.Rpc.RpcStatus.Status getStatus() {
        return status_;
      }
      public Builder setStatus(igware.protobuf.pb.Rpc.RpcStatus.Status value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000001;
        status_ = value;
        
        return this;
      }
      public Builder clearStatus() {
        bitField0_ = (bitField0_ & ~0x00000001);
        status_ = igware.protobuf.pb.Rpc.RpcStatus.Status.OK;
        
        return this;
      }
      
      // optional int32 appStatus = 3;
      private int appStatus_ ;
      public boolean hasAppStatus() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      public int getAppStatus() {
        return appStatus_;
      }
      public Builder setAppStatus(int value) {
        bitField0_ |= 0x00000002;
        appStatus_ = value;
        
        return this;
      }
      public Builder clearAppStatus() {
        bitField0_ = (bitField0_ & ~0x00000002);
        appStatus_ = 0;
        
        return this;
      }
      
      // optional string errorDetail = 2;
      private Object errorDetail_ = "";
      public boolean hasErrorDetail() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      public String getErrorDetail() {
        Object ref = errorDetail_;
        if (!(ref instanceof String)) {
          String s = ((com.google.protobuf.ByteString) ref).toStringUtf8();
          errorDetail_ = s;
          return s;
        } else {
          return (String) ref;
        }
      }
      public Builder setErrorDetail(String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000004;
        errorDetail_ = value;
        
        return this;
      }
      public Builder clearErrorDetail() {
        bitField0_ = (bitField0_ & ~0x00000004);
        errorDetail_ = getDefaultInstance().getErrorDetail();
        
        return this;
      }
      void setErrorDetail(com.google.protobuf.ByteString value) {
        bitField0_ |= 0x00000004;
        errorDetail_ = value;
        
      }
      
      // @@protoc_insertion_point(builder_scope:RpcStatus)
    }
    
    static {
      defaultInstance = new RpcStatus(true);
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:RpcStatus)
  }
  
  
  static {
  }
  
  // @@protoc_insertion_point(outer_class_scope)
}
