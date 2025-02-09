// Copyright 2022 Google LLC
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
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/v1/internal/data_migration_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace datamigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataMigrationServiceTracingStub::DataMigrationServiceTracingStub(
    std::shared_ptr<DataMigrationServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::clouddms::v1::ListMigrationJobsResponse>
DataMigrationServiceTracingStub::ListMigrationJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::ListMigrationJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "ListMigrationJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListMigrationJobs(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceTracingStub::GetMigrationJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GetMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "GetMigrationJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMigrationJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncCreateMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::CreateMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "CreateMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncUpdateMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "UpdateMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncDeleteMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "DeleteMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncStartMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::StartMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "StartMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncStartMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncStopMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::StopMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "StopMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncStopMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncResumeMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "ResumeMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncResumeMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncPromoteMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "PromoteMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPromoteMigrationJob(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncVerifyMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "VerifyMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncVerifyMigrationJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncRestartMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::RestartMigrationJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "RestartMigrationJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRestartMigrationJob(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DataMigrationServiceTracingStub::GenerateSshScript(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GenerateSshScriptRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "GenerateSshScript");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GenerateSshScript(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::TcpProxyScript>
DataMigrationServiceTracingStub::GenerateTcpProxyScript(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GenerateTcpProxyScriptRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "GenerateTcpProxyScript");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateTcpProxyScript(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::ListConnectionProfilesResponse>
DataMigrationServiceTracingStub::ListConnectionProfiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::ListConnectionProfilesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "ListConnectionProfiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListConnectionProfiles(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceTracingStub::GetConnectionProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GetConnectionProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "GetConnectionProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetConnectionProfile(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "CreateConnectionProfile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateConnectionProfile(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "UpdateConnectionProfile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateConnectionProfile(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "DeleteConnectionProfile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteConnectionProfile(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "CreatePrivateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePrivateConnection(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceTracingStub::GetPrivateConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "GetPrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetPrivateConnection(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::ListPrivateConnectionsResponse>
DataMigrationServiceTracingStub::ListPrivateConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::ListPrivateConnectionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "ListPrivateConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListPrivateConnections(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "DeletePrivateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePrivateConnection(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceTracingStub::GetConversionWorkspace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GetConversionWorkspaceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "GetConversionWorkspace");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetConversionWorkspace(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::ListConversionWorkspacesResponse>
DataMigrationServiceTracingStub::ListConversionWorkspaces(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::ListConversionWorkspacesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "ListConversionWorkspaces");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListConversionWorkspaces(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncCreateConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "CreateConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateConversionWorkspace(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncUpdateConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "UpdateConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateConversionWorkspace(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncDeleteConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "DeleteConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteConversionWorkspace(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceTracingStub::CreateMappingRule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::CreateMappingRuleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "CreateMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateMappingRule(context, options, request));
}

Status DataMigrationServiceTracingStub::DeleteMappingRule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::DeleteMappingRuleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "DeleteMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteMappingRule(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::ListMappingRulesResponse>
DataMigrationServiceTracingStub::ListMappingRules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::ListMappingRulesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "ListMappingRules");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListMappingRules(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceTracingStub::GetMappingRule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::GetMappingRuleRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "GetMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMappingRule(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncSeedConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "SeedConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSeedConversionWorkspace(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncImportMappingRules(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::ImportMappingRulesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "ImportMappingRules");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncImportMappingRules(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncConvertConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "ConvertConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncConvertConversionWorkspace(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncCommitConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "CommitConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCommitConversionWorkspace(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncRollbackConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "RollbackConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRollbackConversionWorkspace(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncApplyConversionWorkspace(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "ApplyConversionWorkspace");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncApplyConversionWorkspace(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::clouddms::v1::DescribeDatabaseEntitiesResponse>
DataMigrationServiceTracingStub::DescribeDatabaseEntities(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "DescribeDatabaseEntities");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DescribeDatabaseEntities(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>
DataMigrationServiceTracingStub::SearchBackgroundJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "SearchBackgroundJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SearchBackgroundJobs(context, options, request));
}

StatusOr<
    google::cloud::clouddms::v1::DescribeConversionWorkspaceRevisionsResponse>
DataMigrationServiceTracingStub::DescribeConversionWorkspaceRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::
        DescribeConversionWorkspaceRevisionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.clouddms.v1.DataMigrationService",
                             "DescribeConversionWorkspaceRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DescribeConversionWorkspaceRevisions(context, options, request));
}

StatusOr<google::cloud::clouddms::v1::FetchStaticIpsResponse>
DataMigrationServiceTracingStub::FetchStaticIps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::clouddms::v1::FetchStaticIpsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.clouddms.v1.DataMigrationService", "FetchStaticIps");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FetchStaticIps(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataMigrationServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DataMigrationServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DataMigrationServiceStub> MakeDataMigrationServiceTracingStub(
    std::shared_ptr<DataMigrationServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataMigrationServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1_internal
}  // namespace cloud
}  // namespace google
