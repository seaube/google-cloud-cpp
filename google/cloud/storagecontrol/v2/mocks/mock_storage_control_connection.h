// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_MOCKS_MOCK_STORAGE_CONTROL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_MOCKS_MOCK_STORAGE_CONTROL_CONNECTION_H

#include "google/cloud/storagecontrol/v2/storage_control_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storagecontrol_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `StorageControlConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `StorageControlClient`. To do so,
 * construct an object of type `StorageControlClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockStorageControlConnection
    : public storagecontrol_v2::StorageControlConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::storage::control::v2::Folder>, CreateFolder,
      (google::storage::control::v2::CreateFolderRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteFolder,
      (google::storage::control::v2::DeleteFolderRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::storage::control::v2::Folder>, GetFolder,
              (google::storage::control::v2::GetFolderRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::storage::control::v2::Folder>), ListFolders,
              (google::storage::control::v2::ListFoldersRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::storage::control::v2::Folder>>, RenameFolder,
      (google::storage::control::v2::RenameFolderRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storage::control::v2::StorageLayout>, GetStorageLayout,
      (google::storage::control::v2::GetStorageLayoutRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storage::control::v2::ManagedFolder>,
      CreateManagedFolder,
      (google::storage::control::v2::CreateManagedFolderRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteManagedFolder,
      (google::storage::control::v2::DeleteManagedFolderRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storage::control::v2::ManagedFolder>, GetManagedFolder,
      (google::storage::control::v2::GetManagedFolderRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::storage::control::v2::ManagedFolder>),
              ListManagedFolders,
              (google::storage::control::v2::ListManagedFoldersRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_MOCKS_MOCK_STORAGE_CONTROL_CONNECTION_H
