# HWPOD CaseRun d601-f103-v2-main-marker-download-uart

- runId: issue1020-case2-r4-20260606-153013
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1020-case2-r4-20260606-153013
- agentTraceId: trc_case_d601-f103-v2-main-marker-download-uart_11a1266dd45c4fa4bf4ab699e59b44bb
- agentSessionId: ses_1281da0a-ee27-4e3f-9159-9cd694725cac
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-main-marker-download-uart_11a1266dd45c4fa4bf4ab699e59b44bb --base-url http://74.48.78.17:19666 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-main-marker-download-uart_11a1266dd45c4fa4bf4ab699e59b44bb --base-url http://74.48.78.17:19666
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-main-marker-download-uart_11a1266dd45c4fa4bf4ab699e59b44bb --base-url http://74.48.78.17:19666
- agentTraceCommandCount: 20
- agentTraceHwpodCommandCount: 10
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 10
- agentStageKinds: spec-validate, inspect, workspace-edit, build, download, uart-read, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1020-case2-r4-20260606-153013/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260606_233509_583fe5d6
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", "docum ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml` | hwpod inspect --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect", "c ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor ' printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf( ... clipped ...` | hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor ' printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf("[D601-F103] CaseRun ... clipped ... |
| build |  | 0 | `hwpod build --spec .hwlab/hwpod-spec.yaml` | hwpod build --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "debug.build",  ... clipped ... |
| download |  | 0 | `hwpod download --spec .hwlab/hwpod-spec.yaml` | hwpod download --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "debug.downl ... clipped ... |
| uart-read |  | 0 | `hwpod uart read --spec .hwlab/hwpod-spec.yaml --port uart1 --max-bytes 4096` | hwpod uart read --spec .hwlab/hwpod-spec.yaml --port uart1 --max-bytes 4096 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spe ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hw ... clipped ... |
| workspace-edit |  | 1 | `hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor 'printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf(" ... clipped ...` | hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor 'printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf("[D601-F103] CaseRun  ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hw ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260606_233049_0a58f059 --spec .hwlab/hwpod-spec.yaml` | hwpod job status 20260606_233049_0a58f059 --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.ya ... clipped ... |
