# HWPOD CaseRun d601-f103-v2-main-marker-download-uart

- runId: issue1018-smooth-20260606-123827
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1018-smooth-20260606-123827
- agentTraceId: trc_case_d601-f103-v2-main-marker-download-uart_9a446894b3264261a4028fe33c66a776
- agentSessionId: ses_9b000a9c-f4c1-41bc-a769-5e2c0e6c6d2e
- agentTraceCommandCount: 30
- agentTraceHwpodCommandCount: 500
- agentTraceHwpodBuildCommandCount: 32
- agentStageCommandCount: 7
- agentStageKinds: spec-validate, inspect, workspace-edit, build, download, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1018-smooth-20260606-123827/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260606_204049_60c97222
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate | completed | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1` | { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", "document": { "apiVersion": "hwlab.dev/v0alpha1", "kind": "Hwpod", " ... clipped ... |
| inspect | completed | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1` | { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect", "contractVersion": "hwpod-node-ops-v1", "compilerInvoc ... clipped ... |
| workspace-edit | completed | 1 | `hwpod workspace insert-after --spec .hwlab/hwpod-spec.yaml --path projects/01_baseline/User/main.c --anchor 'printf(\"[D601-F103] JSON-RPC ready on USART1 11520 ... clipped ...` | { "ok": true, "action": "hwpod-cli.invoke", "status": "failed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "workspace.insert-after", "contractVersion": "hwpod-node-ops-v1", "c ... clipped ... |
| build | completed | 0 | `hwpod build --spec .hwlab/hwpod-spec.yaml 2>&1` | { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "debug.build", "contractVersion": "hwpod-node-ops-v1", "compilerI ... clipped ... |
| download | started |  | `hwpod download --spec .hwlab/hwpod-spec.yaml 2>&1` | commandExecution inProgress: /bin/sh -lc 'hwpod download --spec .hwlab/hwpod-spec.yaml 2>&1' |
| hwpod-other | started |  | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c 2>&1` | commandExecution inProgress: /bin/sh -lc 'hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c 2>&1' |
| hwpod-other | completed | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c 2>&1` | { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "workspace.cat", "contractVersion": "hwpod-node-ops-v1", "compile ... clipped ... |
