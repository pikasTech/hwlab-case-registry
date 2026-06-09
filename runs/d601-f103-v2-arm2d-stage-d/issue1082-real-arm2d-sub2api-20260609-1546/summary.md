# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1082-real-arm2d-sub2api-20260609-1546
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-sub2api-20260609-1546
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_996c333d4e504563ab1a67723ed3a465
- agentSessionId: ses_19bbebc3-7d78-465c-8aa3-d83b7127b28a
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_996c333d4e504563ab1a67723ed3a465 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_996c333d4e504563ab1a67723ed3a465
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_996c333d4e504563ab1a67723ed3a465
- agentTraceCommandCount: 36
- agentTraceHwpodCommandCount: 19
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 18
- agentStageKinds: spec-validate, inspect, workspace-edit, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-sub2api-20260609-1546/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260610_000356_cadae2d4
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260610_000356_cadae2d4
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-sub2api-20260609-1546` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-sub2api-20260609-1546` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --help --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-sub2api-20260609-154 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": "apply-patch", "app ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command "Get-ChildItem -Recurse -File projects/01_baseline \| Select-Object -ExpandProperty FullName" --hwpod-id d601-f103-v2 -- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 refs/tags/v1.2.4''^{} --hwpod-id d601-f103-v2 --workspace-path "F:'"\Work\HW ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command "Get-Content -Path projects/01_baseline/User/main.c" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command "Get-Content -Path projects/01_baseline/User/d601_lcd.h" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command "Get-Content -Path projects/01_baseline/User/d601_lcd.c" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | -1 | `hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $url="https://github.com/ARM-software/Arm-2D.git"; $root=(Get-Location).Path; $mw=Joi ... clipped ...` | stdout: commandExecution failed: /bin/sh -lc "env -u HWLAB_HWPOD_NODE_OPS_URL hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $url="https://github.com/AR ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command '"'$dst="projects'"\01_baseline\Middlewares\Arm-2D"; if (Test-Path (Join-Path "'$dst ".git")) { Write-Output "gitDirPre ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $url="https://github.com/ARM-software/Arm-2D.git"; $dst="projects'"\01_baseline\Middl ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command 'Write-Output "ROOT"; Get-ChildItem -Path projects/01_baseline/Middlewares/Arm-2D -Name; Write-Output "CORE_C"; Get-Chi ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command 'Write-Output "LIB_SOURCE"; Get-ChildItem -Path projects/01_baseline/Middlewares/Arm-2D/Library/Source -File \| Select-O ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg "arm_2d_cfg\|ARM_2D\|__ARM_2D" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h --context 2 --max-matches 40 --hwpod-id d601-f1 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command 'Get-Content -Path projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d.c -TotalCount 80; Write-Output "PRIVAT ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -Command "$ErrorActionPreference='"'Stop'; "'$url='"'https://github.com/ARM-software/Arm-2D.git'; "'$root=(Get-Location).Path; $ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd powershell -NoProfile -Command 'Get-Process git -ErrorAction SilentlyContinue \| Select-Object Id,ProcessName,StartTime,Path \| Format-Table -AutoSize'  ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
