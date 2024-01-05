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
// source: google/cloud/networkservices/v1/network_services.proto

#include "google/cloud/networkservices/v1/internal/network_services_option_defaults.h"
#include "google/cloud/networkservices/v1/network_services_connection.h"
#include "google/cloud/networkservices/v1/network_services_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NetworkServicesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_NETWORK_SERVICES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NETWORK_SERVICES_AUTHORITY",
      "networkservices.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<networkservices_v1::NetworkServicesRetryPolicyOption>()) {
    options.set<networkservices_v1::NetworkServicesRetryPolicyOption>(
        networkservices_v1::NetworkServicesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<networkservices_v1::NetworkServicesBackoffPolicyOption>()) {
    options.set<networkservices_v1::NetworkServicesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<networkservices_v1::NetworkServicesPollingPolicyOption>()) {
    options.set<networkservices_v1::NetworkServicesPollingPolicyOption>(
        GenericPollingPolicy<
            networkservices_v1::NetworkServicesRetryPolicyOption::Type,
            networkservices_v1::NetworkServicesBackoffPolicyOption::Type>(
            options.get<networkservices_v1::NetworkServicesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<networkservices_v1::
                       NetworkServicesConnectionIdempotencyPolicyOption>()) {
    options.set<
        networkservices_v1::NetworkServicesConnectionIdempotencyPolicyOption>(
        networkservices_v1::
            MakeDefaultNetworkServicesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
