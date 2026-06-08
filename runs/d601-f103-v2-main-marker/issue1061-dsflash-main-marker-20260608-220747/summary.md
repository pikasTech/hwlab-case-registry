# HWPOD CaseRun d601-f103-v2-main-marker

- runId: issue1061-dsflash-main-marker-20260608-220747
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1061-dsflash-main-marker-20260608-220747
- agentTraceId: trc_case_d601-f103-v2-main-marker_c0c3a9144c6f49f2a75af604dc90a5a3
- agentSessionId: ses_9ae8a87c-1b90-4dc5-9c2a-dd22a2881f47
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-main-marker_c0c3a9144c6f49f2a75af604dc90a5a3 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-main-marker_c0c3a9144c6f49f2a75af604dc90a5a3
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-main-marker_c0c3a9144c6f49f2a75af604dc90a5a3
- agentTraceCommandCount: 42
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 3
- agentStageKinds: hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1061-dsflash-main-marker-20260608-220747/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_221345_5e91f108, 20260608_220907_a42dd36a, 20260608_220943_0cec20d4
- postAgentCompileJobId: 20260608_221426_0f3bf479
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_221426_0f3bf479
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| hwpod-other |  | 127 | `hwpod-ctl && hwpod-ctl --help 2>&1 \| head -40` | stdout: exitCode=127 |
| hwpod-other |  | 127 | `hwpod && hwpod --help 2>&1 \| head -40` | stdout: exitCode=127 |
| hwpod-other |  | 0 | `tools/hwpod-cli.ts && echo "---" && cat tools/hwpod-ctl.ts` | stdout: #!/usr/bin/env sh exec bun "$(dirname "$0")/hwpod-cli.ts" "$@" --- #!/usr/bin/env sh exec bun "$(dirname "$0")/hwpod-ctl.ts" "$@" --- #!/usr/bin/env bun import { mainHwpodC ... clipped ... |
