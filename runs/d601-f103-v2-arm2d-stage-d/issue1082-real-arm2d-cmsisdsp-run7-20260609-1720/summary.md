# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1082-real-arm2d-cmsisdsp-run7-20260609-1720
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run7-20260609-1720
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_b2a49946da6847e1a35317916d2eb9db
- agentSessionId: ses_95872834-3bd3-4348-b575-a3247c68ba22
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_b2a49946da6847e1a35317916d2eb9db --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_b2a49946da6847e1a35317916d2eb9db
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_b2a49946da6847e1a35317916d2eb9db
- agentTraceCommandCount: 45
- agentTraceHwpodCommandCount: 28
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 27
- agentStageKinds: spec-validate, inspect, workspace-edit, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-cmsisdsp-run7-20260609-1720/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260610_014006_ed553f23
- runnerPostAgentCompileReturnCode: 2
- runnerPostAgentCompileWarningCount: 
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260610_014006_ed553f23
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run7-20260609-1720` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run7-20260609-1720` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --reason "integrate real Arm-2D and CMSIS-DSP with D601 demo" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.wor ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run7-2 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "int main\|main\(" -e "printf" -e "LCD" -e "lcd" projects/01_baseline --context 2 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-C ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 "refs/tags/v1.2.4''^{}" --hwpod-id d601-f103-v2 --workspace-path "F:'"\Work\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_lcd.c --hwpod-id d601-f103-v2 --workspa ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline/Middlewares --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cms ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$root="F:'"\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run7-202606 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_rgb565_fill_colour\(\|arm_2d_rgb565_tile_copy\|arm_2d_op_wait_async\|arm_fsm_rt_cpl" projects/01_baseline/Middlewares/Arm-2D/Library/ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_cfg.h\|__ARM_2D_CFG\|__ARM_2D_HAS_ASYNC\|__ARM_2D_HAS_HELIUM\|__ARM_2D_HAS_CDE" projects/01_baseline/Middlewares/Arm-2D/Library/Includ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "arm_2d_rgb565_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --context 4 --hwpod-id d601-f103-v2 --wo ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "typedef struct arm_2d_tile_t\|arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 8 --hwpod-id ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "ARM_2D_COLOUR_RGB565\|COLOUR_RGB565\|ARM_2D_COLOUR" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context 4 --hw ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "typedef struct arm_2d_color_info_t\|arm_2d_color_info_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --context  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-i ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git ls-remote https://github.com/ARM-software/CMSIS-DSP.git refs/tags/v1.16.2 "refs/tags/v1.16.2''^{}" refs/tags/v1.15.0 "refs/tags/v1.15.0''^{}" --hw ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "$ErrorActionPreference='"'Stop'; "'$root='"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue108 ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | -1 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$ErrorActionPreference="Stop"; $root="F:'"\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082- ... clipped ...` | stdout: commandExecution failed: /bin/sh -lc "hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$ErrorActionPreference="Stop"; $root="F:'"\\Work\\HWLAB-CASE-F103\ ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline/Middlewares --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cms ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command 'Get-ChildItem -Force ""'$env:TEMP'"\hwlab_run7_arm2d_cmsisdsp" -ErrorAction SilentlyContinue \| ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$paths=@("C:'"\Users\liang\AppData\Local\Arm\Packs","C:\Users\liang\.cache","C:\Keil_v5\ARM\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$p="C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2"; Get-ChildItem -Force "'$ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command '"'$ErrorActionPreference="Stop"; $root="F:'"\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "#include <arm_math.h>\|#include \"arm_math.h\"\|arm_math" projects/01_baseline/Middlewares/Arm-2D/Library --context 2 --hwpod-id d601-f103- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
