# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1077-stage-d-nosteer-20260609-131740
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609-131740
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_3675c19f31614577a18b5da0fa075952
- agentSessionId: ses_da06dba3-0471-43c1-9553-3a148051392c
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_3675c19f31614577a18b5da0fa075952 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_3675c19f31614577a18b5da0fa075952
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_3675c19f31614577a18b5da0fa075952
- agentTraceCommandCount: 17
- agentTraceHwpodCommandCount: 12
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 12
- agentStageKinds: spec-validate, inspect, build, download, uart-read, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1077-stage-d-nosteer-20260609-131740/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 1
- agentBuildJobIds: 20260609_212320_42aa804f, 20260609_212343_b81a7a86
- agentReportedBuildJobId: 20260609_212320_42aa804f
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 
- runnerPostAgentCompileReturnCode: 
- runnerPostAgentCompileWarningCount: 
- buildJobRelationship: agent-build-observed-no-runner-post-agent-job
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609-131740` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609-131740` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609-131740` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| download |  | 0 | `hwpod download --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609-131740` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| uart-read |  | 0 | `hwpod uart read --port uart1 --max-bytes 8192 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-2026 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --recursive --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nostee ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_lcd.c projects/01_baseline/User/d601_co ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-i ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "printf" -e "LCD" -e "d601_lcd" -e "HAL_UART" projects/01_baseline/User projects/01_baseline/Drivers/SYSTEM --context 2 --hwpod-id d601-f1 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/readme.txt projects/01_baseline/Middlewares/readme.txt --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F10 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260609_212320_42aa804f --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260609_212343_b81a7a86 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-nosteer-20260609 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
