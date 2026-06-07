# CaseRun Final Response

- caseId: d601-f103-v2-main-marker-download-uart
- runId: d601-f103-v2-main-marker-download-uart-20260607052350-41954c34
- traceId: trc_case_d601-f103-v2-main-marker-download-uart_882a3508b72e4c81a006c150a9b5a5bb
- present: true

CaseRun complete. Here's the trace summary:

---

## Evidence Report - `d601-f103-v2-main-marker-download-uart-20260607052350-41954c34`

### Source modification
- **File**: `projects/01_baseline/User/main.c` (via HWPOD workspace write, `\x0D\x0A` hex escapes to work around `normalizeContentLineEndings` bug)
- **Marker lines added** (after `usart_init(115200);`):
  ```c
  printf("[D601-F103] CaseRun UART\x0D\x0A");
  printf("  runId: d601-f103-v2-main-marker-download-uart-20260607052350-41954c34\x0D\x0A");
  ```

### HWPOD steps
| Step | Status | Key |
|------|--------|-----|
| `hwpod-ctl spec validate` | ✅ Passed | Spec valid, node `node-d601-f103-v2` |
| `hwpod inspect` | ✅ Passed | Windows PC host reachable, workspace exists |
| `workspace write` (edit) | ✅ Completed | SHA `c761029e...`, 965 bytes, `\x0D\x0A` hex escapes used |
| `hwpod build` | ✅ Completed | Job `20260607_132936_ddc1dbc8`, return code 0, HEX/AXF produced, 26 pre-existing warnings |
| `hwpod download` | ⚠️ Pre-flight only | Checked uvoptx present; no actual flash (expected for compile-only mode) |
| `hwpod uart read` | ❌ Serial server not running | Port COM9 unreachable — serial-monitor not started on Windows host |

### Key observations for HWPOD harness improvement
1. **`normalizeContentLineEndings` destroys `\r\n` in C strings** — the node-lib at `tools/src/hwpod-node-lib.ts` line 706 normalizes all `\r\n` content, making it impossible to write C code containing literal `\r\n` escape sequences via `workspace write`. Workaround: use `\x0D\x0A` hex escapes.
2. **`--content-base64` works correctly** once the encoding issue is addressed.
3. **Serial monitor is a prerequisite for UART reads** — needs to be pre-started on the Windows node before running UART capture.
