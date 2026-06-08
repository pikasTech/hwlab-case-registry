# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue1061-final-dsflash-20260608-1619
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1061-final-dsflash-20260608-1619
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_0a9e8fdbdcd342aebbc32403c567ea2a
- agentSessionId: ses_0821920d-4f05-4987-9c34-5437bc456742
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_0a9e8fdbdcd342aebbc32403c567ea2a --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_0a9e8fdbdcd342aebbc32403c567ea2a
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_0a9e8fdbdcd342aebbc32403c567ea2a
- agentTraceCommandCount: 49
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 3
- agentStageKinds: spec-validate, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1061-final-dsflash-20260608-1619/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260609_002518_1cc31e65
- postAgentCompileJobId: 20260609_002623_671f7833
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260609_002623_671f7833
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 127 | `hwpod-ctl spec validate` | stdout: /bin/sh: hwpod-ctl: not found exitCode=127 |
| hwpod-other |  | 0 | `hwpod 2>/dev/null \|\| echo "hwpod not in PATH` | stdout: hwpod not in PATH exitCode=0 |
| hwpod-other |  | 127 | `tools/hwpod-cli.ts tools/hwpod-ctl.ts` | stdout: /bin/sh: file: not found exitCode=127 |
