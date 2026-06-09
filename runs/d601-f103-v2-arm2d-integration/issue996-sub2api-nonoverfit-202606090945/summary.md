# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue996-sub2api-nonoverfit-202606090945
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-202606090945
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_482d29c88e9d484b87e9b36a7742f6ab
- agentSessionId: ses_b5ab67a2-8512-4675-a3e9-1169e6871ae0
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_482d29c88e9d484b87e9b36a7742f6ab --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_482d29c88e9d484b87e9b36a7742f6ab
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_482d29c88e9d484b87e9b36a7742f6ab
- agentTraceCommandCount: 15
- agentTraceHwpodCommandCount: 12
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 12
- agentStageKinds: spec-validate, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue996-sub2api-nonoverfit-202606090945/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- postAgentCompileJobId: 20260609_174617_bf6d9de8
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_174617_bf6d9de8
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-202606090945` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_arm2d_demo.c projects/01_baseline/User/d601_arm2d_demo.h projects/01_baselin ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace rg -e "arm_2d_rgb16_fill_colour" -e "typedef struct.*arm_2d_tile" -e "arm_2d_tile_t" Middlewares/Arm-2D --context 3 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-20260609 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-202606090945` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_rgb16_fill_colour" -e "typedef struct.*arm_2d_tile" -e "arm_2d_tile_t" projects/01_baseline/Middlewares --context 3 --hwpod-id d60 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_rgb16_fill_colour\(" -e "struct arm_2d_tile_t" -e "typedef.*arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library --conte ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "#define arm_2d_rgb16_fill_colour" -e "struct arm_2d_tile_t" -e "struct arm_2d_region_t" projects/01_baseline/Middlewares/Arm-2D/Library/I ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "phwBuffer" -e "pchBuffer" -e "pBuffer" -e "tRegion" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 3 -- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_init\(" projects/01_baseline/User projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 2 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_init\(" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 3 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLA ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_op_wait_async" -e "arm_2d_op_wait" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 2 --hwpod-id d601-f103-v2 --w ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
