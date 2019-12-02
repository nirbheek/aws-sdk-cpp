﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/Finding.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{
  /**
   * <p>The resposne to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFindingResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API GetFindingResult
  {
  public:
    GetFindingResult();
    GetFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline const Finding& GetFinding() const{ return m_finding; }

    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline void SetFinding(const Finding& value) { m_finding = value; }

    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline void SetFinding(Finding&& value) { m_finding = std::move(value); }

    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline GetFindingResult& WithFinding(const Finding& value) { SetFinding(value); return *this;}

    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline GetFindingResult& WithFinding(Finding&& value) { SetFinding(std::move(value)); return *this;}

  private:

    Finding m_finding;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
