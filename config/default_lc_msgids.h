/************************************************************************
 * NASA Docket No. GSC-18,921-1, and identified as “CFS Limit Checker
 * Application version 2.2.1”
 *
 * Copyright (c) 2021 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *   CFS Limit Checker (LC) Application Message IDs
 */
#ifndef LC_MSGIDS_H
#define LC_MSGIDS_H

/**
 * \defgroup cfslccmdmid CFS Limit Checker Command Message IDs
 * \{
 */

/** \brief Msg ID for cmds to LC                */
#define LC_CMD_MID CFE_PLATFORM_CMD_TOPICID_TO_MID(CFE_MISSION_LC_CMD_TOPICID)
/** \brief Msg ID to request LC housekeeping    */
#define LC_SEND_HK_MID CFE_PLATFORM_CMD_TOPICID_TO_MID(CFE_MISSION_LC_SEND_HK_TOPICID)
/** \brief Msg ID to request actionpoint sample */
#define LC_SAMPLE_AP_MID CFE_PLATFORM_CMD_TOPICID_TO_MID(CFE_MISSION_SAMPLE_AP_TOPICID)

/**\}*/

/**
 * \defgroup cfslctlmmid CFS Limit Checker Telemetry Message IDs
 * \{
 */

/** \brief LC Housekeeping Telemetry */
#define LC_HK_TLM_MID CFE_PLATFORM_TLM_TOPICID_TO_MID(CFE_MISSION_LC_HK_TLM_TOPICID)

/**\}*/

#endif
