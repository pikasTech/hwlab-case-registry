# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608033046-a561f343
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608033046-a561f343
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_8d3660f33cf9419da78b0423ce8db688
- agentSessionId: ses_297d2fa1-05a7-4478-bcd6-f8d8c00be25c
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_8d3660f33cf9419da78b0423ce8db688 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_8d3660f33cf9419da78b0423ce8db688
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_8d3660f33cf9419da78b0423ce8db688
- agentTraceCommandCount: 23
- agentTraceHwpodCommandCount: 15
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 15
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608033046-a561f343/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 1
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", " ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specP ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg arm_2d_rgb16_fill_colour projects/01_baseline/Middlewares/Arm-2D --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace rg arm_2d_rgb16_fill_colour projects/01_baseline/Middlewares/Arm-2D --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg arm_2d_init projects/01_baseline/Middlewares/Arm-2D --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace rg arm_2d_init projects/01_baseline/Middlewares/Arm-2D --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status":  ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200 stdout: { "ok": true, "action": "hwpod-cli.invok ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 5 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace rg "arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 5 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_op_wait_async" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace rg "arm_2d_op_wait_async" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 3 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hw ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef struct.*arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 30 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace rg "typedef struct.*arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 30 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "ac ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200 stdout: { "ok": true, "action": "hwpod-cli. ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2dp_rgb16_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --context 10 --spec .hwlab/hwpod-spec.yaml  ... clipped ...` | hwpod workspace rg "arm_2dp_rgb16_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --context 10 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef struct arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 45 --spec .hwlab/hwpod-spec.y ... clipped ...` | hwpod workspace rg "typedef struct arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 45 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { " ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwl ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specP ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_lcd.h --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_lcd.h --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": " ... clipped ... |
