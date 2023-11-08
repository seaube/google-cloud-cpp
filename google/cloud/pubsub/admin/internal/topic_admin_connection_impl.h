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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_INTERNAL_TOPIC_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_INTERNAL_TOPIC_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/pubsub/admin/internal/topic_admin_retry_traits.h"
#include "google/cloud/pubsub/admin/internal/topic_admin_stub.h"
#include "google/cloud/pubsub/admin/topic_admin_connection.h"
#include "google/cloud/pubsub/admin/topic_admin_connection_idempotency_policy.h"
#include "google/cloud/pubsub/admin/topic_admin_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TopicAdminConnectionImpl : public pubsub_admin::TopicAdminConnection {
 public:
  ~TopicAdminConnectionImpl() override = default;

  TopicAdminConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<pubsub_admin_internal::TopicAdminStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::pubsub::v1::Topic> CreateTopic(
      google::pubsub::v1::Topic const& request) override;

  StatusOr<google::pubsub::v1::Topic> UpdateTopic(
      google::pubsub::v1::UpdateTopicRequest const& request) override;

  StatusOr<google::pubsub::v1::Topic> GetTopic(
      google::pubsub::v1::GetTopicRequest const& request) override;

  StreamRange<google::pubsub::v1::Topic> ListTopics(
      google::pubsub::v1::ListTopicsRequest request) override;

  StreamRange<std::string> ListTopicSubscriptions(
      google::pubsub::v1::ListTopicSubscriptionsRequest request) override;

  StreamRange<std::string> ListTopicSnapshots(
      google::pubsub::v1::ListTopicSnapshotsRequest request) override;

  Status DeleteTopic(
      google::pubsub::v1::DeleteTopicRequest const& request) override;

  StatusOr<google::pubsub::v1::DetachSubscriptionResponse> DetachSubscription(
      google::pubsub::v1::DetachSubscriptionRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<pubsub_admin_internal::TopicAdminStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_INTERNAL_TOPIC_ADMIN_CONNECTION_IMPL_H
