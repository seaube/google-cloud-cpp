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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_TRACING_STUB_H

#include "google/cloud/storagecontrol/v2/internal/storage_control_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class StorageControlTracingStub : public StorageControlStub {
 public:
  ~StorageControlTracingStub() override = default;

  explicit StorageControlTracingStub(std::shared_ptr<StorageControlStub> child);

  StatusOr<google::storage::control::v2::Folder> CreateFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::CreateFolderRequest const& request)
      override;

  Status DeleteFolder(grpc::ClientContext& context, Options const& options,
                      google::storage::control::v2::DeleteFolderRequest const&
                          request) override;

  StatusOr<google::storage::control::v2::Folder> GetFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::GetFolderRequest const& request) override;

  StatusOr<google::storage::control::v2::ListFoldersResponse> ListFolders(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::ListFoldersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRenameFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::storage::control::v2::RenameFolderRequest const& request)
      override;

  StatusOr<google::storage::control::v2::StorageLayout> GetStorageLayout(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::GetStorageLayoutRequest const& request)
      override;

  StatusOr<google::storage::control::v2::ManagedFolder> CreateManagedFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::CreateManagedFolderRequest const& request)
      override;

  Status DeleteManagedFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::DeleteManagedFolderRequest const& request)
      override;

  StatusOr<google::storage::control::v2::ManagedFolder> GetManagedFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::GetManagedFolderRequest const& request)
      override;

  StatusOr<google::storage::control::v2::ListManagedFoldersResponse>
  ListManagedFolders(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::ListManagedFoldersRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<StorageControlStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<StorageControlStub> MakeStorageControlTracingStub(
    std::shared_ptr<StorageControlStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_TRACING_STUB_H
