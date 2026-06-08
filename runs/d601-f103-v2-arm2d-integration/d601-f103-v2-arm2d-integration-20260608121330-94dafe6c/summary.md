# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608121330-94dafe6c
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608121330-94dafe6c
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_53833209775d4a2ca54d668b91662893
- agentSessionId: ses_ba2bf598-b5b6-4110-84eb-d3255c103460
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_53833209775d4a2ca54d668b91662893 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_53833209775d4a2ca54d668b91662893
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_53833209775d4a2ca54d668b91662893
- agentTraceCommandCount: 54
- agentTraceHwpodCommandCount: 50
- agentTraceHwpodBuildCommandCount: 2
- agentStageCommandCount: 27
- agentStageKinds: build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608121330-94dafe6c/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_201619_3d2a315c
- postAgentCompileJobId: 20260608_201811_cd4a170f
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_201811_cd4a170f
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| build |  | 0 | `bun tools/hwpod-cli.ts build --hwpod-id d601-f103-v2 --workspace-path ""'$WS" --verbose 2>&1 \| head -80` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg ""'^arm_fsm_rt_t arm_2dp_" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h" --context 1 --hwpod-id d6 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "tile_fill" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h" --context 3 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "tile_copy" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h" --context 2 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "arm_2dp_" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h" --context 1 --hwpod-id d601-f103-v2 --wor ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace write --path "projects/01_baseline/User/d601_arm2d_demo.c" --content ""'$(cat /tmp/d601_arm2d_demo.c)" --hwpod-id d601-f103-v2  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| build |  | 1 | `bun tools/hwpod-cli.ts build --hwpod-id d601-f103-v2 --workspace-path ""'$WS" --wait 2>&1` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 1 | `bun tools/hwpod-cli.ts job status "20260608_201619_3d2a315c" --hwpod-id d601-f103-v2 --workspace-path ""'$WS" 2>&1` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace cat "projects/01_baseline/User/main.c" --hwpod-id d601-f103-v2 --workspace-path ""'$WS" 2>&1` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace cat "projects/01_baseline/User/d601_arm2d_demo.c" --hwpod-id d601-f103-v2 --workspace-path ""'$WS" 2>&1` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "struct arm_2d_tile_t" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h" --context 40 --hwpod-id d601 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "arm_2d_rgb16_fill_colour\b" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h" --context 3 --hwpod-id  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "ARM_2D_COLOUR_RGB565" "projects/01_baseline/Middlewares/Arm-2D/Library/include" --context 2 --hwpod-id d601-f103-v2 --works ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "#define implement_ex" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_utils.h" --context 3 --hwpod-id d601- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "#define __implement_ex" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_utils.h" --context 5 --hwpod-id d60 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace write --path "projects/01_baseline/User/d601_arm2d_demo.c" --content ""'$(cat /tmp/d601_arm2d_demo.c)" --hwpod-id d601-f103-v2  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  |  | `bun tools/hwpod-cli.ts workspace cat "projects/01_baseline/User/d601_arm2d_demo.c" --hwpod-id d601-f103-v2 --workspace-path ""'$WS" 2>&1 \| head -80` | stdout: commandExecution inProgress: /bin/sh -lc 'export PATH="/home/agentrun/workspaces/gitbundle-97e107cda08645c2/workspace/tools:$PATH" && WS="F:'"\\Work\\HWLAB-CASE-F103\\.work ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "arm_2d_tile_set_addr" "projects/01_baseline/Middlewares/Arm-2D/Library/include" --context 2 --hwpod-id d601-f103-v2 --works ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace cat "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h" --hwpod-id d601-f103-v2 --workspace-path ""'$WS" 2> ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "pBuffer" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h" --context 3 --hwpod-id d601-f103-v2 --wor ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "pBuffer" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h" --context 3 --hwpod-id d601-f103-v2 --work ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "pchBuffer\\|pBuffer" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h" --context 5 --hwpod-id d601-f1 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "Buffer" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h" --context 5 --hwpod-id d601-f103-v2 --work ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "arm_2d_color_info_t" "projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h" --context 10 --hwpod-id d601- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `bun tools/hwpod-cli.ts workspace rg "ptBuffer\\|pchBuffer\\|pBuffer" "projects/01_baseline/Middlewares/Arm-2D/Library/include" --context 2 --hwpod-id d601-f103-v2 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace list 2>/dev/null \|\| hwpod workspace d601-f103-v2 list 2>&1 \| head -40` | stdout: /bin/sh: hwpod: not found exitCode=0 |
| hwpod-other |  | 0 | `hwpod 2>&1; command -v hwpod-ctl 2>&1; which hwpod 2>&1 \|\| true` | stdout: exitCode=0 |
