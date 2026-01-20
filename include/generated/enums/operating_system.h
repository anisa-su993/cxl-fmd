/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_OPERATING_SYSTEM_H
#define REDFISH_ENUM_OPERATING_SYSTEM_H

#include <stddef.h>

/* OperatingSystem.v1_0_0.OperatingSystemTypes */
enum rf_operating_system_types {
	OPERATING_SYSTEM_TYPES_INVALID = 0,
	OPERATING_SYSTEM_TYPES_LINUX = 1,
	OPERATING_SYSTEM_TYPES_WINDOWS = 2,
	OPERATING_SYSTEM_TYPES_SOLARIS = 3,
	OPERATING_SYSTEM_TYPES_HPUX = 4,
	OPERATING_SYSTEM_TYPES_AIX = 5,
	OPERATING_SYSTEM_TYPES_BSD = 6,
	OPERATING_SYSTEM_TYPES_MAC_OS = 7,
	OPERATING_SYSTEM_TYPES_IB_MI = 8,
	OPERATING_SYSTEM_TYPES_HYPERVISOR = 9,
};

static inline const char *rf_operating_system_types_to_str(enum rf_operating_system_types val)
{
	switch (val) {
	case OPERATING_SYSTEM_TYPES_INVALID: return "Invalid";
	case OPERATING_SYSTEM_TYPES_LINUX: return "Linux";
	case OPERATING_SYSTEM_TYPES_WINDOWS: return "Windows";
	case OPERATING_SYSTEM_TYPES_SOLARIS: return "Solaris";
	case OPERATING_SYSTEM_TYPES_HPUX: return "HPUX";
	case OPERATING_SYSTEM_TYPES_AIX: return "AIX";
	case OPERATING_SYSTEM_TYPES_BSD: return "BSD";
	case OPERATING_SYSTEM_TYPES_MAC_OS: return "macOS";
	case OPERATING_SYSTEM_TYPES_IB_MI: return "IBMi";
	case OPERATING_SYSTEM_TYPES_HYPERVISOR: return "Hypervisor";
	default: return NULL;
	}
}

/* OperatingSystem.v1_0_0.VirtualMachineEngineTypes */
enum rf_virtual_machine_engine_types {
	VIRTUAL_MACHINE_ENGINE_TYPES_INVALID = 0,
	VIRTUAL_MACHINE_ENGINE_TYPES_V_MWARE_ESX = 1,
	VIRTUAL_MACHINE_ENGINE_TYPES_HYPER_V = 2,
	VIRTUAL_MACHINE_ENGINE_TYPES_XEN = 3,
	VIRTUAL_MACHINE_ENGINE_TYPES_KVM = 4,
	VIRTUAL_MACHINE_ENGINE_TYPES_QEMU = 5,
	VIRTUAL_MACHINE_ENGINE_TYPES_VIRTUAL_BOX = 6,
	VIRTUAL_MACHINE_ENGINE_TYPES_POWER_VM = 7,
};

static inline const char *rf_virtual_machine_engine_types_to_str(enum rf_virtual_machine_engine_types val)
{
	switch (val) {
	case VIRTUAL_MACHINE_ENGINE_TYPES_INVALID: return "Invalid";
	case VIRTUAL_MACHINE_ENGINE_TYPES_V_MWARE_ESX: return "VMwareESX";
	case VIRTUAL_MACHINE_ENGINE_TYPES_HYPER_V: return "HyperV";
	case VIRTUAL_MACHINE_ENGINE_TYPES_XEN: return "Xen";
	case VIRTUAL_MACHINE_ENGINE_TYPES_KVM: return "KVM";
	case VIRTUAL_MACHINE_ENGINE_TYPES_QEMU: return "QEMU";
	case VIRTUAL_MACHINE_ENGINE_TYPES_VIRTUAL_BOX: return "VirtualBox";
	case VIRTUAL_MACHINE_ENGINE_TYPES_POWER_VM: return "PowerVM";
	default: return NULL;
	}
}

/* OperatingSystem.v1_0_0.VirtualMachineImageTypes */
enum rf_virtual_machine_image_types {
	VIRTUAL_MACHINE_IMAGE_TYPES_INVALID = 0,
	VIRTUAL_MACHINE_IMAGE_TYPES_RAW = 1,
	VIRTUAL_MACHINE_IMAGE_TYPES_OVF = 2,
	VIRTUAL_MACHINE_IMAGE_TYPES_OVA = 3,
	VIRTUAL_MACHINE_IMAGE_TYPES_VHD = 4,
	VIRTUAL_MACHINE_IMAGE_TYPES_VMDK = 5,
	VIRTUAL_MACHINE_IMAGE_TYPES_VDI = 6,
	VIRTUAL_MACHINE_IMAGE_TYPES_QCOW = 7,
	VIRTUAL_MACHINE_IMAGE_TYPES_QCOW2 = 8,
};

static inline const char *rf_virtual_machine_image_types_to_str(enum rf_virtual_machine_image_types val)
{
	switch (val) {
	case VIRTUAL_MACHINE_IMAGE_TYPES_INVALID: return "Invalid";
	case VIRTUAL_MACHINE_IMAGE_TYPES_RAW: return "Raw";
	case VIRTUAL_MACHINE_IMAGE_TYPES_OVF: return "OVF";
	case VIRTUAL_MACHINE_IMAGE_TYPES_OVA: return "OVA";
	case VIRTUAL_MACHINE_IMAGE_TYPES_VHD: return "VHD";
	case VIRTUAL_MACHINE_IMAGE_TYPES_VMDK: return "VMDK";
	case VIRTUAL_MACHINE_IMAGE_TYPES_VDI: return "VDI";
	case VIRTUAL_MACHINE_IMAGE_TYPES_QCOW: return "QCOW";
	case VIRTUAL_MACHINE_IMAGE_TYPES_QCOW2: return "QCOW2";
	default: return NULL;
	}
}

/* OperatingSystem.v1_0_0.ContainerEngineTypes */
enum rf_container_engine_types {
	CONTAINER_ENGINE_TYPES_INVALID = 0,
	CONTAINER_ENGINE_TYPES_DOCKER = 1,
	CONTAINER_ENGINE_TYPES_CONTAINERD = 2,
	CONTAINER_ENGINE_TYPES_CRIO = 3,
};

static inline const char *rf_container_engine_types_to_str(enum rf_container_engine_types val)
{
	switch (val) {
	case CONTAINER_ENGINE_TYPES_INVALID: return "Invalid";
	case CONTAINER_ENGINE_TYPES_DOCKER: return "Docker";
	case CONTAINER_ENGINE_TYPES_CONTAINERD: return "containerd";
	case CONTAINER_ENGINE_TYPES_CRIO: return "CRIO";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_OPERATING_SYSTEM_H */
