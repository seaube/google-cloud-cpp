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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TopicAdminConnectionIdempotencyPolicy {
 public:
  virtual ~TopicAdminConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TopicAdminConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateTopic(
      google::pubsub::v1::Topic const& request);

  virtual google::cloud::Idempotency UpdateTopic(
      google::pubsub::v1::UpdateTopicRequest const& request);

  virtual google::cloud::Idempotency GetTopic(
      google::pubsub::v1::GetTopicRequest const& request);

  virtual google::cloud::Idempotency ListTopics(
      google::pubsub::v1::ListTopicsRequest request);

  virtual google::cloud::Idempotency ListTopicSubscriptions(
      google::pubsub::v1::ListTopicSubscriptionsRequest request);

  virtual google::cloud::Idempotency ListTopicSnapshots(
      google::pubsub::v1::ListTopicSnapshotsRequest request);

  virtual google::cloud::Idempotency DeleteTopic(
      google::pubsub::v1::DeleteTopicRequest const& request);

  virtual google::cloud::Idempotency DetachSubscription(
      google::pubsub::v1::DetachSubscriptionRequest const& request);
};

std::unique_ptr<TopicAdminConnectionIdempotencyPolicy>
MakeDefaultTopicAdminConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
