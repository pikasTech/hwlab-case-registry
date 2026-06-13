# HWPOD CaseRun constart-71freq-build

- runId: constart-71freq-build-20260613140131-ffe01754
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\ConStart
- subjectCommitId: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
- subjectWorktreePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613140131-ffe01754
- agentTraceId: trc_case_constart-71freq-build_1c92c0aa29f149d7a3e257b3c9b1d254
- agentSessionId: ses_b74c13a9-c9b0-4b8d-b9d6-c8d7c76596ac
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_constart-71freq-build_1c92c0aa29f149d7a3e257b3c9b1d254 --render web
- resultCommand: hwlab-cli client agent result trc_case_constart-71freq-build_1c92c0aa29f149d7a3e257b3c9b1d254
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_constart-71freq-build_1c92c0aa29f149d7a3e257b3c9b1d254
- agentTerminalStatus: completed
- agentCommandStatus: completed
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: 
- agentToolCallExitCodeCounts: 
- agentTraceCommandCount: 3
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 1
- agentStageSource: agent-trace-commands
- agentStageCommandCount: 3
- agentStageKinds: spec-validate, inspect, build
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/constart-71freq-build-20260613140131-ffe01754/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 未生成
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260613_220346_6ff29bcd
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 4
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260613_220346_6ff29bcd
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 1 | `hwpod-ctl spec validate --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613140131-ffe01754` | stdout: { "ok": false, "action": "hwpod-ctl", "status": "failed", "error": { "code": "hwpod_id_not_found", "message": "HWPOD id not found in runtime registry: constart-71freq-c", " ... clipped ... |
| inspect |  | 1 | `hwpod inspect --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613140131-ffe01754` | stdout: { "ok": false, "action": "hwpod-cli", "status": "failed", "error": { "code": "hwpod_id_not_found", "message": "HWPOD id not found in runtime registry: constart-71freq-c", " ... clipped ... |
| build |  | 1 | `hwpod build --hwpod-id constart-71freq-c --workspace-path 'F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613140131-ffe01754` | stdout: { "ok": false, "action": "hwpod-cli", "status": "failed", "error": { "code": "hwpod_id_not_found", "message": "HWPOD id not found in runtime registry: constart-71freq-c", " ... clipped ... |
