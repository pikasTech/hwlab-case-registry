# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1077-stage-d-20260609-124742
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-20260609-124742
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_772776e18aeb46aa8bb9a9116f2c515c
- agentSessionId: ses_84d02a11-2694-4841-86dc-32c9e4c25e72
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_772776e18aeb46aa8bb9a9116f2c515c --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_772776e18aeb46aa8bb9a9116f2c515c
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_772776e18aeb46aa8bb9a9116f2c515c
- agentTraceCommandCount: 17
- agentTraceHwpodCommandCount: 7
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 7
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1077-stage-d-20260609-124742/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260609_210417_256ee8ee
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_210417_256ee8ee
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-20260609-124742` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-20260609-124742` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-i ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e 'int main\|main\(' -e 'printf' -e 'LCD\|lcd\|d601_lcd' -e 'USART\|uart\|serial' projects/01_baseline --context 2 --hwpod-id d601-f103-v2 --work ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls -R projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-20260609-124742` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_lcd.c projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_co ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e '<Optim>' -e '<v6Lto>' -e '<GroupName>' -e '<IncludePath>' projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --context 1 --hwpod-id d ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
