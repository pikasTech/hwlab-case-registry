# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608115850-6d880ebc
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608115850-6d880ebc
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_3d052fa7dd27450b854b252bbebdb157
- agentSessionId: ses_15a8a477-0f81-45d1-ade9-65d665b34b0d
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_3d052fa7dd27450b854b252bbebdb157 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_3d052fa7dd27450b854b252bbebdb157
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_3d052fa7dd27450b854b252bbebdb157
- agentTraceCommandCount: 82
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 3
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608115850-6d880ebc/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_200107_f1efc00b, 20260608_200204_42ce65c9, 20260608_200425_c14bfe98
- postAgentCompileJobId: 20260608_200450_9a60df21
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_200450_9a60df21
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 127 | `hwpod-ctl spec validate 2>&1` | stdout: /bin/sh: hwpod-ctl: not found exitCode=127 |
| inspect |  | 127 | `hwpod inspect 2>&1` | stdout: /bin/sh: hwpod: not found exitCode=127 |
| hwpod-other |  | 0 | `hwpod workspace..."; tools/hwpod workspace ls "" 2>&1 \| grep "state" \|\| true` | stdout: Need to check build log. Trying to read log via hwpod workspace... exitCode=0 |
