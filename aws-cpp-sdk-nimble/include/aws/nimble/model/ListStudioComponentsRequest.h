﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AWS_NIMBLESTUDIO_API ListStudioComponentsRequest : public NimbleStudioRequest
  {
  public:
    ListStudioComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStudioComponents"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline ListStudioComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to request the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline ListStudioComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline ListStudioComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results. </p>
     */
    inline ListStudioComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetStates() const{ return m_states; }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline void SetStates(const Aws::Vector<Aws::String>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline void SetStates(Aws::Vector<Aws::String>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline ListStudioComponentsRequest& WithStates(const Aws::Vector<Aws::String>& value) { SetStates(value); return *this;}

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline ListStudioComponentsRequest& WithStates(Aws::Vector<Aws::String>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline ListStudioComponentsRequest& AddStates(const Aws::String& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline ListStudioComponentsRequest& AddStates(Aws::String&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline ListStudioComponentsRequest& AddStates(const char* value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline ListStudioComponentsRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline ListStudioComponentsRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline ListStudioComponentsRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline ListStudioComponentsRequest& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline ListStudioComponentsRequest& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline ListStudioComponentsRequest& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline ListStudioComponentsRequest& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline ListStudioComponentsRequest& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_states;
    bool m_statesHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
