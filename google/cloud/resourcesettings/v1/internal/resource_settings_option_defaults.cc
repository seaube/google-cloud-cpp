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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/internal/resource_settings_option_defaults.h"
#include "google/cloud/resourcesettings/v1/resource_settings_connection.h"
#include "google/cloud/resourcesettings/v1/resource_settings_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ResourceSettingsServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_RESOURCE_SETTINGS_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_RESOURCE_SETTINGS_SERVICE_AUTHORITY",
      "resourcesettings.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          resourcesettings_v1::ResourceSettingsServiceRetryPolicyOption>()) {
    options.set<resourcesettings_v1::ResourceSettingsServiceRetryPolicyOption>(
        resourcesettings_v1::ResourceSettingsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          resourcesettings_v1::ResourceSettingsServiceBackoffPolicyOption>()) {
    options
        .set<resourcesettings_v1::ResourceSettingsServiceBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<
          resourcesettings_v1::
              ResourceSettingsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<resourcesettings_v1::
                    ResourceSettingsServiceConnectionIdempotencyPolicyOption>(
        resourcesettings_v1::
            MakeDefaultResourceSettingsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
