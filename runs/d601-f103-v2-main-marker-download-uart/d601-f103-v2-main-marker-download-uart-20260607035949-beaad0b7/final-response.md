# CaseRun Final Response

- caseId: d601-f103-v2-main-marker-download-uart
- runId: d601-f103-v2-main-marker-download-uart-20260607035949-beaad0b7
- traceId: trc_case_d601-f103-v2-main-marker-download-uart_aef6026506384793b4e6e777d735fe5d
- present: true

## CaseRun Evidence Summary — `d601-f103-v2-main-marker-download-uart`

**runId:** `d601-f103-v2-main-marker-download-uart-20260607035949-beaad0b7`

---

### 1. Source Edit — `hwpod workspace insert-after`

Added UART marker after `usart_init(115200)` in `projects/01_baseline/User/main.c`:

```diff
+    printf("[D601-F103] CaseRun UART marker d601-f103-v2-main-marker-download-uart-20260607035949-beaad0b7\r\n");
```

**File changed:** `projects/01_baseline/User/main.c` (800 bytes → 915 bytes, SHA256 `ae38a7a5...` → `741110d4...`)

The edit was performed entirely via HWPOD workspace operations (no direct filesystem access from the Linux runner).

---

### 2. `hwpod-ctl spec validate` — ✅ Passed

All four elements present: `targetDevice`, `workspace`, `debugProbe`, `ioProbe`.

---

### 3. `hwpod inspect` — ✅ Passed

- **Node:** `DESKTOP-1MHOD9I` (win32/x64)
- **Workspace exists:** yes
- **Runtime:** `hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667`

---

### 4. `hwpod build` — ✅ Build completed successfully

| Field | Value |
|-------|-------|
| Job ID | `20260607_120040_d8c38cc8` |
| Exit code | 0 |
| Duration | ~5.5s |
| HEX file | `projects/01_baseline/Output/atk_f103.hex` |
| AXF file | `projects/01_baseline/Output/atk_f103.axf` |
| Warnings | 0 (on final poll — note initial poll had 26, the flash poll reported 0) |

Target `USART` compiled cleanly with the new marker included.

---

### 5. `hwpod download` — ❌ Flash failed

| Field | Value |
|-------|-------|
| Job ID | `20260607_120051_635d3b41` |
| Build step | ✅ Completed (same clean build) |
| Program step | ❌ `Keil UV4 flash failed` (exit code 2) |
| Root cause | **Contents mismatch at flash base** (0x08000000+). The keil `CMSIS_AGDI.dll` flash backend erased and programmed but verification failed — likely a probe connection issue or the device was not properly held in reset during programming. |
| Probe inventory | **No DAP-Link probes visible** to pyOCD on the node despite `95FFF39D3DB47E0D` being bound in the uvoptx. The keil backend was able to reach the probe (it erased and programmed) but verification failed with byte mismatches. |

**Key diagnostics:**
```
Load "..\..\Output\atk_f103.axf"
Erase Done. Programming Done.
Contents mismatch at: 08000000H (Flash=B0H Required=C8H)
Contents mismatch at: 08000001H (Flash=08H Required=5CH)
...
```

**HWPOD insight:** The `keil` program backend can reach the probe through UV4 but pyOCD scan sees zero probes. The `Contents mismatch` on a DAP-Link CMSIS-DAP V4 suggests the flash verification step in UV4 is reading back corrupted data — possible causes: probe SWD clock timing, target power fluctuation, or the older "MicroKeenV4" probe firmware issue.

---

### 6. `hwpod uart read` — ❌ Serial monitor unreachable

| Field | Value |
|-------|-------|
| Error | `Serial monitor server is unreachable: stale_pid_file` |
| Port | COM9 @ 115200 |
| Diagnosis | Port 3003 is free but PID file `server.pid` (pid 53256) from a previous session remains. The serial monitor server process is not running. |
| Suggested fix | Stop the stale server on the node side to clean state. |

---

### Raw Trace Records

| Step | Status | Key Artifacts |
|------|--------|---------------|
| spec validate | ✅ | 4-element HWPOD spec valid |
| inspect | ✅ | node-health + workspace-exists |
| workspace insert-after | ✅ | main.c +1 line, sha256 `ae38a7a5→741110d4` |
| build | ✅ | job `20260607_120040_d8c38cc8`, hex+axf produced |
| download (flash) | ❌ | job `20260607_120051_635d3b41`, build OK, program failed with contents mismatch |
| uart read | ❌ | stale PID file on node, serial monitor not reachable |

**HWPOD harness improvement data collected:** The workspace edit, build, and async job polling paths work correctly. The flash program step has a probe-level issue (contents mismatch at base address with CMSIS-DAP V4) and the serial monitor server has a stale PID lifecycle problem on the node — both are areas for HWPOD node-side service improvement.
