# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1082-real-arm2d-rerun-20260609-1516
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rerun-20260609-1516
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_e1de4587de0d43a3bb2203200f1c605f
- agentSessionId: ses_3647eb07-8c25-4830-a362-4d98bc1a5f30
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_e1de4587de0d43a3bb2203200f1c605f --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_e1de4587de0d43a3bb2203200f1c605f
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_e1de4587de0d43a3bb2203200f1c605f
- agentTraceCommandCount: 25
- agentTraceHwpodCommandCount: 13
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 13
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-rerun-20260609-1516/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260609_233105_6dc78767
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_233105_6dc78767
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rerun-20260609-1516` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rerun-20260609-1516` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --recursive --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rer ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd git ls-remote --tags https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.wo ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -e "int main" -e "d601_lcd" -e "printf" -e "LCD" projects/01_baseline --context 2 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CAS ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd --help` | stdout: { "ok": true, "action": "hwpod-cli.cmd.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod cmd <command> [...argv]" ], "boundary": "cmd. ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  |  | `hwpod cmd cmd /c "git clone --depth 1 --branch v1.2.4 https://github.com/ARM-software/Arm-2D.git projects\01_baseline\Middlewares\Arm-2D" --hwpod-id d601-f103-v ... clipped ...` | stdout: commandExecution inProgress: /bin/sh -lc "hwpod cmd cmd /c \"git clone --depth 1 --branch v1.2.4 https://github.com/ARM-software/Arm-2D.git projects\\01_baseline\\Middlewar ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd cmd /c "if exist projects\01_baseline\Middlewares\Arm-2D rmdir /s /q projects\01_baseline\Middlewares\Arm-2D & git clone --depth 1 --branch v1.2.4 htt ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace ls projects/01_baseline/Middlewares/Arm-2D --recursive --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_lcd.c projects/01_baseline/Projects/MDK ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd cmd /c "echo HELLO_ARM2D && git --version && cd" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-ar ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd cmd /c "if exist projects\01_baseline\Middlewares\Arm-2D (rmdir /s /q projects\01_baseline\Middlewares\Arm-2D) & git clone --depth 1 --branch v1.2.4 h ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
