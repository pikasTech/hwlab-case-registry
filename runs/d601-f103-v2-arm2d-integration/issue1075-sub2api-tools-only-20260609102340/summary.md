# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue1075-sub2api-tools-only-20260609102340
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- agentSessionId: ses_f41b8c5e-8007-4180-886a-eb0b7ee46773
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- agentTraceCommandCount: 25
- agentTraceHwpodCommandCount: 24
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 24
- agentStageKinds: spec-validate, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1075-sub2api-tools-only-20260609102340/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260609_182839_7d92796e
- postAgentCompileJobId: 20260609_182926_b7f6ed35
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260609_182926_b7f6ed35
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --reason "integrate minimal ARM-2D stripe LCD demo" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\case ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-su ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-su ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-t ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg "arm_2d_rgb16_fill_colour" Middlewares/Arm-2D projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktre ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_tile_t" projects/01_baseline/User Middlewares/Arm-2D/Library --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.workt ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef.*arm_2d_tile_t\|struct.*arm_2d_tile\|arm_2d_tile_t" projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.wor ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_op_wait\|arm_2d_wait\|arm_2d_helper.*wait\|arm_2d_task" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/Mid ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_init" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/User --hwpod-id d601-f103-v2 --workspace-path "F:\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "#define arm_2d_op_wait\|arm_2d_op_wait_async\|arm_2d_task\(" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h -A 18 --hwpod-id ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_op_wait_async" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h -B 8 -A 4 --hwpod-id d601-f103-v2 --workspace-path "F ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260609_182839_7d92796e --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "d601_arm2d_demo\|arm_2d_rgb16_fill_colour\|d601_lcd_draw_bitmap\|d601_lcd_show_string\|static uint16_t s_pfb" projects/01_baseline/User/d601_arm ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef struct arm_2d_tile\|typedef.*arm_2d_tile_t\|struct arm_2d_tile" projects/01_baseline/Middlewares/Arm-2D/Library/Include --hwpod-id d60 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "tRegion\|pchBuffer\|phwBuffer\|tSize\|iWidth\|iHeight\|tLocation\|iX\|iY" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --h ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "struct arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h -A 45 --hwpod-id d601-f103-v2 --workspace-path  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "typedef struct arm_2d_location_t\|typedef struct arm_2d_size_t\|typedef struct arm_2d_region_t" projects/01_baseline/Middlewares/Arm-2D/Librar ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
