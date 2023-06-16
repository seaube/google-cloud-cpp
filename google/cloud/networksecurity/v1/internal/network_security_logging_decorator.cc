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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networksecurity/v1/network_security.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityLogging::NetworkSecurityLogging(
    std::shared_ptr<NetworkSecurityStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
NetworkSecurityLogging::ListAuthorizationPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networksecurity::v1::
                 ListAuthorizationPoliciesRequest const& request) {
        return child_->ListAuthorizationPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityLogging::GetAuthorizationPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networksecurity::v1::
                 GetAuthorizationPolicyRequest const& request) {
        return child_->GetAuthorizationPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 CreateAuthorizationPolicyRequest const& request) {
        return child_->AsyncCreateAuthorizationPolicy(cq, std::move(context),
                                                      request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 UpdateAuthorizationPolicyRequest const& request) {
        return child_->AsyncUpdateAuthorizationPolicy(cq, std::move(context),
                                                      request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 DeleteAuthorizationPolicyRequest const& request) {
        return child_->AsyncDeleteAuthorizationPolicy(cq, std::move(context),
                                                      request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
NetworkSecurityLogging::ListServerTlsPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networksecurity::v1::
                 ListServerTlsPoliciesRequest const& request) {
        return child_->ListServerTlsPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityLogging::GetServerTlsPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
              request) { return child_->GetServerTlsPolicy(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 CreateServerTlsPolicyRequest const& request) {
        return child_->AsyncCreateServerTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 UpdateServerTlsPolicyRequest const& request) {
        return child_->AsyncUpdateServerTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 DeleteServerTlsPolicyRequest const& request) {
        return child_->AsyncDeleteServerTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
NetworkSecurityLogging::ListClientTlsPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networksecurity::v1::
                 ListClientTlsPoliciesRequest const& request) {
        return child_->ListClientTlsPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityLogging::GetClientTlsPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
              request) { return child_->GetClientTlsPolicy(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 CreateClientTlsPolicyRequest const& request) {
        return child_->AsyncCreateClientTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 UpdateClientTlsPolicyRequest const& request) {
        return child_->AsyncUpdateClientTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::networksecurity::v1::
                 DeleteClientTlsPolicyRequest const& request) {
        return child_->AsyncDeleteClientTlsPolicy(cq, std::move(context),
                                                  request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> NetworkSecurityLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
