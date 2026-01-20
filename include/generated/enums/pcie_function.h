/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_PCIE_FUNCTION_H
#define REDFISH_ENUM_PCIE_FUNCTION_H

#include <stddef.h>

/* PCIeFunction.v1_0_0.DeviceClass */
enum rf_device_class {
	DEVICE_CLASS_INVALID = 0,
	DEVICE_CLASS_UNCLASSIFIED_DEVICE = 1,
	DEVICE_CLASS_MASS_STORAGE_CONTROLLER = 2,
	DEVICE_CLASS_NETWORK_CONTROLLER = 3,
	DEVICE_CLASS_DISPLAY_CONTROLLER = 4,
	DEVICE_CLASS_MULTIMEDIA_CONTROLLER = 5,
	DEVICE_CLASS_MEMORY_CONTROLLER = 6,
	DEVICE_CLASS_BRIDGE = 7,
	DEVICE_CLASS_COMMUNICATION_CONTROLLER = 8,
	DEVICE_CLASS_GENERIC_SYSTEM_PERIPHERAL = 9,
	DEVICE_CLASS_INPUT_DEVICE_CONTROLLER = 10,
	DEVICE_CLASS_DOCKING_STATION = 11,
	DEVICE_CLASS_PROCESSOR = 12,
	DEVICE_CLASS_SERIAL_BUS_CONTROLLER = 13,
	DEVICE_CLASS_WIRELESS_CONTROLLER = 14,
	DEVICE_CLASS_INTELLIGENT_CONTROLLER = 15,
	DEVICE_CLASS_SATELLITE_COMMUNICATIONS_CONTROLLER = 16,
	DEVICE_CLASS_ENCRYPTION_CONTROLLER = 17,
	DEVICE_CLASS_SIGNAL_PROCESSING_CONTROLLER = 18,
	DEVICE_CLASS_PROCESSING_ACCELERATORS = 19,
	DEVICE_CLASS_NON_ESSENTIAL_INSTRUMENTATION = 20,
	DEVICE_CLASS_COPROCESSOR = 21,
	DEVICE_CLASS_UNASSIGNED_CLASS = 22,
	DEVICE_CLASS_OTHER = 23,
};

static inline const char *rf_device_class_to_str(enum rf_device_class val)
{
	switch (val) {
	case DEVICE_CLASS_INVALID: return "Invalid";
	case DEVICE_CLASS_UNCLASSIFIED_DEVICE: return "UnclassifiedDevice";
	case DEVICE_CLASS_MASS_STORAGE_CONTROLLER: return "MassStorageController";
	case DEVICE_CLASS_NETWORK_CONTROLLER: return "NetworkController";
	case DEVICE_CLASS_DISPLAY_CONTROLLER: return "DisplayController";
	case DEVICE_CLASS_MULTIMEDIA_CONTROLLER: return "MultimediaController";
	case DEVICE_CLASS_MEMORY_CONTROLLER: return "MemoryController";
	case DEVICE_CLASS_BRIDGE: return "Bridge";
	case DEVICE_CLASS_COMMUNICATION_CONTROLLER: return "CommunicationController";
	case DEVICE_CLASS_GENERIC_SYSTEM_PERIPHERAL: return "GenericSystemPeripheral";
	case DEVICE_CLASS_INPUT_DEVICE_CONTROLLER: return "InputDeviceController";
	case DEVICE_CLASS_DOCKING_STATION: return "DockingStation";
	case DEVICE_CLASS_PROCESSOR: return "Processor";
	case DEVICE_CLASS_SERIAL_BUS_CONTROLLER: return "SerialBusController";
	case DEVICE_CLASS_WIRELESS_CONTROLLER: return "WirelessController";
	case DEVICE_CLASS_INTELLIGENT_CONTROLLER: return "IntelligentController";
	case DEVICE_CLASS_SATELLITE_COMMUNICATIONS_CONTROLLER: return "SatelliteCommunicationsController";
	case DEVICE_CLASS_ENCRYPTION_CONTROLLER: return "EncryptionController";
	case DEVICE_CLASS_SIGNAL_PROCESSING_CONTROLLER: return "SignalProcessingController";
	case DEVICE_CLASS_PROCESSING_ACCELERATORS: return "ProcessingAccelerators";
	case DEVICE_CLASS_NON_ESSENTIAL_INSTRUMENTATION: return "NonEssentialInstrumentation";
	case DEVICE_CLASS_COPROCESSOR: return "Coprocessor";
	case DEVICE_CLASS_UNASSIGNED_CLASS: return "UnassignedClass";
	case DEVICE_CLASS_OTHER: return "Other";
	default: return NULL;
	}
}

/* PCIeFunction.v1_0_0.FunctionType */
enum rf_function_type {
	FUNCTION_TYPE_INVALID = 0,
	FUNCTION_TYPE_PHYSICAL = 1,
	FUNCTION_TYPE_VIRTUAL = 2,
};

static inline const char *rf_function_type_to_str(enum rf_function_type val)
{
	switch (val) {
	case FUNCTION_TYPE_INVALID: return "Invalid";
	case FUNCTION_TYPE_PHYSICAL: return "Physical";
	case FUNCTION_TYPE_VIRTUAL: return "Virtual";
	default: return NULL;
	}
}

/* PCIeFunction.v1_5_0.FunctionProtocol */
enum rf_function_protocol {
	FUNCTION_PROTOCOL_INVALID = 0,
	FUNCTION_PROTOCOL_PCIE = 1,
	FUNCTION_PROTOCOL_CXL = 2,
};

static inline const char *rf_function_protocol_to_str(enum rf_function_protocol val)
{
	switch (val) {
	case FUNCTION_PROTOCOL_INVALID: return "Invalid";
	case FUNCTION_PROTOCOL_PCIE: return "PCIe";
	case FUNCTION_PROTOCOL_CXL: return "CXL";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_PCIE_FUNCTION_H */
