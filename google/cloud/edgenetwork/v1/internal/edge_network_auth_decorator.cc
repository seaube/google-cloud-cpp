// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/edgenetwork/v1/service.proto

#include "google/cloud/edgenetwork/v1/internal/edge_network_auth_decorator.h"
#include <google/cloud/edgenetwork/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeNetworkAuth::EdgeNetworkAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EdgeNetworkStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkAuth::InitializeZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::InitializeZoneRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->InitializeZone(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListZonesResponse>
EdgeNetworkAuth::ListZones(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListZonesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListZones(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Zone> EdgeNetworkAuth::GetZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetZoneRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetZone(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListNetworksResponse>
EdgeNetworkAuth::ListNetworks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListNetworksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNetworks(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Network> EdgeNetworkAuth::GetNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetNetworkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNetwork(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkAuth::DiagnoseNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DiagnoseNetwork(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncCreateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateNetwork(cq, *std::move(context),
                                         std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncDeleteNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteNetwork(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::cloud::edgenetwork::v1::ListSubnetsResponse>
EdgeNetworkAuth::ListSubnets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListSubnetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSubnets(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Subnet> EdgeNetworkAuth::GetSubnet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetSubnetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSubnet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncCreateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateSubnet(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncUpdateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateSubnet(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncDeleteSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteSubnet(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectsResponse>
EdgeNetworkAuth::ListInterconnects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInterconnects(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkAuth::GetInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInterconnect(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkAuth::DiagnoseInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DiagnoseInterconnect(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectAttachmentsResponse>
EdgeNetworkAuth::ListInterconnectAttachments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInterconnectAttachments(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkAuth::GetInterconnectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInterconnectAttachment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncCreateInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInterconnectAttachment(
            cq, *std::move(context), std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncDeleteInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteInterconnectAttachment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::cloud::edgenetwork::v1::ListRoutersResponse>
EdgeNetworkAuth::ListRouters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListRoutersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRouters(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::Router> EdgeNetworkAuth::GetRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetRouterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRouter(context, options, request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkAuth::DiagnoseRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DiagnoseRouter(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncCreateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRouter(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncUpdateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRouter(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncDeleteRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRouter(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> EdgeNetworkAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google
