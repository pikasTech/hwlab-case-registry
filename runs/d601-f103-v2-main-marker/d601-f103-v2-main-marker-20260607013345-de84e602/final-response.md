# CaseRun Final Response

- caseId: d601-f103-v2-main-marker
- runId: d601-f103-v2-main-marker-20260607013345-de84e602
- traceId: trc_case_d601-f103-v2-main-marker_0f075527f05c42609aed980652c5f566
- present: true

## CaseRun Complete: `d601-f103-v2-main-marker`

**caseId**: `d601-f103-v2-main-marker`  
**runId**: `d601-f103-v2-main-marker-20260607013345-de84e602`

### Diff Summary

One line inserted into `projects/01_baseline/User/main.c` via HWPOD `workspace.insert-after`:

```diff
@@ line 24 (before) @@
 printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");
+    printf("[D601-F103] CaseRun marker stageB\r\n");
```

- **Before SHA256**: `ae38a7a5e3bc6158e7b537104a9e5dbea4bdb90cf3768011b878bd125a908fd8` (800 bytes, 31 lines)
- **After SHA256**: `2aeeca09fe447c82fc8cb4d7806c3d338fec7958c516348ed75e518205aed8dc` (854 bytes, 32 lines)
- No other files modified.

### Build Result

| Field | Value |
|---|---|
| **Job ID** | `20260607_093430_a77b3900` |
| **Status** | `completed` — **success** |
| **Return code** | `0` |
| **Duration** | ~5s (finished at `2026-06-07T09:34:35.659462`) |
| **Target** | `USART` |
| **Warnings** | 26 (pre-existing, no new errors) |
| **Artifacts** | `atk_f103.hex`, `atk_f103.axf` in `projects/01_baseline/Output/` |

### Evidence Notes

- All operations routed through HWPOD node (`node-d601-f103-v2`, Windows host `DESKTOP-1MHOD9I`).
- File edit applied via `hwpod workspace insert-after` to subjectWorktreePath `F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-main-marker-20260607013345-de84e602`.
- No download, runtime smoke, or auto-grading performed per `compile-only` constraint.
- CaseRun will inspect `git diff` under subjectWorktreePath post-turn as separate evidence.
