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
// source: google/cloud/channel/v1/reports_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_REPORTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_REPORTS_CONNECTION_IMPL_H

#include "google/cloud/channel/v1/cloud_channel_reports_connection.h"
#include "google/cloud/channel/v1/cloud_channel_reports_connection_idempotency_policy.h"
#include "google/cloud/channel/v1/cloud_channel_reports_options.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_retry_traits.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudChannelReportsServiceConnectionImpl
    : public channel_v1::CloudChannelReportsServiceConnection {
 public:
  ~CloudChannelReportsServiceConnectionImpl() override = default;

  CloudChannelReportsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<channel_v1_internal::CloudChannelReportsServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
  RunReportJob(
      google::cloud::channel::v1::RunReportJobRequest const& request) override;

  StreamRange<google::cloud::channel::v1::Row> FetchReportResults(
      google::cloud::channel::v1::FetchReportResultsRequest request) override;

  StreamRange<google::cloud::channel::v1::Report> ListReports(
      google::cloud::channel::v1::ListReportsRequest request) override;

 private:
  std::unique_ptr<channel_v1::CloudChannelReportsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<channel_v1::CloudChannelReportsServiceRetryPolicyOption>()) {
      return options
          .get<channel_v1::CloudChannelReportsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<channel_v1::CloudChannelReportsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<channel_v1::CloudChannelReportsServiceBackoffPolicyOption>()) {
      return options
          .get<channel_v1::CloudChannelReportsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<channel_v1::CloudChannelReportsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      channel_v1::CloudChannelReportsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            channel_v1::
                CloudChannelReportsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<
              channel_v1::
                  CloudChannelReportsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<channel_v1::
                 CloudChannelReportsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<channel_v1::CloudChannelReportsServicePollingPolicyOption>()) {
      return options
          .get<channel_v1::CloudChannelReportsServicePollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<channel_v1::CloudChannelReportsServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<channel_v1_internal::CloudChannelReportsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_REPORTS_CONNECTION_IMPL_H
