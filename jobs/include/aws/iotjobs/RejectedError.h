#pragma once

/* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * This file is generated
 */

#include <aws/crt/DateTime.h>
#include <aws/iotjobs/JobExecutionState.h>
#include <aws/iotjobs/RejectedErrorCode.h>

#include <aws/iotjobs/Exports.h>

#include <aws/crt/JsonObject.h>
#include <aws/crt/StlAllocator.h>

namespace Aws
{
namespace Iotjobs
{

    /**
     * Response document containing details about a failed request.
     *
     */
    class AWS_IOTJOBS_API RejectedError final
    {
    public:
        RejectedError() = default;

        RejectedError(const Crt::JsonView& doc);
        RejectedError& operator=(const Crt::JsonView& doc);

        void SerializeToObject(Crt::JsonObject& doc) const;


        /**
         * The date and time the response was generated by AWS IoT.
         *
         */
        Aws::Crt::Optional<Aws::Crt::DateTime> Timestamp;


        /**
         * Indicates the type of error.
         *
         */
        Aws::Crt::Optional<Aws::Iotjobs::RejectedErrorCode> Code;


        /**
         * A text message that provides additional information.
         *
         */
        Aws::Crt::Optional<Aws::Crt::String> Message;


        /**
         * Opaque token that can correlate this response to the original request.
         *
         */
        Aws::Crt::Optional<Aws::Crt::String> ClientToken;


        /**
         * A JobExecutionState object. This field is included only when the code field has the value InvalidStateTransition or VersionMismatch.
         *
         */
        Aws::Crt::Optional<Aws::Iotjobs::JobExecutionState> ExecutionState;



    private:
        static void LoadFromObject(RejectedError& obj, const Crt::JsonView &doc);
    };
}
}

