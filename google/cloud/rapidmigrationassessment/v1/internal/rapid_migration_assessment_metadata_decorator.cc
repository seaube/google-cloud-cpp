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
// source:
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RapidMigrationAssessmentMetadata::RapidMigrationAssessmentMetadata(
    std::shared_ptr<RapidMigrationAssessmentStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncCreateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCollector(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncCreateAnnotation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAnnotation(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
RapidMigrationAssessmentMetadata::GetAnnotation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAnnotation(context, options, request);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse>
RapidMigrationAssessmentMetadata::ListCollectors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCollectors(context, options, request);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentMetadata::GetCollector(
    grpc::ClientContext& context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCollector(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncUpdateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("collector.name=",
                           internal::UrlEncode(request.collector().name())));
  return child_->AsyncUpdateCollector(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncDeleteCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCollector(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncResumeCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncResumeCollector(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncRegisterCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRegisterCollector(cq, std::move(context),
                                        std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncPauseCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncPauseCollector(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> RapidMigrationAssessmentMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void RapidMigrationAssessmentMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void RapidMigrationAssessmentMetadata::SetMetadata(grpc::ClientContext& context,
                                                   Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google
