/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_POWER_H
#define REDFISH_ENUM_POWER_H

#include <stddef.h>

/* Power.v1_0_0.PowerLimitException */
enum rf_power_limit_exception {
	POWER_LIMIT_EXCEPTION_INVALID = 0,
	POWER_LIMIT_EXCEPTION_NO_ACTION = 1,
	POWER_LIMIT_EXCEPTION_HARD_POWER_OFF = 2,
	POWER_LIMIT_EXCEPTION_LOG_EVENT_ONLY = 3,
	POWER_LIMIT_EXCEPTION_OEM = 4,
};

static inline const char *rf_power_limit_exception_to_str(enum rf_power_limit_exception val)
{
	switch (val) {
	case POWER_LIMIT_EXCEPTION_INVALID: return "Invalid";
	case POWER_LIMIT_EXCEPTION_NO_ACTION: return "NoAction";
	case POWER_LIMIT_EXCEPTION_HARD_POWER_OFF: return "HardPowerOff";
	case POWER_LIMIT_EXCEPTION_LOG_EVENT_ONLY: return "LogEventOnly";
	case POWER_LIMIT_EXCEPTION_OEM: return "Oem";
	default: return NULL;
	}
}

/* Power.v1_0_0.PowerSupplyType */
enum rf_power_supply_type {
	POWER_SUPPLY_TYPE_INVALID = 0,
	POWER_SUPPLY_TYPE_UNKNOWN = 1,
	POWER_SUPPLY_TYPE_AC = 2,
	POWER_SUPPLY_TYPE_DC = 3,
	POWER_SUPPLY_TYPE_A_COR_DC = 4,
};

static inline const char *rf_power_supply_type_to_str(enum rf_power_supply_type val)
{
	switch (val) {
	case POWER_SUPPLY_TYPE_INVALID: return "Invalid";
	case POWER_SUPPLY_TYPE_UNKNOWN: return "Unknown";
	case POWER_SUPPLY_TYPE_AC: return "AC";
	case POWER_SUPPLY_TYPE_DC: return "DC";
	case POWER_SUPPLY_TYPE_A_COR_DC: return "ACorDC";
	default: return NULL;
	}
}

/* Power.v1_0_0.LineInputVoltageType */
enum rf_line_input_voltage_type {
	LINE_INPUT_VOLTAGE_TYPE_INVALID = 0,
	LINE_INPUT_VOLTAGE_TYPE_UNKNOWN = 1,
	LINE_INPUT_VOLTAGE_TYPE_AC_LOW_LINE = 2,
	LINE_INPUT_VOLTAGE_TYPE_AC_MID_LINE = 3,
	LINE_INPUT_VOLTAGE_TYPE_AC_HIGH_LINE = 4,
	LINE_INPUT_VOLTAGE_TYPE_DC_NEG48_V = 5,
	LINE_INPUT_VOLTAGE_TYPE_DC380_V = 6,
	LINE_INPUT_VOLTAGE_TYPE_AC120_V = 7,
	LINE_INPUT_VOLTAGE_TYPE_AC240_V = 8,
	LINE_INPUT_VOLTAGE_TYPE_AC277_V = 9,
	LINE_INPUT_VOLTAGE_TYPE_A_CAND_DC_WIDE_RANGE = 10,
	LINE_INPUT_VOLTAGE_TYPE_AC_WIDE_RANGE = 11,
	LINE_INPUT_VOLTAGE_TYPE_DC240_V = 12,
};

static inline const char *rf_line_input_voltage_type_to_str(enum rf_line_input_voltage_type val)
{
	switch (val) {
	case LINE_INPUT_VOLTAGE_TYPE_INVALID: return "Invalid";
	case LINE_INPUT_VOLTAGE_TYPE_UNKNOWN: return "Unknown";
	case LINE_INPUT_VOLTAGE_TYPE_AC_LOW_LINE: return "ACLowLine";
	case LINE_INPUT_VOLTAGE_TYPE_AC_MID_LINE: return "ACMidLine";
	case LINE_INPUT_VOLTAGE_TYPE_AC_HIGH_LINE: return "ACHighLine";
	case LINE_INPUT_VOLTAGE_TYPE_DC_NEG48_V: return "DCNeg48V";
	case LINE_INPUT_VOLTAGE_TYPE_DC380_V: return "DC380V";
	case LINE_INPUT_VOLTAGE_TYPE_AC120_V: return "AC120V";
	case LINE_INPUT_VOLTAGE_TYPE_AC240_V: return "AC240V";
	case LINE_INPUT_VOLTAGE_TYPE_AC277_V: return "AC277V";
	case LINE_INPUT_VOLTAGE_TYPE_A_CAND_DC_WIDE_RANGE: return "ACandDCWideRange";
	case LINE_INPUT_VOLTAGE_TYPE_AC_WIDE_RANGE: return "ACWideRange";
	case LINE_INPUT_VOLTAGE_TYPE_DC240_V: return "DC240V";
	default: return NULL;
	}
}

/* Power.v1_1_0.InputType */
enum rf_input_type {
	INPUT_TYPE_INVALID = 0,
	INPUT_TYPE_AC = 1,
	INPUT_TYPE_DC = 2,
};

static inline const char *rf_input_type_to_str(enum rf_input_type val)
{
	switch (val) {
	case INPUT_TYPE_INVALID: return "Invalid";
	case INPUT_TYPE_AC: return "AC";
	case INPUT_TYPE_DC: return "DC";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_POWER_H */
