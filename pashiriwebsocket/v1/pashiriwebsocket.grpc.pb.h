// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssigmaapi/pashiriwebsocket/v1/pashiriwebsocket.proto
#ifndef GRPC_ssigmaapi_2fpashiriwebsocket_2fv1_2fpashiriwebsocket_2eproto__INCLUDED
#define GRPC_ssigmaapi_2fpashiriwebsocket_2fv1_2fpashiriwebsocket_2eproto__INCLUDED

#include "ssigmaapi/pashiriwebsocket/v1/pashiriwebsocket.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ssigmaapi {
namespace pashiriwebsocket {
namespace v1 {

class PashiriWebsocketServiceV1 final {
 public:
  static constexpr char const* service_full_name() {
    return "ssigmaapi.pashiriwebsocket.v1.PashiriWebsocketServiceV1";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::type::Trades>> GetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::type::Trades>>(GetTradesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>> AsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>>(AsyncGetTradesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>> PrepareAsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>>(PrepareAsyncGetTradesRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::ssigmaapi::type::Trades>* GetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>* AsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::Trades>* PrepareAsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::type::Trades>> GetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::type::Trades>>(GetTradesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>> AsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>>(AsyncGetTradesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>> PrepareAsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>>(PrepareAsyncGetTradesRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReader< ::ssigmaapi::type::Trades>* GetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>* AsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::type::Trades>* PrepareAsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetTrades_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTrades() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrades(::grpc::ServerContext* context, ::ssigmaapi::type::Market* request, ::grpc::ServerAsyncWriter< ::ssigmaapi::type::Trades>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetTrades<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetTrades() {
    }
    ~ExperimentalWithCallbackMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef ExperimentalWithCallbackMethod_GetTrades<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTrades() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetTrades() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrades(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetTrades() {
    }
    ~ExperimentalWithRawCallbackMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetTrades() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::ssigmaapi::type::Market, ::ssigmaapi::type::Trades>(std::bind(&WithSplitStreamingMethod_GetTrades<BaseClass>::StreamedGetTrades, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::Trades>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetTrades(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ssigmaapi::type::Market,::ssigmaapi::type::Trades>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetTrades<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_GetTrades<Service > StreamedService;
};

}  // namespace v1
}  // namespace pashiriwebsocket
}  // namespace ssigmaapi


#endif  // GRPC_ssigmaapi_2fpashiriwebsocket_2fv1_2fpashiriwebsocket_2eproto__INCLUDED
