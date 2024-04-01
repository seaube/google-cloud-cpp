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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_CONNECTION_H

#include "google/cloud/gkebackup/v1/backup_for_gke_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BackupForGKETracingConnection
    : public gkebackup_v1::BackupForGKEConnection {
 public:
  ~BackupForGKETracingConnection() override = default;

  explicit BackupForGKETracingConnection(
      std::shared_ptr<gkebackup_v1::BackupForGKEConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>> CreateBackupPlan(
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request)
      override;

  StreamRange<google::cloud::gkebackup::v1::BackupPlan> ListBackupPlans(
      google::cloud::gkebackup::v1::ListBackupPlansRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::BackupPlan> GetBackupPlan(
      google::cloud::gkebackup::v1::GetBackupPlanRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>> UpdateBackupPlan(
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackupPlan(google::cloud::gkebackup::v1::DeleteBackupPlanRequest const&
                       request) override;

  future<StatusOr<google::cloud::gkebackup::v1::Backup>> CreateBackup(
      google::cloud::gkebackup::v1::CreateBackupRequest const& request)
      override;

  StreamRange<google::cloud::gkebackup::v1::Backup> ListBackups(
      google::cloud::gkebackup::v1::ListBackupsRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::Backup> GetBackup(
      google::cloud::gkebackup::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::cloud::gkebackup::v1::Backup>> UpdateBackup(
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackup(google::cloud::gkebackup::v1::DeleteBackupRequest const& request)
      override;

  StreamRange<google::cloud::gkebackup::v1::VolumeBackup> ListVolumeBackups(
      google::cloud::gkebackup::v1::ListVolumeBackupsRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::VolumeBackup> GetVolumeBackup(
      google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>> CreateRestorePlan(
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request)
      override;

  StreamRange<google::cloud::gkebackup::v1::RestorePlan> ListRestorePlans(
      google::cloud::gkebackup::v1::ListRestorePlansRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::RestorePlan> GetRestorePlan(
      google::cloud::gkebackup::v1::GetRestorePlanRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>> UpdateRestorePlan(
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestorePlan(
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::Restore>> CreateRestore(
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request)
      override;

  StreamRange<google::cloud::gkebackup::v1::Restore> ListRestores(
      google::cloud::gkebackup::v1::ListRestoresRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::Restore> GetRestore(
      google::cloud::gkebackup::v1::GetRestoreRequest const& request) override;

  future<StatusOr<google::cloud::gkebackup::v1::Restore>> UpdateRestore(
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request)
      override;

  future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestore(google::cloud::gkebackup::v1::DeleteRestoreRequest const&
                    request) override;

  StreamRange<google::cloud::gkebackup::v1::VolumeRestore> ListVolumeRestores(
      google::cloud::gkebackup::v1::ListVolumeRestoresRequest request) override;

  StatusOr<google::cloud::gkebackup::v1::VolumeRestore> GetVolumeRestore(
      google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse>
  GetBackupIndexDownloadUrl(
      google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlRequest const&
          request) override;

 private:
  std::shared_ptr<gkebackup_v1::BackupForGKEConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<gkebackup_v1::BackupForGKEConnection>
MakeBackupForGKETracingConnection(
    std::shared_ptr<gkebackup_v1::BackupForGKEConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_TRACING_CONNECTION_H
