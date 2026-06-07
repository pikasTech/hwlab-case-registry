# HWPOD CaseRun d601-f103-v2-leader-review

- runId: d601-f103-v2-leader-review-20260607235359-897338d1
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-leader-review-20260607235359-897338d1
- agentTraceId: trc_case_d601-f103-v2-leader-review_bf960b76582c4687ab7e84d83df8ba5f
- agentSessionId: ses_50a06c14-ba35-4868-bddd-d9ab526340d7
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-leader-review_bf960b76582c4687ab7e84d83df8ba5f --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-leader-review_bf960b76582c4687ab7e84d83df8ba5f
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-leader-review_bf960b76582c4687ab7e84d83df8ba5f
- agentTraceCommandCount: 15
- agentTraceHwpodCommandCount: 2
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 2
- agentStageKinds: spec-validate, inspect
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-leader-review-20260607235359-897338d1/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260608_075541_99d615f4
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", " ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect ... clipped ... |
