# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260608130649-d1b68651
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608130649-d1b68651
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_6a245c7047a5456f96a97f78dd3cd2ce
- agentSessionId: ses_54a6200a-a25a-4820-8009-9a728050f4fb
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_6a245c7047a5456f96a97f78dd3cd2ce --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_6a245c7047a5456f96a97f78dd3cd2ce
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_6a245c7047a5456f96a97f78dd3cd2ce
- agentTraceCommandCount: 46
- agentTraceHwpodCommandCount: 4
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 4
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608130649-d1b68651/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_211427_4e5795ac
- postAgentCompileJobId: 20260608_211534_7936091d
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_211534_7936091d
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 127 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608130649-d1b686 ... clipped ...` | stdout: /bin/sh: hwpod-ctl: not found exitCode=127 |
| inspect |  | 127 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608130649-d1b68651` | stdout: /bin/sh: hwpod: not found exitCode=127 |
| hwpod-other |  | 0 | `hwpod \|\| true` | stdout: exitCode=0 |
| hwpod-other |  | 0 | `hwpod-ctl \|\| true` | stdout: exitCode=0 |
