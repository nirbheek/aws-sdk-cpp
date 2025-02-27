﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ExportFileFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Structure for the Dataview destination type parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DataViewDestinationTypeParams">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API DataViewDestinationTypeParams
  {
  public:
    DataViewDestinationTypeParams();
    DataViewDestinationTypeParams(Aws::Utils::Json::JsonView jsonValue);
    DataViewDestinationTypeParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(const Aws::String& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(Aws::String&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(const char* value) { m_destinationTypeHasBeenSet = true; m_destinationType.assign(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const Aws::String& value) { SetDestinationType(value); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(Aws::String&& value) { SetDestinationType(std::move(value)); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const char* value) { SetDestinationType(value); return *this;}


    
    inline const ExportFileFormat& GetS3DestinationExportFileFormat() const{ return m_s3DestinationExportFileFormat; }

    
    inline bool S3DestinationExportFileFormatHasBeenSet() const { return m_s3DestinationExportFileFormatHasBeenSet; }

    
    inline void SetS3DestinationExportFileFormat(const ExportFileFormat& value) { m_s3DestinationExportFileFormatHasBeenSet = true; m_s3DestinationExportFileFormat = value; }

    
    inline void SetS3DestinationExportFileFormat(ExportFileFormat&& value) { m_s3DestinationExportFileFormatHasBeenSet = true; m_s3DestinationExportFileFormat = std::move(value); }

    
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormat(const ExportFileFormat& value) { SetS3DestinationExportFileFormat(value); return *this;}

    
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormat(ExportFileFormat&& value) { SetS3DestinationExportFileFormat(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetS3DestinationExportFileFormatOptions() const{ return m_s3DestinationExportFileFormatOptions; }

    
    inline bool S3DestinationExportFileFormatOptionsHasBeenSet() const { return m_s3DestinationExportFileFormatOptionsHasBeenSet; }

    
    inline void SetS3DestinationExportFileFormatOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions = value; }

    
    inline void SetS3DestinationExportFileFormatOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions = std::move(value); }

    
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormatOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetS3DestinationExportFileFormatOptions(value); return *this;}

    
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormatOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetS3DestinationExportFileFormatOptions(std::move(value)); return *this;}

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const Aws::String& key, const Aws::String& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, value); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, const Aws::String& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), value); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const Aws::String& key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, std::move(value)); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), std::move(value)); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const char* key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, std::move(value)); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, const char* value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), value); return *this; }

    
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const char* key, const char* value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, value); return *this; }

  private:

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet;

    ExportFileFormat m_s3DestinationExportFileFormat;
    bool m_s3DestinationExportFileFormatHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_s3DestinationExportFileFormatOptions;
    bool m_s3DestinationExportFileFormatOptionsHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
