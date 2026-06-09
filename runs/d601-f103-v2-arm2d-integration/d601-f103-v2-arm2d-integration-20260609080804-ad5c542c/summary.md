# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260609080804-ad5c542c
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260609080804-ad5c542c
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_2a469615c2a14c468266b44275b34597
- agentSessionId: ses_6653adad-8b7f-4a4d-a7bf-76f8e5048a40
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_2a469615c2a14c468266b44275b34597 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_2a469615c2a14c468266b44275b34597
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_2a469615c2a14c468266b44275b34597
- agentTraceCommandCount: 31
- agentTraceHwpodCommandCount: 21
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 20
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260609080804-ad5c542c/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- postAgentCompileJobId: 20260609_162821_38c44015
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_162821_38c44015
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260609080804-ad5c54 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260609080804-ad5c542c` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_color_rgb565_t" -e "typedef.*rgb565" -e "struct.*rgb565" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h -- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "rgb565_fill_colour" -e "arm_2dp_rgb565_fill_colour" -e "arm_2d_rgb565_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/Includ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "struct arm_2d_tile_t" -e "typedef struct arm_2d_tile_t" -e "tRegion" -e "pchBuffer" projects/01_baseline/Middlewares/Arm-2D/Library/Inclu ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_init" -e "arm_2d_op_wait_async" -e "ARM_2D_OP_WAIT_ASYNC" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h --conte ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "bHasEnforcedColour" -e "tColourInfo" -e "chScheme" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 6 --h ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "ARM_2D_RGB565" -e "rgb565" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h --context 4 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "fill_colour" -e "tile_fill" -e "Fill tile" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h --context 8 --hwpod-id d ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "rgb16_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 6 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\ ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "blocked", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spe ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "Fill colour" -e "Fill Colour" -e "fill colour" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --context 10 --hwpod ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "blocked", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spe ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "ARM_2D_COLOUR" -e "COLOUR_RGB565" -e "RGB565" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 4 --hwpod- ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "blocked", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spe ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/main.c projects/01_baseline/User/ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "typedef.*arm_2d_tile" -e "struct.*arm_2d_tile" -e "arm_2d_tile_t" Middlewares/Arm-2D --context 3 --hwpod-id d601-f103-v2 --workspace-path ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "arm_2d_err_t" -e "arm_fsm_rt_t" -e "arm_2d_region_t" Middlewares/Arm-2D --context 2 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWL ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "arm_2d_fill" -e "arm_2d_op_wait" -e "arm_2d_get_address_and_region_from_tile" Middlewares/Arm-2D --context 3 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d.h" -e "arm_2d_types.h" projects/01_baseline --context 1 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktre ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline/Middlewares/Arm-2D/Library/Include --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "typedef struct arm_2d_tile_t" -e "arm_2d_tile_t" -e "arm_2d_region_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 4 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
