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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/subscription_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SubscriptionAdminTracingStub::SubscriptionAdminTracingStub(
    std::shared_ptr<SubscriptionAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminTracingStub::CreateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::Subscription const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "CreateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSubscription(context, request));
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminTracingStub::GetSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "GetSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSubscription(context, request));
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminTracingStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "UpdateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSubscription(context, request));
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
SubscriptionAdminTracingStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "ListSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSubscriptions(context, request));
}

Status SubscriptionAdminTracingStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "DeleteSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSubscription(context, request));
}

Status SubscriptionAdminTracingStub::ModifyPushConfig(
    grpc::ClientContext& context,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "ModifyPushConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ModifyPushConfig(context, request));
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminTracingStub::GetSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "GetSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSnapshot(context, request));
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
SubscriptionAdminTracingStub::ListSnapshots(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "ListSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSnapshots(context, request));
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminTracingStub::CreateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "CreateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSnapshot(context, request));
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminTracingStub::UpdateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "UpdateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSnapshot(context, request));
}

Status SubscriptionAdminTracingStub::DeleteSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "DeleteSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSnapshot(context, request));
}

StatusOr<google::pubsub::v1::SeekResponse> SubscriptionAdminTracingStub::Seek(
    grpc::ClientContext& context,
    google::pubsub::v1::SeekRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "Seek");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Seek(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SubscriptionAdminStub> MakeSubscriptionAdminTracingStub(
    std::shared_ptr<SubscriptionAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SubscriptionAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
