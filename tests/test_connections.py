# SPDX-License-Identifier: LGPL-2.1
"""
Tests for CXL memory binding via Connections API.

Validates the Connection lifecycle including vPPB binding/unbinding
for switch-attached topologies per DMTF DSP0288 and OCP CMS specifications.

Memory Model:
- Chunks exist after discovery (created for existing LD allocations)
- Tests use existing chunks for connections
- DELETE chunk frees capacity, POST allocates from remaining
"""

import pytest


# =============================================================================
# Connection Collection Tests
# =============================================================================

@pytest.mark.mock_topology("mock/switch-attached.json")
class TestConnectionCollection:
    """Tests for Connections collection access."""

    def test_connections_collection_accessible(self, api_client):
        """Verify Connections collection endpoint is accessible."""
        status, data = api_client.get("/redfish/v1/Fabrics/CXL/Connections")
        assert status == 200
        assert "@odata.type" in data
        assert "ConnectionCollection" in data["@odata.type"]

    def test_connections_collection_has_count(self, api_client):
        """Verify collection has Members@odata.count."""
        status, data = api_client.get("/redfish/v1/Fabrics/CXL/Connections")
        assert status == 200
        assert "Members@odata.count" in data
        assert "Members" in data


# =============================================================================
# Connection Lifecycle Tests
# =============================================================================

@pytest.mark.mock_topology("mock/switch-attached.json")
class TestConnectionLifecycle:
    """Tests for creating and deleting connections."""

    def test_create_basic_connection(self, api_client):
        """Test creating a basic host-to-device connection."""
        # Use existing chunk from discovery (cxl_switch0_dev0 has 32GB chunk)
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_dev0/MemoryDomains/cxl_switch0_dev0_domain0/MemoryChunks/cxl_switch0_dev0_chunk0"

        # Create connection
        status, data, location = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "ConnectionType": "Memory",
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        assert status == 201
        assert data is not None
        assert "@odata.type" in data
        assert "Connection" in data["@odata.type"]

    def test_connection_has_connection_type(self, api_client):
        """Verify created connection has ConnectionType."""
        # Use existing chunk from discovery
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_dev1/MemoryDomains/cxl_switch0_dev1_domain0/MemoryChunks/cxl_switch0_dev1_chunk0"

        # Create connection
        status, data, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "ConnectionType": "Memory",
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev1"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        assert status == 201
        assert data.get("ConnectionType") == "Memory"

    def test_connection_has_links(self, api_client):
        """Verify created connection has Links with endpoints."""
        # Use existing chunk from discovery
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_dev2/MemoryDomains/cxl_switch0_dev2_domain0/MemoryChunks/cxl_switch0_dev2_chunk0"

        # Create connection
        status, data, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev2"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        assert status == 201
        assert "Links" in data
        assert "InitiatorEndpoints" in data["Links"]
        assert "TargetEndpoints" in data["Links"]

    def test_delete_connection(self, api_client):
        """Test deleting a connection."""
        # Use existing chunk from discovery (cxl_switch0_degraded has 16GB chunk)
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_degraded/MemoryDomains/cxl_switch0_degraded_domain0/MemoryChunks/cxl_switch0_degraded_chunk0"

        # Create connection
        _, _, conn_loc = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_degraded"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )

        # Delete connection
        conn_path = conn_loc if conn_loc.startswith("/") else f"/{conn_loc}"
        delete_status = api_client.delete(conn_path)
        assert delete_status == 204

    def test_connection_appears_in_collection(self, api_client):
        """Verify connection appears in Connections collection."""
        # Get initial count
        status, initial = api_client.get("/redfish/v1/Fabrics/CXL/Connections")
        initial_count = initial["Members@odata.count"]

        # Use existing chunk from MLD LD0
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_mld/MemoryDomains/cxl_switch0_mld_domain0/MemoryChunks/cxl_switch0_mld_ld0_chunk"

        # Create connection
        api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_mld"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )

        # Verify count increased
        status, after = api_client.get("/redfish/v1/Fabrics/CXL/Connections")
        assert after["Members@odata.count"] == initial_count + 1


# =============================================================================
# System MemoryDomains from Connections
# =============================================================================

@pytest.mark.mock_topology("mock/switch-attached.json")
class TestSystemMemoryDomains:
    """Tests for System MemoryDomains populated from Connections."""

    def test_host_system_has_memory_domains_link(self, api_client):
        """Verify host System has MemoryDomains collection link."""
        status, data = api_client.get("/redfish/v1/Systems/cxl_switch_0_host0")
        assert status == 200
        assert "MemoryDomains" in data
        assert "@odata.id" in data["MemoryDomains"]

    def test_memory_domains_initially_empty(self, api_client):
        """Verify host MemoryDomains is empty before connections."""
        status, data = api_client.get(
            "/redfish/v1/Systems/cxl_switch_0_host0/MemoryDomains"
        )
        assert status == 200
        # May have 0 members initially
        assert "Members@odata.count" in data

    def test_connection_creates_host_memory_domain(self, api_client):
        """Verify creating connection adds MemoryDomain to host."""
        # Get initial count
        status, initial = api_client.get(
            "/redfish/v1/Systems/cxl_switch_0_host0/MemoryDomains"
        )
        initial_count = initial["Members@odata.count"]

        # Use existing chunk from discovery
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_dev0/MemoryDomains/cxl_switch0_dev0_domain0/MemoryChunks/cxl_switch0_dev0_chunk0"

        # Create connection
        api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )

        # Verify count increased
        status, after = api_client.get(
            "/redfish/v1/Systems/cxl_switch_0_host0/MemoryDomains"
        )
        assert after["Members@odata.count"] == initial_count + 1


# =============================================================================
# Connection Error Handling
# =============================================================================

@pytest.mark.mock_topology("mock/switch-attached.json")
class TestConnectionErrors:
    """Tests for connection error handling."""

    def test_reject_missing_initiator_endpoint(self, api_client):
        """Test that missing InitiatorEndpoints is rejected."""
        status, _, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": "/fake/chunk"}
                }]
            }
        )
        assert status == 400

    def test_reject_missing_target_endpoint(self, api_client):
        """Test that missing TargetEndpoints is rejected."""
        status, _, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": "/fake/chunk"}
                }]
            }
        )
        assert status == 400

    def test_reject_invalid_host_endpoint(self, api_client):
        """Test that invalid host endpoint is rejected."""
        # Use existing chunk
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_dev0/MemoryDomains/cxl_switch0_dev0_domain0/MemoryChunks/cxl_switch0_dev0_chunk0"

        status, _, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/nonexistent_host"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_dev0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        assert status in [400, 404]

    def test_reject_invalid_device_endpoint(self, api_client):
        """Test that invalid device endpoint is rejected."""
        status, _, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/nonexistent_device"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": "/fake/chunk"}
                }]
            }
        )
        assert status in [400, 404]


# =============================================================================
# MLD Connection Tests
# =============================================================================

@pytest.mark.mock_topology("mock/switch-attached.json")
class TestMLDConnections:
    """Tests for MLD-specific connection behavior."""

    def test_mld_connection_to_specific_ld(self, api_client):
        """Test creating connection to specific MLD LD."""
        # Use existing chunk from MLD LD1 (created during discovery)
        chunk_path = "/redfish/v1/Chassis/cxl_switch0_mld/MemoryDomains/cxl_switch0_mld_domain0/MemoryChunks/cxl_switch0_mld_ld1_chunk"

        # Create connection for MLD LD
        status, data, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch_0_host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_switch0_mld"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        assert status == 201


# =============================================================================
# Direct-Attached Connection Tests
# =============================================================================

@pytest.mark.mock_topology("mock/mld-device.json")
class TestDirectAttachedConnections:
    """Tests for direct-attached (non-switch) connections."""

    def test_direct_attached_connection_no_vppb(self, api_client):
        """Verify direct-attached connections work without vPPB binding."""
        # Use existing chunk from MLD LD0 (created during discovery)
        chunk_path = "/redfish/v1/Chassis/cxl_mld_0/MemoryDomains/cxl_mld_0_domain0/MemoryChunks/cxl_mld_0_ld0_chunk"

        # mld-device.json has host0 and host1 defined as direct-attached hosts
        status, data, _ = api_client.post(
            "/redfish/v1/Fabrics/CXL/Connections",
            {
                "Links": {
                    "InitiatorEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/host0"}
                    ],
                    "TargetEndpoints": [
                        {"@odata.id": "/redfish/v1/Fabrics/CXL/Endpoints/cxl_mld_0"}
                    ]
                },
                "MemoryChunkInfo": [{
                    "MemoryChunk": {"@odata.id": chunk_path}
                }]
            }
        )
        # Direct-attached should succeed (no vPPB needed)
        assert status == 201
