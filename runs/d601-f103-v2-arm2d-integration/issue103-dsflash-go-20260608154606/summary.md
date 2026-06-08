# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue103-dsflash-go-20260608154606
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue103-dsflash-go-20260608154606
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_3a22b5ebcc92435a9ec418f64e9be6fc
- agentSessionId: ses_f1e11741-ccd4-43fa-8b63-f0a4bb3ecb93
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_3a22b5ebcc92435a9ec418f64e9be6fc --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_3a22b5ebcc92435a9ec418f64e9be6fc
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_3a22b5ebcc92435a9ec418f64e9be6fc
- agentTraceCommandCount: 100
- agentTraceHwpodCommandCount: 2
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 2
- agentStageKinds: spec-validate, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue103-dsflash-go-20260608154606/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_235553_cc2573e0
- postAgentCompileJobId: 20260608_235629_4be45f47
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_235629_4be45f47
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --help 2>&1 \|\| true` | stdout: /bin/sh: hwpod-ctl: not found exitCode=0 |
| hwpod-other |  | 0 | `tools/hwpod-cli.ts` | stdout: #!/usr/bin/env bun import { mainHwpodCli } from "./src/hwpod-harness-lib.ts"; await mainHwpodCli(); exitCode=0 |
