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
// source: google/cloud/contentwarehouse/v1/document_schema_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_schema_option_defaults.h"
#include "google/cloud/contentwarehouse/v1/document_schema_connection.h"
#include "google/cloud/contentwarehouse/v1/document_schema_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DocumentSchemaServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_DOCUMENT_SCHEMA_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_DOCUMENT_SCHEMA_SERVICE_AUTHORITY",
      "contentwarehouse.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          contentwarehouse_v1::DocumentSchemaServiceRetryPolicyOption>()) {
    options.set<contentwarehouse_v1::DocumentSchemaServiceRetryPolicyOption>(
        contentwarehouse_v1::DocumentSchemaServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          contentwarehouse_v1::DocumentSchemaServiceBackoffPolicyOption>()) {
    options.set<contentwarehouse_v1::DocumentSchemaServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<contentwarehouse_v1::
                    DocumentSchemaServiceConnectionIdempotencyPolicyOption>()) {
    options.set<contentwarehouse_v1::
                    DocumentSchemaServiceConnectionIdempotencyPolicyOption>(
        contentwarehouse_v1::
            MakeDefaultDocumentSchemaServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
