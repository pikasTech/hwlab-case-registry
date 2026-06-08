# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608140029-08ec8394
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608140029-08ec8394
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_71a0a2011fba4afbae8bd0585b5a9afe
- agentSessionId: ses_0db1d25f-7c12-4565-84e1-7dbb96e363a2
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_71a0a2011fba4afbae8bd0585b5a9afe --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_71a0a2011fba4afbae8bd0585b5a9afe
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_71a0a2011fba4afbae8bd0585b5a9afe
- agentTraceCommandCount: 81
- agentTraceHwpodCommandCount: 2
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 2
- agentStageKinds: hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608140029-08ec8394/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_220907_a42dd36a
- postAgentCompileJobId: 20260608_221018_ec20394f
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_221018_ec20394f
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| hwpod-other |  | 127 | `hwpod --help 2>&1 \|\| hwpod-ctl --help 2>&1` | stdout: /bin/sh: hwpod: not found /bin/sh: hwpod-ctl: not found exitCode=127 |
| hwpod-other |  | 0 | `tools/hwpod-cli.ts` | stdout: #!/usr/bin/env bun import { mainHwpodCli } from "./src/hwpod-harness-lib.ts"; await mainHwpodCli(); exitCode=0 |
