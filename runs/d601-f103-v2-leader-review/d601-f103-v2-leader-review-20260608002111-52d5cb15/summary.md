# HWPOD CaseRun d601-f103-v2-leader-review

- runId: d601-f103-v2-leader-review-20260608002111-52d5cb15
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-leader-review-20260608002111-52d5cb15
- agentTraceId: trc_case_d601-f103-v2-leader-review_2ecafdd2ae19477c8c91031231ae1b0c
- agentSessionId: ses_716fb1f7-c681-469b-935d-c457859bf002
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-leader-review_2ecafdd2ae19477c8c91031231ae1b0c --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-leader-review_2ecafdd2ae19477c8c91031231ae1b0c
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-leader-review_2ecafdd2ae19477c8c91031231ae1b0c
- agentTraceCommandCount: 17
- agentTraceHwpodCommandCount: 4
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 4
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-leader-review-20260608002111-52d5cb15/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260608_082317_605b73f2
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", " ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwl ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 \| grep -A 2 'content":` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 \| grep -A 2 'content":' stdout: "content": "#include \"./SYSTEM/usart/usart.h\"\r\n#include  ... clipped ... |
