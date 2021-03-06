// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssigmaapi/pashirirest/v1/pashirirest.proto
#ifndef GRPC_ssigmaapi_2fpashirirest_2fv1_2fpashirirest_2eproto__INCLUDED
#define GRPC_ssigmaapi_2fpashirirest_2fv1_2fpashirirest_2eproto__INCLUDED

#include "ssigmaapi/pashirirest/v1/pashirirest.pb.h"

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
namespace pashirirest {
namespace v1 {

class PashiriRestServiceV1 final {
 public:
  static constexpr char const* service_full_name() {
    return "ssigmaapi.pashirirest.v1.PashiriRestServiceV1";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::type::OrderBook>> GetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::type::OrderBook>>(GetOrderBookRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>> AsyncGetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>>(AsyncGetOrderBookRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>> PrepareAsyncGetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>>(PrepareAsyncGetOrderBookRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::ssigmaapi::type::OrderBook>* GetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>* AsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::type::OrderBook>* PrepareAsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::type::OrderBook>> GetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::type::OrderBook>>(GetOrderBookRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>> AsyncGetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>>(AsyncGetOrderBookRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>> PrepareAsyncGetOrderBook(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>>(PrepareAsyncGetOrderBookRaw(context, request, cq));
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
    ::grpc::ClientReader< ::ssigmaapi::type::OrderBook>* GetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>* AsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::type::OrderBook>* PrepareAsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::ssigmaapi::type::Market& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetOrderBook_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetOrderBook() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetOrderBook(::grpc::ServerContext* context, ::ssigmaapi::type::Market* request, ::grpc::ServerAsyncWriter< ::ssigmaapi::type::OrderBook>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetOrderBook<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetOrderBook() {
    }
    ~ExperimentalWithCallbackMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef ExperimentalWithCallbackMethod_GetOrderBook<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetOrderBook() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetOrderBook() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetOrderBook(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetOrderBook() {
    }
    ~ExperimentalWithRawCallbackMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetOrderBook : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetOrderBook() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::ssigmaapi::type::Market, ::ssigmaapi::type::OrderBook>(std::bind(&WithSplitStreamingMethod_GetOrderBook<BaseClass>::StreamedGetOrderBook, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetOrderBook() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetOrderBook(::grpc::ServerContext* context, const ::ssigmaapi::type::Market* request, ::grpc::ServerWriter< ::ssigmaapi::type::OrderBook>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetOrderBook(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ssigmaapi::type::Market,::ssigmaapi::type::OrderBook>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetOrderBook<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_GetOrderBook<Service > StreamedService;
};

}  // namespace v1
}  // namespace pashirirest
}  // namespace ssigmaapi


#endif  // GRPC_ssigmaapi_2fpashirirest_2fv1_2fpashirirest_2eproto__INCLUDED
