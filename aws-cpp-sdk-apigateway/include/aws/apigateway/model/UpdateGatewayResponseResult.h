﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GatewayResponseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A gateway response of a given response type and status code, with optional
   * response parameters and mapping templates.</p> <div class="remarks"> For more
   * information about valid gateway response types, see <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/supported-gateway-response-types.html">Gateway
   * Response Types Supported by API Gateway</a> <div class="example"> <h4>Example:
   * Get a Gateway Response of a given response type</h4> <h5>Request</h5> <p>This
   * example shows how to get a gateway response of the
   * <code>MISSING_AUTHENTICATION_TOKEN</code> type.</p> <pre><code>GET
   * /restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN HTTP/1.1
   * Host: beta-apigateway.us-east-1.amazonaws.com Content-Type: application/json
   * X-Amz-Date: 20170503T202516Z Authorization: AWS4-HMAC-SHA256
   * Credential={access-key-id}/20170503/us-east-1/apigateway/aws4_request,
   * SignedHeaders=content-type;host;x-amz-date,
   * Signature=1b52460e3159c1a26cff29093855d50ea141c1c5b937528fecaf60f51129697a
   * Cache-Control: no-cache Postman-Token: 3b2a1ce9-c848-2e26-2e2f-9c2caefbed45
   * </code></pre> <p>The response type is specified as a URL path.</p>
   * <h5>Response</h5> <p>The successful operation returns the <code>200 OK</code>
   * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
   * "curies": { "href":
   * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-gatewayresponse-{rel}.html",
   * "name": "gatewayresponse", "templated": true }, "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" },
   * "gatewayresponse:delete": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" } },
   * "defaultResponse": false, "responseParameters": {
   * "gatewayresponse.header.x-request-path": "method.request.path.petId",
   * "gatewayresponse.header.Access-Control-Allow-Origin": "&apos;a.b.c&apos;",
   * "gatewayresponse.header.x-request-query": "method.request.querystring.q",
   * "gatewayresponse.header.x-request-header": "method.request.header.Accept" },
   * "responseTemplates": { "application/json": "{\n \"message\":
   * $context.error.messageString,\n \"type\": \"$context.error.responseType\",\n
   * \"stage\": \"$context.stage\",\n \"resourcePath\": \"$context.resourcePath\",\n
   * \"stageVariables.a\": \"$stageVariables.a\",\n \"statusCode\":
   * \"&apos;404&apos;\"\n}" }, "responseType": "MISSING_AUTHENTICATION_TOKEN",
   * "statusCode": "404" }</code></pre> <p/> </div> </div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/customize-gateway-responses.html">Customize
   * Gateway Responses</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GatewayResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateGatewayResponseResult
  {
  public:
    UpdateGatewayResponseResult();
    UpdateGatewayResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGatewayResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response type of the associated <a>GatewayResponse</a>.</p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>The response type of the associated <a>GatewayResponse</a>.</p>
     */
    inline void SetResponseType(const GatewayResponseType& value) { m_responseType = value; }

    /**
     * <p>The response type of the associated <a>GatewayResponse</a>.</p>
     */
    inline void SetResponseType(GatewayResponseType&& value) { m_responseType = std::move(value); }

    /**
     * <p>The response type of the associated <a>GatewayResponse</a>.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>The response type of the associated <a>GatewayResponse</a>.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}


    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline UpdateGatewayResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline UpdateGatewayResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP status code for this <a>GatewayResponse</a>.</p>
     */
    inline UpdateGatewayResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters = value; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters = std::move(value); }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseParameters(const char* key, const char* value) { m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplates = value; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplates = std::move(value); }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the <a>GatewayResponse</a> as a string-to-string map of
     * key-value pairs.</p>
     */
    inline UpdateGatewayResponseResult& AddResponseTemplates(const char* key, const char* value) { m_responseTemplates.emplace(key, value); return *this; }


    /**
     * <p>A Boolean flag to indicate whether this <a>GatewayResponse</a> is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline bool GetDefaultResponse() const{ return m_defaultResponse; }

    /**
     * <p>A Boolean flag to indicate whether this <a>GatewayResponse</a> is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline void SetDefaultResponse(bool value) { m_defaultResponse = value; }

    /**
     * <p>A Boolean flag to indicate whether this <a>GatewayResponse</a> is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline UpdateGatewayResponseResult& WithDefaultResponse(bool value) { SetDefaultResponse(value); return *this;}

  private:

    GatewayResponseType m_responseType;

    Aws::String m_statusCode;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;

    bool m_defaultResponse;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
