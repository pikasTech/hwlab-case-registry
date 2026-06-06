# CaseRun Final Response

- caseId: d601-f103-v2-main-marker-download-uart
- runId: issue1020-harness-business-r2-20260606-145000
- traceId: trc_case_d601-f103-v2-main-marker-download-uart_ff121919f7934584b7842be02d0f3667
- present: true

## CaseRun Trace Evidence Summary

**caseId:** `d601-f103-v2-main-marker-download-uart`  
**runId:** `issue1020-harness-business-r2-20260606-145000`

### 1. Workspace Setup
- `.hwlab/hwpod-spec.yaml` — present, validated, points to `node-d601-f103-v2` on Windows host
- subjectWorktreePath: `F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1020-harness-business-r2-20260606-145000`
- Node health: ✅ `platform=win32`, `arch=x64`, `hostname=DESKTOP-1MHOD9I`

### 2. Source Edit (via HWPOD workspace)
Added UART marker line in `projects/01_baseline/User/main.c`:

```c
    printf("\r\n[D601-F103] device-pod LCD bring-up\r\n");
    printf("[D601-F103] CaseRun UART marker issue1020-harness-business-r2-20260606-145000\r\n");  // +added
```

- Used `hwpod workspace write` with stdin CRLF content (apply-patch/replace both failed with 409 due to line-ending normalization mismatch)
- Format string `0x%04X` preserved correctly

### 3. Build (`hwpod build`)
- ✅ Submitted as async Keil build via `keil-cli.py`
- **job_id:** `20260606_225101_9362905e`
- Build mode: async, job queued successfully
- Note: `hwpod job status` subcommand not available in this CLI version — couldn't poll completion

### 4. Download (`hwpod download`)
- Dry-run shows 2 ops: keil-probe-binding + keil-program
- Live run timed out (expected — physical DAP-Link hardware on COM9/3FD750C6, and case is compile-only)

### 5. UART Read (`hwpod uart read`)
- **Blocked** — serial monitor not active on COM9/115200
- Blocker: `hwpod_uart_monitor_not_active`, retryable=true
- Serial monitor last session: 2026-05-30, currently inactive
- Available ports: COM3, COM4 (COM9 not currently listed)

### HWPOD Harness Observations
- `replace` and `apply-patch` both returned 409 conflicts on CRLF files — normalization mismatch between Unix shell and Windows node
- `job status` subcommand is missing from the CLI
- `download` has no timeout/cancellation from the client side — hung indefinitely
- `uart read` correctly reports monitor status and offers the start command as a hint
