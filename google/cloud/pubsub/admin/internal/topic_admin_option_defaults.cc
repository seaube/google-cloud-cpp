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

#include "google/cloud/pubsub/admin/internal/topic_admin_option_defaults.h"
#include "google/cloud/pubsub/admin/topic_admin_connection.h"
#include "google/cloud/pubsub/admin/topic_admin_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TopicAdminDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_PUBLISHER_ENDPOINT",
      "PUBSUB_EMULATOR_HOST", "GOOGLE_CLOUD_CPP_PUBLISHER_AUTHORITY",
      "pubsub.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<pubsub_admin::TopicAdminRetryPolicyOption>()) {
    options.set<pubsub_admin::TopicAdminRetryPolicyOption>(
        pubsub_admin::TopicAdminLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<pubsub_admin::TopicAdminBackoffPolicyOption>()) {
    options.set<pubsub_admin::TopicAdminBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<pubsub_admin::TopicAdminConnectionIdempotencyPolicyOption>()) {
    options.set<pubsub_admin::TopicAdminConnectionIdempotencyPolicyOption>(
        pubsub_admin::MakeDefaultTopicAdminConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
