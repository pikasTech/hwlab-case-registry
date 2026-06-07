# HWPOD CaseRun d601-f103-v2-main-marker

- runId: d601-f103-v2-main-marker-20260607013345-de84e602
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-main-marker-20260607013345-de84e602
- agentTraceId: trc_case_d601-f103-v2-main-marker_0f075527f05c42609aed980652c5f566
- agentSessionId: ses_adc32443-0eea-4abf-99cf-57c8f08bf88e
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-main-marker_0f075527f05c42609aed980652c5f566 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-main-marker_0f075527f05c42609aed980652c5f566
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-main-marker_0f075527f05c42609aed980652c5f566
- agentTraceCommandCount: 18
- agentTraceHwpodCommandCount: 12
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 12
- agentStageKinds: spec-validate, inspect, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-main-marker-20260607013345-de84e602/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260607_093503_5e90b6b7
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/ ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor 'printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf(" ... clipped ...` | "hwpod workspace insert-after --path projects/01_baseline/User/main.c --anchor 'printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");' --line ' printf("[D601-F103] CaseRun ... clipped ... |
| build |  | 0 | `hwpod build --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod build --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", " ... clipped ... |
| hwpod-other |  | 0 | `hwpod --help 2>&1 \| head -30; echo "---EXIT:$?` | hwpod --help 2>&1 \| head -30; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "bun too ... clipped ... |
| hwpod-other |  | 0 | `hwpod --help 2>&1; echo "---EXIT:$?` | hwpod --help 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "bun tools/hwpod-cl ... clipped ... |
| hwpod-other |  | 0 | `hwpod-ctl --help 2>&1; echo "---EXIT:$?` | hwpod-ctl --help 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-ctl.help", "status": "succeeded", "contractVersion": "hwpod-ctl-v1", "usage": [ "bun tools/hwpod-ctl ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed" ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 \| bun -e "const d=JSON.parse(await new Response(process.stdin).text());  ... clipped ...` | "hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 \| bun -e "const d=JSON.parse(await new Response(process.stdin).text()); const r=d.body.resu ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?` | hwpod job status 20260607_093430_a77b3900 --spec .hwlab/hwpod-spec.yaml 2>&1; echo "---EXIT:$?" stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath ... clipped ... |
