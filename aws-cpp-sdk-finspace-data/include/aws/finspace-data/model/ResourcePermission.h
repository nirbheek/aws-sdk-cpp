﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Resource permission for a Dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ResourcePermission">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API ResourcePermission
  {
  public:
    ResourcePermission();
    ResourcePermission(Aws::Utils::Json::JsonView jsonValue);
    ResourcePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Permission for a resource.</p>
     */
    inline const Aws::String& GetPermission() const{ return m_permission; }

    /**
     * <p>Permission for a resource.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>Permission for a resource.</p>
     */
    inline void SetPermission(const Aws::String& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>Permission for a resource.</p>
     */
    inline void SetPermission(Aws::String&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>Permission for a resource.</p>
     */
    inline void SetPermission(const char* value) { m_permissionHasBeenSet = true; m_permission.assign(value); }

    /**
     * <p>Permission for a resource.</p>
     */
    inline ResourcePermission& WithPermission(const Aws::String& value) { SetPermission(value); return *this;}

    /**
     * <p>Permission for a resource.</p>
     */
    inline ResourcePermission& WithPermission(Aws::String&& value) { SetPermission(std::move(value)); return *this;}

    /**
     * <p>Permission for a resource.</p>
     */
    inline ResourcePermission& WithPermission(const char* value) { SetPermission(value); return *this;}

  private:

    Aws::String m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
