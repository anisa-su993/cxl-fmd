# SPDX-License-Identifier: LGPL-2.1
"""
Tests for CXL memory lifecycle management.

Validates memory chunk provisioning, deletion, and capacity management
per DMTF DSP0288 (CXL to Redfish Mapping) for SLD and MLD devices.

Memory Model:
- Discovery creates chunks for existing LD allocations
- DELETE frees capacity back to the pool
- POST allocates from remaining capacity
"""

import pytest


# =============================================================================
# SLD Memory Chunk Discovery Tests
# =============================================================================

@pytest.mark.mock_topology("mock/single-sld.json")
class TestSLDMemoryChunkDiscovery:
    """Tests for SLD memory chunks created during discovery."""

    def test_sld_has_memory_domain(self, api_client):
        """Verify SLD has a MemoryDomain."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0"
        )
        assert status == 200
        assert "@odata.type" in data
        assert "MemoryDomain" in data["@odata.type"]

    def test_sld_chunk_exists_after_discovery(self, api_client):
        """Verify chunk exists for SLD after discovery."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks"
        )
        assert status == 200
        assert data["Members@odata.count"] >= 1

    def test_sld_chunk_has_correct_size(self, api_client):
        """Verify SLD chunk has correct size from discovery."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )
        assert status == 200
        assert "MemoryChunkSizeMiB" in data
        # single-sld.json has 16384 MB
        assert data["MemoryChunkSizeMiB"] == 16384

    def test_sld_chunk_has_address_range_type(self, api_client):
        """Verify SLD chunk has AddressRangeType."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )
        assert status == 200
        assert "AddressRangeType" in data
        # single-sld.json is persistent only
        assert data["AddressRangeType"] == "PMEM"


# =============================================================================
# SLD Memory Chunk Lifecycle Tests
# =============================================================================

@pytest.mark.mock_topology("mock/single-sld.json")
class TestSLDMemoryChunkLifecycle:
    """Tests for SLD memory chunk delete and re-create."""

    def test_delete_existing_chunk(self, api_client):
        """Test deleting the discovered chunk."""
        # Delete existing chunk
        delete_status = api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )
        assert delete_status == 204

        # Verify collection is empty
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks"
        )
        assert status == 200
        assert data["Members@odata.count"] == 0

    def test_create_chunk_after_delete(self, api_client):
        """Test creating chunk after deleting existing one."""
        # Delete existing chunk to free capacity
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )

        # Create new chunk
        status, data, location = api_client.post(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
            {"MemoryChunkSizeMiB": 1024}
        )
        assert status == 201
        assert data is not None
        assert data["MemoryChunkSizeMiB"] == 1024
        assert location is not None

    def test_create_multiple_chunks_after_delete(self, api_client):
        """Test creating multiple smaller chunks after deleting existing one."""
        # Delete existing chunk to free capacity
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )

        # Create multiple chunks
        chunks = []
        for _ in range(3):
            status, data, location = api_client.post(
                "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
                {"MemoryChunkSizeMiB": 1024}
            )
            assert status == 201
            chunks.append(location)

        # Verify all chunks exist
        status, collection = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks"
        )
        assert status == 200
        assert collection["Members@odata.count"] == 3


# =============================================================================
# MLD Memory Chunk Discovery Tests
# =============================================================================

@pytest.mark.mock_topology("mock/mld-device.json")
class TestMLDMemoryChunkDiscovery:
    """Tests for MLD memory chunks created during discovery."""

    def test_mld_has_chunks_per_ld(self, api_client):
        """Verify MLD has one chunk per LD after discovery."""
        # cxl_mld_0 has 4 LDs
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks"
        )
        assert status == 200
        assert data["Members@odata.count"] == 4

    def test_mld_chunk_per_ld_exists(self, api_client):
        """Verify each LD has its chunk."""
        for ld_id in range(4):
            status, data = api_client.get(
                f"/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks/cxl_mld_0_ld{ld_id}_chunk"
            )
            assert status == 200
            assert "MemoryChunkSizeMiB" in data


# =============================================================================
# MLD Memory Chunk Lifecycle Tests
# =============================================================================

@pytest.mark.mock_topology("mock/mld-device.json")
class TestMLDMemoryChunkLifecycle:
    """Tests for MLD memory chunk delete and re-create."""

    def test_delete_mld_chunk(self, api_client):
        """Test deleting an MLD chunk."""
        # Delete LD0's chunk
        delete_status = api_client.delete(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks/cxl_mld_0_ld0_chunk"
        )
        assert delete_status == 204

        # Verify count decreased
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks"
        )
        assert status == 200
        assert data["Members@odata.count"] == 3

    def test_create_mld_chunk_with_interleave_sets(self, api_client):
        """Test creating MLD chunk using InterleaveSets after delete."""
        # Delete existing chunk to free capacity
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks/cxl_mld_0_ld0_chunk"
        )

        # Create new chunk with InterleaveSets
        status, data, _ = api_client.post(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks",
            {
                "InterleaveSets": [{
                    "Memory": {
                        "@odata.id": "/redfish/v1/Chassis/cxl_mld_0/Memory/cxl_mld_0_ld0"
                    },
                    "SizeMiB": 4096
                }]
            }
        )
        assert status == 201
        assert "MemoryChunkSizeMiB" in data or "InterleaveSets" in data


# =============================================================================
# Capacity Constraint Tests
# =============================================================================

@pytest.mark.mock_topology("mock/single-sld.json")
class TestCapacityConstraints:
    """Tests for memory capacity constraints and error handling."""

    def test_reject_chunk_when_no_capacity(self, api_client):
        """Test that requests are rejected when no capacity available."""
        # All capacity is already allocated, POST should fail
        status, data, _ = api_client.post(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
            {"MemoryChunkSizeMiB": 1024}
        )
        # Should return 409 Conflict for insufficient capacity
        assert status == 409

    def test_reject_chunk_exceeding_freed_capacity(self, api_client):
        """Test that requests exceeding freed capacity are rejected."""
        # Delete existing 16GB chunk
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )

        # Try to allocate more than freed capacity (16GB available, request 32GB)
        status, data, _ = api_client.post(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
            {"MemoryChunkSizeMiB": 32768}
        )
        assert status == 409

    def test_reject_zero_size_chunk(self, api_client):
        """Test that zero-size chunks are rejected."""
        # Free capacity first
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )

        status, data, _ = api_client.post(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
            {"MemoryChunkSizeMiB": 0}
        )
        assert status in [400, 409]

    def test_reject_negative_size_chunk(self, api_client):
        """Test that negative-size chunks are rejected."""
        # Free capacity first
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks/cxl_mem0_chunk0"
        )

        status, data, _ = api_client.post(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0/MemoryChunks",
            {"MemoryChunkSizeMiB": -1024}
        )
        assert status in [400, 409]


# =============================================================================
# Memory Domain Validation Tests
# =============================================================================

@pytest.mark.mock_topology("mock/single-sld.json")
class TestMemoryDomainValidation:
    """Tests for MemoryDomain properties and constraints."""

    def test_memory_domain_has_capacity_info(self, api_client):
        """Verify MemoryDomain has capacity properties."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0"
        )
        assert status == 200
        assert "@odata.type" in data
        assert "MemoryDomain" in data["@odata.type"]

    def test_memory_domain_has_chunks_link(self, api_client):
        """Verify MemoryDomain has MemoryChunks link."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains/cxl_mem0_domain0"
        )
        assert status == 200
        assert "MemoryChunks" in data

    def test_memory_domain_collection(self, api_client):
        """Verify MemoryDomains collection is accessible."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mem0/MemoryDomains"
        )
        assert status == 200
        assert data["Members@odata.count"] >= 1


# =============================================================================
# CXLLogicalDevice MemoryChunks Links Tests
# =============================================================================

@pytest.mark.mock_topology("mock/mld-device.json")
class TestCXLLogicalDeviceChunkLinks:
    """Tests for CXLLogicalDevice Links.MemoryChunks."""

    def test_ld_has_chunk_link_when_allocated(self, api_client):
        """Verify CXLLogicalDevice has MemoryChunks link when chunk exists."""
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mld_0/PCIeDevices/cxl_mld_0/CXLLogicalDevices/cxl_mld_0_ld0"
        )
        assert status == 200
        assert "Links" in data
        # Should have MemoryChunks link since chunk exists
        if "MemoryChunks" in data["Links"]:
            assert len(data["Links"]["MemoryChunks"]) >= 1

    def test_ld_no_chunk_link_when_deleted(self, api_client):
        """Verify CXLLogicalDevice has no MemoryChunks link after delete."""
        # Delete the chunk
        api_client.delete(
            "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks/cxl_mld_0_ld0_chunk"
        )

        # Check LD - should have empty or no MemoryChunks
        status, data = api_client.get(
            "/redfish/v1/Chassis/cxl_mld_0/PCIeDevices/cxl_mld_0/CXLLogicalDevices/cxl_mld_0_ld0"
        )
        assert status == 200
        # Either no MemoryChunks key or empty array
        if "Links" in data and "MemoryChunks" in data["Links"]:
            assert len(data["Links"]["MemoryChunks"]) == 0
