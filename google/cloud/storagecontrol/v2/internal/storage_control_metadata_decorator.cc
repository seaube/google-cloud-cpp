// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/internal/storage_control_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/storage/control/v2/storage_control.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageControlMetadata::StorageControlMetadata(
    std::shared_ptr<StorageControlStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::storage::control::v2::Folder>
StorageControlMetadata::CreateFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::CreateFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateFolder(context, options, request);
}

Status StorageControlMetadata::DeleteFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::DeleteFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::DeleteFolderRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::DeleteFolderRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteFolder(context, options, request);
}

StatusOr<google::storage::control::v2::Folder>
StorageControlMetadata::GetFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::GetFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::GetFolderRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::GetFolderRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetFolder(context, options, request);
}

StatusOr<google::storage::control::v2::ListFoldersResponse>
StorageControlMetadata::ListFolders(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::ListFoldersRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListFolders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageControlMetadata::AsyncRenameFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::control::v2::RenameFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::RenameFolderRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::RenameFolderRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncRenameFolder(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlMetadata::GetStorageLayout(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::GetStorageLayoutRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::GetStorageLayoutRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::GetStorageLayoutRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetStorageLayout(context, options, request);
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlMetadata::CreateManagedFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::CreateManagedFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateManagedFolder(context, options, request);
}

Status StorageControlMetadata::DeleteManagedFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::DeleteManagedFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::DeleteManagedFolderRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::DeleteManagedFolderRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteManagedFolder(context, options, request);
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlMetadata::GetManagedFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::GetManagedFolderRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::control::v2::GetManagedFolderRequest>{
        "bucket=",
        {
            {[](google::storage::control::v2::GetManagedFolderRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetManagedFolder(context, options, request);
}

StatusOr<google::storage::control::v2::ListManagedFoldersResponse>
StorageControlMetadata::ListManagedFolders(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::ListManagedFoldersRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListManagedFolders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageControlMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> StorageControlMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void StorageControlMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void StorageControlMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
  for (auto const& h : options.get<CustomHeadersOption>()) {
    context.AddMetadata(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google
