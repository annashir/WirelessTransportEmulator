
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

    Yuma SIL module
    module onf-ethernet-conditional-packages
    revision 2017-04-02
    namespace urn:onf:params:xml:ns:yang:onf-ethernet-conditional-packages
    organization ONF (Open Networking Foundation) Open Transport Working Group - Wireless Transport Project

 */

#include <xmlstring.h>

#include "procdefs.h"
#include "agt.h"
#include "agt_cb.h"
#include "agt_timer.h"
#include "agt_util.h"
#include "dlq.h"
#include "ncx.h"
#include "ncx_feature.h"
#include "ncxmod.h"
#include "ncxtypes.h"
#include "status.h"
#include "u_onf-ethernet-conditional-packages.h"
#include "y_onf-ethernet-conditional-packages.h"

#define MAX_NUM_OF_LIST_KEYS 2048

/* module static variables */
static ncx_module_t *onf_ethernet_conditional_packages_mod;
static obj_template_t *ethernet_pac_obj;
static val_value_t *ethernet_pac_val;

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_init_static_vars
* 
* initialize module static variables
* 
********************************************************************/
static void y_onf_ethernet_conditional_packages_init_static_vars (void)
{
    onf_ethernet_conditional_packages_mod = NULL;
    ethernet_pac_obj = NULL;
    ethernet_pac_val = NULL;

} /* y_onf_ethernet_conditional_packages_init_static_vars */


/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit
* 
* Edit database object callback
* Path: /ethernet-pac/layer-protocol
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
static status_t onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval)
{
    status_t res = NO_ERR;
    val_value_t *errorval = (curval) ? curval : newval;
    val_value_t *lastkey = NULL;
    const xmlChar *k_ethernet_pac_layer_protocol = VAL_STRING(agt_get_key_value(errorval, &lastkey));

    if (LOGDEBUG) {
        log_debug("\nEnter onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit callback for %s phase",
            agt_cbtype_name(cbtyp));
    }

    res = u_onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit(scb, msg, cbtyp, editop, newval, curval,
        k_ethernet_pac_layer_protocol);

    if (res != NO_ERR) {
        agt_record_error(
            scb,
            &msg->mhdr,
            NCX_LAYER_CONTENT,
            res,
            NULL,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval);
    }
    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_capability_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac/ethernet-capability
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_ethernet_capability_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    

    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_capability_mro */


/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit
* 
* Edit database object callback
* Path: /ethernet-pac/ethernet-configuration/vlan-id
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
static status_t onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval)
{
    status_t res = NO_ERR;
    val_value_t *errorval = (curval) ? curval : newval;
    val_value_t *lastkey = NULL;
    const xmlChar *k_ethernet_pac_layer_protocol = VAL_STRING(agt_get_key_value(errorval, &lastkey));

    if (LOGDEBUG) {
        log_debug("\nEnter onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit callback for %s phase",
            agt_cbtype_name(cbtyp));
    }

    res = u_onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit(scb, msg, cbtyp, editop, newval, curval,
        k_ethernet_pac_layer_protocol);

    if (res != NO_ERR) {
        agt_record_error(
            scb,
            &msg->mhdr,
            NCX_LAYER_CONTENT,
            res,
            NULL,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval);
    }
    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit */


/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit
* 
* Edit database object callback
* Path: /ethernet-pac/ethernet-configuration
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
static status_t onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval)
{
    status_t res = NO_ERR;
    val_value_t *errorval = (curval) ? curval : newval;
    val_value_t *lastkey = NULL;
    const xmlChar *k_ethernet_pac_layer_protocol = VAL_STRING(agt_get_key_value(errorval, &lastkey));

    if (LOGDEBUG) {
        log_debug("\nEnter onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit callback for %s phase",
            agt_cbtype_name(cbtyp));
    }

    res = u_onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit(scb, msg, cbtyp, editop, newval, curval,
        k_ethernet_pac_layer_protocol);

    if (res != NO_ERR) {
        agt_record_error(
            scb,
            &msg->mhdr,
            NCX_LAYER_CONTENT,
            res,
            NULL,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval);
    }
    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_status_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac/ethernet-status
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_ethernet_status_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    

    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_status_mro */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_problems_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac/ethernet-current-problems
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_problems_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    

    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_problems_mro */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_performance_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac/ethernet-current-performance
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_performance_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    

    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_performance_mro */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_ethernet_historical_performances_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac/ethernet-historical-performances
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_ethernet_historical_performances_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    

    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_ethernet_historical_performances_mro */

/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_mro
* 
* Make read-only child nodes
* Path: /ethernet-pac
* 
* INPUTS:
*     parentval == the parent struct to use for new child nodes
* 
* RETURNS:
*     error status
********************************************************************/
static status_t
    onf_ethernet_conditional_packages_ethernet_pac_mro (val_value_t *parentval)
{
    status_t res = NO_ERR;
    val_value_t *childval = NULL;
    
    res = agt_add_container(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_capability,
        parentval,
        &childval);
    if (res != NO_ERR) {
        return res;
    }

    res = onf_ethernet_conditional_packages_ethernet_pac_ethernet_capability_mro(childval);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_add_container(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_status,
        parentval,
        &childval);
    if (res != NO_ERR) {
        return res;
    }

    res = onf_ethernet_conditional_packages_ethernet_pac_ethernet_status_mro(childval);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_add_container(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_current_problems,
        parentval,
        &childval);
    if (res != NO_ERR) {
        return res;
    }

    res = onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_problems_mro(childval);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_add_container(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_current_performance,
        parentval,
        &childval);
    if (res != NO_ERR) {
        return res;
    }

    res = onf_ethernet_conditional_packages_ethernet_pac_ethernet_current_performance_mro(childval);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_add_container(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_historical_performances,
        parentval,
        &childval);
    if (res != NO_ERR) {
        return res;
    }

    res = onf_ethernet_conditional_packages_ethernet_pac_ethernet_historical_performances_mro(childval);
    if (res != NO_ERR) {
        return res;
    }


    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_mro */


/********************************************************************
* FUNCTION onf_ethernet_conditional_packages_ethernet_pac_edit
* 
* Edit database object callback
* Path: /ethernet-pac
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
static status_t onf_ethernet_conditional_packages_ethernet_pac_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval)
{
    status_t res = NO_ERR;
    val_value_t *errorval = (curval) ? curval : newval;
    val_value_t *lastkey = NULL;
    const xmlChar *k_ethernet_pac_layer_protocol = VAL_STRING(agt_get_key_value(errorval, &lastkey));

    if (LOGDEBUG) {
        log_debug("\nEnter onf_ethernet_conditional_packages_ethernet_pac_edit callback for %s phase",
            agt_cbtype_name(cbtyp));
    }

    res = u_onf_ethernet_conditional_packages_ethernet_pac_edit(scb, msg, cbtyp, editop, newval, curval,
        k_ethernet_pac_layer_protocol);

    if (res == NO_ERR && cbtyp == AGT_CB_COMMIT) {
        res = agt_check_cache(&ethernet_pac_val, newval, curval, editop);
    }
    
    if (res == NO_ERR && cbtyp == AGT_CB_COMMIT && curval == NULL) {
        res = onf_ethernet_conditional_packages_ethernet_pac_mro(newval);
    }

    if (res != NO_ERR) {
        agt_record_error(
            scb,
            &msg->mhdr,
            NCX_LAYER_CONTENT,
            res,
            NULL,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval,
            (errorval) ? NCX_NT_VAL : NCX_NT_NONE,
            errorval);
    }
    return res;

} /* onf_ethernet_conditional_packages_ethernet_pac_edit */

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_init
* 
* initialize the onf-ethernet-conditional-packages server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
status_t y_onf_ethernet_conditional_packages_init (
    const xmlChar *modname,
    const xmlChar *revision)
{
    status_t res = NO_ERR;
    agt_profile_t *agt_profile = agt_get_profile();

    y_onf_ethernet_conditional_packages_init_static_vars();

    /* change if custom handling done */
    if (xml_strcmp(modname, y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages)) {
        return ERR_NCX_UNKNOWN_MODULE;
    }

    if (revision && xml_strcmp(revision, y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages)) {
        return ERR_NCX_WRONG_VERSION;
    }
    res = ncxmod_load_module(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages,
        &agt_profile->agt_savedevQ,
        &onf_ethernet_conditional_packages_mod);
    if (res != NO_ERR) {
        return res;
    }

    ethernet_pac_obj = ncx_find_object(
        onf_ethernet_conditional_packages_mod,
        y_onf_ethernet_conditional_packages_N_ethernet_pac);
    if (onf_ethernet_conditional_packages_mod == NULL) {
        return SET_ERROR(ERR_NCX_DEF_NOT_FOUND);
    }
    res = agt_cb_register_callback(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac",
        y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages,
        onf_ethernet_conditional_packages_ethernet_pac_edit);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_cb_register_callback(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/layer-protocol",
        y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages,
        onf_ethernet_conditional_packages_ethernet_pac_layer_protocol_edit);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_cb_register_callback(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/ethernet-configuration",
        y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages,
        onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_edit);
    if (res != NO_ERR) {
        return res;
    }

    res = agt_cb_register_callback(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/ethernet-configuration/vlan-id",
        y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages,
        onf_ethernet_conditional_packages_ethernet_pac_ethernet_configuration_vlan_id_edit);
    if (res != NO_ERR) {
        return res;
    }

    res = u_onf_ethernet_conditional_packages_init(modname, revision);
    return res;
} /* y_onf_ethernet_conditional_packages_init */

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
status_t y_onf_ethernet_conditional_packages_init2 (void)
{
    status_t res = NO_ERR;

    ethernet_pac_val = agt_init_cache(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        y_onf_ethernet_conditional_packages_N_ethernet_pac,
        &res);
    if (res != NO_ERR) {
        return res;
    }

    res = u_onf_ethernet_conditional_packages_init2();

    return res;
} /* y_onf_ethernet_conditional_packages_init2 */

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
void y_onf_ethernet_conditional_packages_cleanup (void)
{
    agt_cb_unregister_callbacks(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac");

    agt_cb_unregister_callbacks(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/layer-protocol");

    agt_cb_unregister_callbacks(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/ethernet-configuration");

    agt_cb_unregister_callbacks(
        y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages,
        (const xmlChar *)"/ethernet-pac/ethernet-configuration/vlan-id");

    u_onf_ethernet_conditional_packages_cleanup();

} /* y_onf_ethernet_conditional_packages_cleanup */

/* END y_onf_ethernet_conditional_packages.c */