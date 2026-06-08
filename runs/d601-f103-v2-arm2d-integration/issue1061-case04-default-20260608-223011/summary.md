# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue1061-case04-default-20260608-223011
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1061-case04-default-20260608-223011
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_324019ecf02f434ca78c96dadf7bf5a8
- agentSessionId: ses_132aca96-40e0-47c9-9ab4-fe9a75f768d3
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_324019ecf02f434ca78c96dadf7bf5a8 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_324019ecf02f434ca78c96dadf7bf5a8
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_324019ecf02f434ca78c96dadf7bf5a8
- agentTraceCommandCount: 55
- agentTraceHwpodCommandCount: 1
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 1
- agentStageKinds: spec-validate
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1061-case04-default-20260608-223011/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260608_223651_f0fb9a76
- postAgentCompileJobId: 20260608_223738_8b6e6aa4
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260608_223738_8b6e6aa4
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate 2>&1 \|\| true; echo "---"; env \| grep -i hwlab 2>&1 \|\| true; echo "---"; hwpod inspect 2>&1 \|\| true` | stdout: /bin/sh: hwpod-ctl: not found --- HWLAB_RUNTIME_ENDPOINT_LOCKED=1 HWLAB_RUNTIME_API_URL=http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667 HWLAB_CODE_AGENT_SKILLS_DIRS ... clipped ... |
