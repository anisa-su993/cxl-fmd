/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MEMORY_CHUNKS_H
#define REDFISH_ENUM_MEMORY_CHUNKS_H

#include <stddef.h>

/* MemoryChunks.v1_0_0.AddressRangeType */
enum rf_address_range_type {
	ADDRESS_RANGE_TYPE_INVALID = 0,
	ADDRESS_RANGE_TYPE_VOLATILE = 1,
	ADDRESS_RANGE_TYPE_PMEM = 2,
	ADDRESS_RANGE_TYPE_BLOCK = 3,
};

static inline const char *rf_address_range_type_to_str(enum rf_address_range_type val)
{
	switch (val) {
	case ADDRESS_RANGE_TYPE_INVALID: return "Invalid";
	case ADDRESS_RANGE_TYPE_VOLATILE: return "Volatile";
	case ADDRESS_RANGE_TYPE_PMEM: return "PMEM";
	case ADDRESS_RANGE_TYPE_BLOCK: return "Block";
	default: return NULL;
	}
}

/* MemoryChunks.v1_5_0.MediaLocation */
enum rf_media_location {
	MEDIA_LOCATION_INVALID = 0,
	MEDIA_LOCATION_LOCAL = 1,
	MEDIA_LOCATION_REMOTE = 2,
	MEDIA_LOCATION_MIXED = 3,
};

static inline const char *rf_media_location_to_str(enum rf_media_location val)
{
	switch (val) {
	case MEDIA_LOCATION_INVALID: return "Invalid";
	case MEDIA_LOCATION_LOCAL: return "Local";
	case MEDIA_LOCATION_REMOTE: return "Remote";
	case MEDIA_LOCATION_MIXED: return "Mixed";
	default: return NULL;
	}
}

/* MemoryChunks.v1_5_0.OperationalState */
enum rf_operational_state {
	OPERATIONAL_STATE_INVALID = 0,
	OPERATIONAL_STATE_ONLINE = 1,
	OPERATIONAL_STATE_OFFLINE = 2,
};

static inline const char *rf_operational_state_to_str(enum rf_operational_state val)
{
	switch (val) {
	case OPERATIONAL_STATE_INVALID: return "Invalid";
	case OPERATIONAL_STATE_ONLINE: return "Online";
	case OPERATIONAL_STATE_OFFLINE: return "Offline";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MEMORY_CHUNKS_H */
