# HWPOD CaseRun constart-71freq-build

- runId: constart-71freq-build-20260613131626-7f47825b
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\ConStart
- subjectCommitId: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
- subjectWorktreePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613131626-7f47825b
- agentTraceId: trc_case_constart-71freq-build_d85302bcb74c4e8588656e07f0383afb
- agentSessionId: ses_e5985b30-9c05-44c0-bc76-e4b2a2577a17
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_constart-71freq-build_d85302bcb74c4e8588656e07f0383afb --render web
- resultCommand: hwlab-cli client agent result trc_case_constart-71freq-build_d85302bcb74c4e8588656e07f0383afb
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_constart-71freq-build_d85302bcb74c4e8588656e07f0383afb
- agentTerminalStatus: completed
- agentCommandStatus: completed
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: 
- agentToolCallExitCodeCounts: 
- agentTraceCommandCount: 18
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 0
- agentStageSource: agent-trace-commands
- agentStageCommandCount: 3
- agentStageKinds: spec-validate, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/constart-71freq-build-20260613131626-7f47825b/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260613_211820_cf103c9f
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 4
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260613_211820_cf103c9f
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 1 | `hwpod-ctl spec validate --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613131626-7f47825b` | stdout: { "ok": false, "action": "hwpod-ctl", "status": "failed", "error": { "code": "hwpod_id_not_found", "message": "HWPOD id not found in runtime registry: constart-71freq-c", " ... clipped ... |
| hwpod-other |  | 0 | `hwpod-ctl --help 2>&1 \|\| hwpod-ctl 2>&1` | stdout: { "ok": true, "action": "hwpod-ctl.help", "status": "succeeded", "contractVersion": "hwpod-ctl-v1", "usage": [ "HWLAB_HWPOD_ID=d601-f103-v2 HWLAB_HWPOD_WORKSPACE_PATH=<run- ... clipped ... |
| hwpod-other |  | 0 | `hwpod 2>/dev/null; env \| grep -i constart 2>/dev/null` | stdout: HWLAB_RUNTIME_ENDPOINT_LOCKED=1 HWLAB_RUNTIME_API_URL=http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667 HWLAB_CODE_AGENT_ASSEMBLED_RUNTIME=1 HWLAB_RUNTIME_WEB_URL=htt ... clipped ... |
