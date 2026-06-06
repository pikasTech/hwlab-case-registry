# CaseRun Final Response

- caseId: d601-f103-v2-main-marker-download-uart
- runId: issue1020-case2-r5-20260606-165315
- traceId: trc_case_d601-f103-v2-main-marker-download-uart_7c118da3196b448d9899b0055370cdef
- present: true

## CaseRun Complete: `d601-f103-v2-main-marker-download-uart`

### runId: `issue1020-case2-r5-20260606-165315`

### Diff Summary

**File**: `projects/01_baseline/User/main.c` (in subjectWorktreePath)

Inserted one line after the LCD bring-up printf (line 18):

```c
+    printf("[D601-F103] CaseRun UART marker issue1020-case2-r5-20260606-165315\r\n");
```

All edits were performed through the HWPOD workspace `apply-patch` path (via `hwpod workspace apply-patch`), after `insert-after` and `replace` both returned `anchor_not_found` due to CRLF escape normalization in the node sidecar. A **hwp‑patch‑envelope format** with adjusted leading whitespace (5 spaces → normalized to 4) was required to match.

### Build Result

- **Job**: `20260607_005550_a45e8995`
- **Status**: `completed`, `success: true`, `return_code: 0`
- **Warnings**: 26 (first build), 0 (flash-triggered rebuild)
- **Output**: `projects/01_baseline/Output/atk_f103.hex` + `atk_f103.axf`
- **Route**: Keil UV4 via `keil-cli.py` on the Windows host node

### Download (Flash) Result

- **Job**: `20260607_005604_1bd88fbb`
- **Status**: `completed`, `success: true`, `return_code: 0`
- **Probe**: `MicroKeenV4 CMSIS-DAP` (UID `95FFF39D3DB47E0D`), DAP-Link, explicit binding
- **Log excerpt**: `Erase Done. Programming Done. Verify OK. Application running...`
- **Reset-and-Run**: `on` (confirmed via uvoptx `RunTarget=1`)

### UART Read Result

- **Port**: `COM9` @ 115200 8N1
- Each `uart read` call restarts the serial monitor session, returning only `[session_start]` for the new session.
- The firmware was already booted and had printed startup output before the monitor was attached, so the CaseRun UART marker text was **not captured** in these read calls. The device is running the firmware with the marker; future reads with a persistent session would see it on reboot.

### HWPOD Harness Trace Observations

1. `hwpod workspace insert-after` anchor matching is sensitive to CRLF escape sequences — `\r\n` in C string literals fails substring matching on the node side.
2. `hwpod workspace apply-patch` requires `*** Begin Patch` / `*** End Patch` envelope; unified diff format is not accepted directly.
3. `hwpod build` / `hwpod download` correctly handle async job submission and `hwpod job status` polling worked cleanly.
4. `hwpod uart read` resets the serial monitor session each invocation — capturing boot-time UART output requires the monitor to be already running before device reset.
