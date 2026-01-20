/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_VIRTUAL_PCI2_PCI_BRIDGE_H
#define REDFISH_ENUM_VIRTUAL_PCI2_PCI_BRIDGE_H

#include <stddef.h>

/* VirtualPCI2PCIBridge.v1_0_0.vPPBStatusTypes */
enum rf_v_ppb_status_types {
	V_PPB_STATUS_TYPES_INVALID = 0,
	V_PPB_STATUS_TYPES_UNBOUND = 1,
	V_PPB_STATUS_TYPES_BUSY = 2,
	V_PPB_STATUS_TYPES_BOUND_PHYSICAL_PORT = 3,
	V_PPB_STATUS_TYPES_BOUND_LD = 4,
	V_PPB_STATUS_TYPES_BOUND_PID = 5,
};

static inline const char *rf_v_ppb_status_types_to_str(enum rf_v_ppb_status_types val)
{
	switch (val) {
	case V_PPB_STATUS_TYPES_INVALID: return "Invalid";
	case V_PPB_STATUS_TYPES_UNBOUND: return "Unbound";
	case V_PPB_STATUS_TYPES_BUSY: return "Busy";
	case V_PPB_STATUS_TYPES_BOUND_PHYSICAL_PORT: return "BoundPhysicalPort";
	case V_PPB_STATUS_TYPES_BOUND_LD: return "BoundLD";
	case V_PPB_STATUS_TYPES_BOUND_PID: return "BoundPID";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_VIRTUAL_PCI2_PCI_BRIDGE_H */
