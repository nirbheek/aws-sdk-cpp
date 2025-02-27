﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/OpenZFSNfsExport.h>
#include <aws/fsx/model/OpenZFSUserOrGroupQuota.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration of an Amazon FSx for OpenZFS root volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSCreateRootVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API OpenZFSCreateRootVolumeConfiguration
  {
  public:
    OpenZFSCreateRootVolumeConfiguration();
    OpenZFSCreateRootVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    OpenZFSCreateRootVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline const OpenZFSDataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline void SetDataCompressionType(const OpenZFSDataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline void SetDataCompressionType(OpenZFSDataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithDataCompressionType(const OpenZFSDataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the ZStandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithDataCompressionType(OpenZFSDataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline const Aws::Vector<OpenZFSNfsExport>& GetNfsExports() const{ return m_nfsExports; }

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline bool NfsExportsHasBeenSet() const { return m_nfsExportsHasBeenSet; }

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline void SetNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = value; }

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline void SetNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = std::move(value); }

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { SetNfsExports(value); return *this;}

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { SetNfsExports(std::move(value)); return *this;}

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& AddNfsExports(const OpenZFSNfsExport& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(value); return *this; }

    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& AddNfsExports(OpenZFSNfsExport&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(std::move(value)); return *this; }


    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline const Aws::Vector<OpenZFSUserOrGroupQuota>& GetUserAndGroupQuotas() const{ return m_userAndGroupQuotas; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline bool UserAndGroupQuotasHasBeenSet() const { return m_userAndGroupQuotasHasBeenSet; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline void SetUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = value; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline void SetUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = std::move(value); }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { SetUserAndGroupQuotas(value); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { SetUserAndGroupQuotas(std::move(value)); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& AddUserAndGroupQuotas(const OpenZFSUserOrGroupQuota& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(value); return *this; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& AddUserAndGroupQuotas(OpenZFSUserOrGroupQuota&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(std::move(value)); return *this; }


    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool GetCopyTagsToSnapshots() const{ return m_copyTagsToSnapshots; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool CopyTagsToSnapshotsHasBeenSet() const { return m_copyTagsToSnapshotsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline void SetCopyTagsToSnapshots(bool value) { m_copyTagsToSnapshotsHasBeenSet = true; m_copyTagsToSnapshots = value; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithCopyTagsToSnapshots(bool value) { SetCopyTagsToSnapshots(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the volume is read-only. Setting this
     * value to <code>true</code> can be useful after you have completed changes to a
     * volume and no longer want changes to occur. </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. Setting this
     * value to <code>true</code> can be useful after you have completed changes to a
     * volume and no longer want changes to occur. </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. Setting this
     * value to <code>true</code> can be useful after you have completed changes to a
     * volume and no longer want changes to occur. </p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. Setting this
     * value to <code>true</code> can be useful after you have completed changes to a
     * volume and no longer want changes to occur. </p>
     */
    inline OpenZFSCreateRootVolumeConfiguration& WithReadOnly(bool value) { SetReadOnly(value); return *this;}

  private:

    OpenZFSDataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet;

    Aws::Vector<OpenZFSNfsExport> m_nfsExports;
    bool m_nfsExportsHasBeenSet;

    Aws::Vector<OpenZFSUserOrGroupQuota> m_userAndGroupQuotas;
    bool m_userAndGroupQuotasHasBeenSet;

    bool m_copyTagsToSnapshots;
    bool m_copyTagsToSnapshotsHasBeenSet;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
