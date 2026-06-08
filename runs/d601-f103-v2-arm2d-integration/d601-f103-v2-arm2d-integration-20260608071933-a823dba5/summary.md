# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- agentSessionId: ses_c7e66642-bdd6-4b06-9a85-99041d6ce2ef
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- agentTraceCommandCount: 35
- agentTraceHwpodCommandCount: 26
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 24
- agentStageKinds: spec-validate, inspect, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608071933-a823dba5/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_152738_76fe5f06
- postAgentCompileJobId: 20260608_152837_982edb8f
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_152837_982edb8f
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --help --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": "apply-patch", "usa ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_init\|arm_2d_op_wait_async\|arm_2d_rgb16_fill_colour\|arm_2d_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include --context ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef.*arm_2d_rgb565_t\|arm_2d_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 8 --hwpod-id d601 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/include --context 5 --hwpod-id d601-f103-v2 --workspace-path '"'F: ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_rgb16_fill_colour'"\(" projects/01_baseline --context 4 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\c ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_tile_t\|tRegion\|pchBuffer\|phwBuffer" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 4 --hwpod-id d60 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "rgb565_t\|arm_2d_rgb565_t\|__arm_2d_color_fast_rgb_t\|arm_2d_color" projects/01_baseline/Middlewares/Arm-2D/Library/include --context 5 --hwpod ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "d601_arm2d_demo\|D601_ARM2D\|arm2d_render_stripe\|arm2d_fill_local" projects/01_baseline --context 3 --hwpod-id d601-f103-v2 --workspace-path ' ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "ARM_2D_OP_WAIT_ASYNC'"\(\|arm_2d_op_wait_async\(" projects/01_baseline --context 4 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CA ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_color_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 8 --hwpod-id d601-f103-v2 --workspac ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_region_t\|arm_2d_size_t\|arm_2d_location_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 4 --hwpod- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod-ctl` | stdout: /home/agentrun/workspaces/gitbundle-837a9bd14b0c1406/workspace/tools/hwpod-ctl exitCode=0 |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-in ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260608_152738_76fe5f06 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-2 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "d601_arm2d_demo.h\|d601_arm2d_demo_show'"\(\)\|d601_arm2d_demo_task\(\)" projects/01_baseline/User/main.c --context 2 --hwpod-id d601-f103-v2  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_init\|ARM_2D_OP_WAIT_ASYNC\|arm_2d_rgb16_fill_colour\|d601_lcd_draw_bitmap\|d601_lcd_show_string" projects/01_baseline/User/d601_arm2d_de ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod` | stdout: /home/agentrun/workspaces/gitbundle-837a9bd14b0c1406/workspace/tools/hwpod exitCode=0 |
