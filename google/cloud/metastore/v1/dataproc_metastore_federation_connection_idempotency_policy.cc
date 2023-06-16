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
// source: google/cloud/metastore/v1/metastore_federation.proto

#include "google/cloud/metastore/v1/dataproc_metastore_federation_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DataprocMetastoreFederationConnectionIdempotencyPolicy::
    ~DataprocMetastoreFederationConnectionIdempotencyPolicy() = default;

std::unique_ptr<DataprocMetastoreFederationConnectionIdempotencyPolicy>
DataprocMetastoreFederationConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      DataprocMetastoreFederationConnectionIdempotencyPolicy>(*this);
}

Idempotency
DataprocMetastoreFederationConnectionIdempotencyPolicy::ListFederations(
    google::cloud::metastore::v1::ListFederationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataprocMetastoreFederationConnectionIdempotencyPolicy::GetFederation(
    google::cloud::metastore::v1::GetFederationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DataprocMetastoreFederationConnectionIdempotencyPolicy::CreateFederation(
    google::cloud::metastore::v1::CreateFederationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataprocMetastoreFederationConnectionIdempotencyPolicy::UpdateFederation(
    google::cloud::metastore::v1::UpdateFederationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataprocMetastoreFederationConnectionIdempotencyPolicy::DeleteFederation(
    google::cloud::metastore::v1::DeleteFederationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DataprocMetastoreFederationConnectionIdempotencyPolicy>
MakeDefaultDataprocMetastoreFederationConnectionIdempotencyPolicy() {
  return std::make_unique<
      DataprocMetastoreFederationConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google
