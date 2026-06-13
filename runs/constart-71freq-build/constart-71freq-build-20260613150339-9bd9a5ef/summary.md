# HWPOD CaseRun constart-71freq-build

- runId: constart-71freq-build-20260613150339-9bd9a5ef
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\ConStart
- subjectCommitId: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
- subjectWorktreePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef
- agentTraceId: trc_case_constart-71freq-build_17bf45bec2aa4a7cb1aa1215b5ae6551
- agentSessionId: ses_56334b94-6efc-4c8f-a468-5e58dff6bcde
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_constart-71freq-build_17bf45bec2aa4a7cb1aa1215b5ae6551 --render web
- resultCommand: hwlab-cli client agent result trc_case_constart-71freq-build_17bf45bec2aa4a7cb1aa1215b5ae6551
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_constart-71freq-build_17bf45bec2aa4a7cb1aa1215b5ae6551
- agentTerminalStatus: completed
- agentCommandStatus: completed
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: 
- agentToolCallExitCodeCounts: 
- agentTraceCommandCount: 10
- agentTraceHwpodCommandCount: 10
- agentTraceHwpodBuildCommandCount: 1
- agentStageSource: agent-trace-commands
- agentStageCommandCount: 10
- agentStageKinds: spec-validate, inspect, build, hwpod-other, job-status
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/constart-71freq-build-20260613150339-9bd9a5ef/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260613_230716_19ee11bf
- agentReportedBuildJobId: 20260613_230716_19ee11bf
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260613_230846_c3a3f484
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260613_230846_c3a3f484
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinst ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace --help --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef` | stdout: { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": null, "applyPatchEx ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd --help --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef` | stdout: { "ok": true, "action": "hwpod-cli.cmd.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod cmd <command> [...argv]", "hwpod cmd git ls-r ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git -C 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef' rev-parse --show-toplevel --hwpod-id constart-71freq-c --wor ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd git -C 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef' submodule status -- projects/71-00075-11 --hwpod-id constart ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli", "status": "failed", "error": { "code": "required_option_missing", "message": "hwpodId is required", "details": { "name": "hwpodId" } } ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git -C 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef\projects\71-00075-11' rev-parse HEAD --hwpod-id constart-71fr ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git -C 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339-9bd9a5ef' submodule status projects/71-00075-11 --hwpod-id constart-71 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
| job-status |  | 0 | `hwpod job status 20260613_230716_19ee11bf --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613150339 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://constart-71freq-c", "hwpodId": "constart-71freq-c", "specAuthority": "preinstalled-v ... clipped ... |
