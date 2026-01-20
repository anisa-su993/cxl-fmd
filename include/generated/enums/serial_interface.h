/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SERIAL_INTERFACE_H
#define REDFISH_ENUM_SERIAL_INTERFACE_H

#include <stddef.h>

/* SerialInterface.v1_0_0.SignalType */
enum rf_signal_type {
	SIGNAL_TYPE_INVALID = 0,
	SIGNAL_TYPE_RS232 = 1,
	SIGNAL_TYPE_RS485 = 2,
};

static inline const char *rf_signal_type_to_str(enum rf_signal_type val)
{
	switch (val) {
	case SIGNAL_TYPE_INVALID: return "Invalid";
	case SIGNAL_TYPE_RS232: return "Rs232";
	case SIGNAL_TYPE_RS485: return "Rs485";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.BitRate */
enum rf_bit_rate {
	BIT_RATE_INVALID = 0,
	BIT_RATE_BIT_RATE1200 = 1,
	BIT_RATE_BIT_RATE2400 = 2,
	BIT_RATE_BIT_RATE4800 = 3,
	BIT_RATE_BIT_RATE9600 = 4,
	BIT_RATE_BIT_RATE19200 = 5,
	BIT_RATE_BIT_RATE38400 = 6,
	BIT_RATE_BIT_RATE57600 = 7,
	BIT_RATE_BIT_RATE115200 = 8,
	BIT_RATE_BIT_RATE230400 = 9,
};

static inline const char *rf_bit_rate_to_str(enum rf_bit_rate val)
{
	switch (val) {
	case BIT_RATE_INVALID: return "Invalid";
	case BIT_RATE_BIT_RATE1200: return "1200";
	case BIT_RATE_BIT_RATE2400: return "2400";
	case BIT_RATE_BIT_RATE4800: return "4800";
	case BIT_RATE_BIT_RATE9600: return "9600";
	case BIT_RATE_BIT_RATE19200: return "19200";
	case BIT_RATE_BIT_RATE38400: return "38400";
	case BIT_RATE_BIT_RATE57600: return "57600";
	case BIT_RATE_BIT_RATE115200: return "115200";
	case BIT_RATE_BIT_RATE230400: return "230400";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.Parity */
enum rf_parity {
	PARITY_INVALID = 0,
	PARITY_NONE = 1,
	PARITY_EVEN = 2,
	PARITY_ODD = 3,
	PARITY_MARK = 4,
	PARITY_SPACE = 5,
};

static inline const char *rf_parity_to_str(enum rf_parity val)
{
	switch (val) {
	case PARITY_INVALID: return "Invalid";
	case PARITY_NONE: return "None";
	case PARITY_EVEN: return "Even";
	case PARITY_ODD: return "Odd";
	case PARITY_MARK: return "Mark";
	case PARITY_SPACE: return "Space";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.DataBits */
enum rf_data_bits {
	DATA_BITS_INVALID = 0,
	DATA_BITS_DATA_BITS5 = 1,
	DATA_BITS_DATA_BITS6 = 2,
	DATA_BITS_DATA_BITS7 = 3,
	DATA_BITS_DATA_BITS8 = 4,
};

static inline const char *rf_data_bits_to_str(enum rf_data_bits val)
{
	switch (val) {
	case DATA_BITS_INVALID: return "Invalid";
	case DATA_BITS_DATA_BITS5: return "5";
	case DATA_BITS_DATA_BITS6: return "6";
	case DATA_BITS_DATA_BITS7: return "7";
	case DATA_BITS_DATA_BITS8: return "8";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.StopBits */
enum rf_stop_bits {
	STOP_BITS_INVALID = 0,
	STOP_BITS_STOP_BITS1 = 1,
	STOP_BITS_STOP_BITS2 = 2,
};

static inline const char *rf_stop_bits_to_str(enum rf_stop_bits val)
{
	switch (val) {
	case STOP_BITS_INVALID: return "Invalid";
	case STOP_BITS_STOP_BITS1: return "1";
	case STOP_BITS_STOP_BITS2: return "2";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.FlowControl */
enum rf_flow_control {
	FLOW_CONTROL_INVALID = 0,
	FLOW_CONTROL_NONE = 1,
	FLOW_CONTROL_SOFTWARE = 2,
	FLOW_CONTROL_HARDWARE = 3,
};

static inline const char *rf_flow_control_to_str(enum rf_flow_control val)
{
	switch (val) {
	case FLOW_CONTROL_INVALID: return "Invalid";
	case FLOW_CONTROL_NONE: return "None";
	case FLOW_CONTROL_SOFTWARE: return "Software";
	case FLOW_CONTROL_HARDWARE: return "Hardware";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.PinOut */
enum rf_pin_out {
	PIN_OUT_INVALID = 0,
	PIN_OUT_CISCO = 1,
	PIN_OUT_CYCLADES = 2,
	PIN_OUT_DIGI = 3,
	PIN_OUT_MODBUS2_WIRE = 4,
	PIN_OUT_MODBUS4_WIRE = 5,
	PIN_OUT_MODBUS_RS232 = 6,
};

static inline const char *rf_pin_out_to_str(enum rf_pin_out val)
{
	switch (val) {
	case PIN_OUT_INVALID: return "Invalid";
	case PIN_OUT_CISCO: return "Cisco";
	case PIN_OUT_CYCLADES: return "Cyclades";
	case PIN_OUT_DIGI: return "Digi";
	case PIN_OUT_MODBUS2_WIRE: return "Modbus2Wire";
	case PIN_OUT_MODBUS4_WIRE: return "Modbus4Wire";
	case PIN_OUT_MODBUS_RS232: return "ModbusRs232";
	default: return NULL;
	}
}

/* SerialInterface.v1_0_0.ConnectorType */
enum rf_connector_type {
	CONNECTOR_TYPE_INVALID = 0,
	CONNECTOR_TYPE_RJ45 = 1,
	CONNECTOR_TYPE_RJ11 = 2,
	CONNECTOR_TYPE_DB9_FEMALE = 3,
	CONNECTOR_TYPE_DB9_MALE = 4,
	CONNECTOR_TYPE_DB25_FEMALE = 5,
	CONNECTOR_TYPE_DB25_MALE = 6,
	CONNECTOR_TYPE_USB = 7,
	CONNECTOR_TYPE_M_USB = 8,
	CONNECTOR_TYPE_U_USB = 9,
};

static inline const char *rf_connector_type_to_str(enum rf_connector_type val)
{
	switch (val) {
	case CONNECTOR_TYPE_INVALID: return "Invalid";
	case CONNECTOR_TYPE_RJ45: return "RJ45";
	case CONNECTOR_TYPE_RJ11: return "RJ11";
	case CONNECTOR_TYPE_DB9_FEMALE: return "DB9 Female";
	case CONNECTOR_TYPE_DB9_MALE: return "DB9 Male";
	case CONNECTOR_TYPE_DB25_FEMALE: return "DB25 Female";
	case CONNECTOR_TYPE_DB25_MALE: return "DB25 Male";
	case CONNECTOR_TYPE_USB: return "USB";
	case CONNECTOR_TYPE_M_USB: return "mUSB";
	case CONNECTOR_TYPE_U_USB: return "uUSB";
	default: return NULL;
	}
}

/* SerialInterface.v1_3_0.Role */
enum rf_role {
	ROLE_INVALID = 0,
	ROLE_CLIENT = 1,
	ROLE_SERVER = 2,
};

static inline const char *rf_role_to_str(enum rf_role val)
{
	switch (val) {
	case ROLE_INVALID: return "Invalid";
	case ROLE_CLIENT: return "Client";
	case ROLE_SERVER: return "Server";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SERIAL_INTERFACE_H */
