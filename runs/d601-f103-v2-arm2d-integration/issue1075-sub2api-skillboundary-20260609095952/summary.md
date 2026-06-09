# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue1075-sub2api-skillboundary-20260609095952
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-skillboundary-20260609095952
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_766c07d0a4a941ed843ffd961580d5d3
- agentSessionId: ses_0a5c9e98-056c-475e-9f9a-c95d8c89e8c8
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_766c07d0a4a941ed843ffd961580d5d3 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_766c07d0a4a941ed843ffd961580d5d3
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_766c07d0a4a941ed843ffd961580d5d3
- agentTraceCommandCount: 10
- agentTraceHwpodCommandCount: 7
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 7
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1075-sub2api-skillboundary-20260609095952/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- postAgentCompileJobId: 20260609_180159_16daf897
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_180159_16daf897
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-skillboundary-20260609095952` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-skillboundary-20260609095952` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_arm2d_demo.c projects/01_baseline/User/d601_arm2d_demo.h projects/01_baselin ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "arm_2d_rgb16_fill_colour" -e "typedef struct.*arm_2d_tile" -e "tRegion" Middlewares/Arm-2D --context 3 --hwpod-id d601-f103-v2 --workspac ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "d601_lcd_draw_bitmap" -e "d601_lcd_show_string" projects/01_baseline --context 3 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_lcd.c --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-s ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_rgb16_fill_colour" -e "arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D --context 3 --hwpod-id d601-f103-v2 --workspace-path ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
