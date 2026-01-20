/* SPDX-License-Identifier: LGPL-2.1 */
/*
 * CXL Fabric Manager Daemon - CCI to Redfish Mapping
 *
 * Maps CXL CCI command output values to Redfish schema enum values.
 */

#include "cxl-fmd.h"
#include "generated/enums/resource.h"
#include "generated/enums/cxl_logical_device.h"

/*
 * CXL Health Status bit definitions
 */
#define CXL_HEALTH_MAINTENANCE_NEEDED      (1 << 0)
#define CXL_HEALTH_PERFORMANCE_DEGRADED    (1 << 1)
#define CXL_HEALTH_HW_REPLACEMENT_NEEDED   (1 << 2)

/*
 * CXL Media Status values
 */
#define CXL_MEDIA_NORMAL                   0x00
#define CXL_MEDIA_NOT_READY                0x01
#define CXL_MEDIA_WRITE_PERSISTENCY_LOST   0x02
#define CXL_MEDIA_ALL_DATA_LOST            0x03
#define CXL_MEDIA_WRITE_PERSISTENCY_LOSS_PRIOR 0x04

/*
 * Map CXL health_status to Redfish Health enum
 *
 * CXL health_status is a bitmask:
 *   Bit 0: Maintenance Needed → Warning
 *   Bit 1: Performance Degraded → Warning
 *   Bit 2: Hardware Replacement Needed → Critical
 */
enum rf_health fmd_map_health_status(uint8_t cci_health_status)
{
	if (cci_health_status & CXL_HEALTH_HW_REPLACEMENT_NEEDED)
		return HEALTH_CRITICAL;

	if (cci_health_status & (CXL_HEALTH_MAINTENANCE_NEEDED |
				 CXL_HEALTH_PERFORMANCE_DEGRADED))
		return HEALTH_WARNING;

	return HEALTH_OK;
}

/*
 * Map CXL media_status to Redfish State enum
 *
 * CXL media_status values:
 *   0x00: Normal → Enabled
 *   0x01: Not Ready → Starting
 *   0x02: Write Persistency Lost → Degraded
 *   0x03: All Data Lost → UnavailableOffline
 *   0x04: Write Persistency Loss Event → Degraded
 */
enum rf_state fmd_map_media_status(uint8_t cci_media_status)
{
	switch (cci_media_status) {
	case CXL_MEDIA_NORMAL:
		return STATE_ENABLED;
	case CXL_MEDIA_NOT_READY:
		return STATE_STARTING;
	case CXL_MEDIA_WRITE_PERSISTENCY_LOST:
	case CXL_MEDIA_WRITE_PERSISTENCY_LOSS_PRIOR:
		return STATE_DEGRADED;
	case CXL_MEDIA_ALL_DATA_LOST:
		return STATE_UNAVAILABLE_OFFLINE;
	default:
		return STATE_ENABLED;
	}
}
