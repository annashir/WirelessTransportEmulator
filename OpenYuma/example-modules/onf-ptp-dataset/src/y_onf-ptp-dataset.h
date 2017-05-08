
#ifndef _H_y_ietf_ptp_dataset
#define _H_y_ietf_ptp_dataset
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Yuma SIL header
    module ietf-ptp-dataset
    revision 2017-02-08
    namespace urn:ietf:params:xml:ns:yang:ietf-ptp-dataset
    organization IETF TICTOC Working Group

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_ietf_ptp_dataset_M_ietf_ptp_dataset (const xmlChar *)"onf-ptp-dataset"
#define y_ietf_ptp_dataset_R_ietf_ptp_dataset (const xmlChar *)"2017-05-08"

#define y_ietf_ptp_dataset_N_announce_receipt_timeout (const xmlChar *)"announce-receipt-timeout"
#define y_ietf_ptp_dataset_N_clock_accuracy (const xmlChar *)"clock-accuracy"
#define y_ietf_ptp_dataset_N_clock_class (const xmlChar *)"clock-class"
#define y_ietf_ptp_dataset_N_clock_identity (const xmlChar *)"clock-identity"
#define y_ietf_ptp_dataset_N_clock_quality (const xmlChar *)"clock-quality"
#define y_ietf_ptp_dataset_N_current_ds (const xmlChar *)"current-ds"
#define y_ietf_ptp_dataset_N_current_utc_offset (const xmlChar *)"current-utc-offset"
#define y_ietf_ptp_dataset_N_current_utc_offset_valid (const xmlChar *)"current-utc-offset-valid"
#define y_ietf_ptp_dataset_N_default_ds (const xmlChar *)"default-ds"
#define y_ietf_ptp_dataset_N_delay_mechanism (const xmlChar *)"delay-mechanism"
#define y_ietf_ptp_dataset_N_domain_number (const xmlChar *)"domain-number"
#define y_ietf_ptp_dataset_N_faulty_flag (const xmlChar *)"faulty-flag"
#define y_ietf_ptp_dataset_N_frequency_traceable (const xmlChar *)"frequency-traceable"
#define y_ietf_ptp_dataset_N_grandmaster_clock_quality (const xmlChar *)"grandmaster-clock-quality"
#define y_ietf_ptp_dataset_N_grandmaster_identity (const xmlChar *)"grandmaster-identity"
#define y_ietf_ptp_dataset_N_grandmaster_priority1 (const xmlChar *)"grandmaster-priority1"
#define y_ietf_ptp_dataset_N_grandmaster_priority2 (const xmlChar *)"grandmaster-priority2"
#define y_ietf_ptp_dataset_N_instance_list (const xmlChar *)"instance-list"
#define y_ietf_ptp_dataset_N_instance_number (const xmlChar *)"instance-number"
#define y_ietf_ptp_dataset_N_leap59 (const xmlChar *)"leap59"
#define y_ietf_ptp_dataset_N_leap61 (const xmlChar *)"leap61"
#define y_ietf_ptp_dataset_N_log_announce_interval (const xmlChar *)"log-announce-interval"
#define y_ietf_ptp_dataset_N_log_min_delay_req_interval (const xmlChar *)"log-min-delay-req-interval"
#define y_ietf_ptp_dataset_N_log_min_pdelay_req_interval (const xmlChar *)"log-min-pdelay-req-interval"
#define y_ietf_ptp_dataset_N_log_sync_interval (const xmlChar *)"log-sync-interval"
#define y_ietf_ptp_dataset_N_mean_path_delay (const xmlChar *)"mean-path-delay"
#define y_ietf_ptp_dataset_N_number_ports (const xmlChar *)"number-ports"
#define y_ietf_ptp_dataset_N_observed_parent_clock_phase_change_rate (const xmlChar *)"observed-parent-clock-phase-change-rate"
#define y_ietf_ptp_dataset_N_observed_parent_offset_scaled_log_variance (const xmlChar *)"observed-parent-offset-scaled-log-variance"
#define y_ietf_ptp_dataset_N_offset_from_master (const xmlChar *)"offset-from-master"
#define y_ietf_ptp_dataset_N_offset_scaled_log_variance (const xmlChar *)"offset-scaled-log-variance"
#define y_ietf_ptp_dataset_N_parent_ds (const xmlChar *)"parent-ds"
#define y_ietf_ptp_dataset_N_parent_port_identity (const xmlChar *)"parent-port-identity"
#define y_ietf_ptp_dataset_N_parent_stats (const xmlChar *)"parent-stats"
#define y_ietf_ptp_dataset_N_peer_mean_path_delay (const xmlChar *)"peer-mean-path-delay"
#define y_ietf_ptp_dataset_N_port_ds_list (const xmlChar *)"port-ds-list"
#define y_ietf_ptp_dataset_N_port_identity (const xmlChar *)"port-identity"
#define y_ietf_ptp_dataset_N_port_number (const xmlChar *)"port-number"
#define y_ietf_ptp_dataset_N_port_state (const xmlChar *)"port-state"
#define y_ietf_ptp_dataset_N_primary_domain (const xmlChar *)"primary-domain"
#define y_ietf_ptp_dataset_N_priority1 (const xmlChar *)"priority1"
#define y_ietf_ptp_dataset_N_priority2 (const xmlChar *)"priority2"
#define y_ietf_ptp_dataset_N_ptp_timescale (const xmlChar *)"ptp-timescale"
#define y_ietf_ptp_dataset_N_slave_only (const xmlChar *)"slave-only"
#define y_ietf_ptp_dataset_N_steps_removed (const xmlChar *)"steps-removed"
#define y_ietf_ptp_dataset_N_time_properties_ds (const xmlChar *)"time-properties-ds"
#define y_ietf_ptp_dataset_N_time_source (const xmlChar *)"time-source"
#define y_ietf_ptp_dataset_N_time_traceable (const xmlChar *)"time-traceable"
#define y_ietf_ptp_dataset_N_transparent_clock_default_ds (const xmlChar *)"transparent-clock-default-ds"
#define y_ietf_ptp_dataset_N_transparent_clock_port_ds_list (const xmlChar *)"transparent-clock-port-ds-list"
#define y_ietf_ptp_dataset_N_two_step_flag (const xmlChar *)"two-step-flag"
#define y_ietf_ptp_dataset_N_version_number (const xmlChar *)"version-number"
#define y_onf_ptp_dataset_N_delay_asymmetry (const xmlChar *)"delay-asymmetry"
#define y_onf_ptp_dataset_N_designated_enabled (const xmlChar *)"designated-enabled"
#define y_onf_ptp_dataset_N_local_priority (const xmlChar *)"local-priority"
#define y_onf_ptp_dataset_N_logical_termination_point (const xmlChar *)"logical-termination-point"
#define y_onf_ptp_dataset_N_master_only (const xmlChar *)"master-only"
#define y_onf_ptp_dataset_N_max_steps_removed (const xmlChar *)"max-steps-removed"
#define y_onf_ptp_dataset_N_multicast_mac_address (const xmlChar *)"multicast-mac-address"

#define y_ietf_ptp_dataset_init y_onf_ptp_dataset_init
#define y_ietf_ptp_dataset_init2 y_onf_ptp_dataset_init2
#define y_ietf_ptp_dataset_cleanup y_onf_ptp_dataset_cleanup
/********************************************************************
* FUNCTION y_ietf_ptp_dataset_init
* 
* initialize the ietf-ptp-dataset server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_ietf_ptp_dataset_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_ietf_ptp_dataset_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_ietf_ptp_dataset_init2 (void);

/********************************************************************
* FUNCTION y_ietf_ptp_dataset_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_ietf_ptp_dataset_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif
