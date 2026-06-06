# CaseRun Final Response

- caseId: d601-f103-v2-main-marker-download-uart
- runId: issue1018-smooth-20260606-123827
- traceId: trc_case_d601-f103-v2-main-marker-download-uart_9a446894b3264261a4028fe33c66a776
- present: false

finalResponse=null

reason: printf '*** Begin Patch\n*** Update File: projects/01_baseline/User/main.c\n@@\n printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\\r\\n");\n+ printf("[D601-F103] CaseRun UART marker issue1018-smooth-20260606-123827\\r\\n");\n*** End Patch' | hwpod workspace apply-patch --spec .hwlab/hwpod-spec.yaml --reason "UART marker for CaseRun issue1018-smooth-20260606-123827" 2>&1
stdout:
{ "ok": true, "action": "hwpod-cli.invoke", "status": "failed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "workspace.apply-patch", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "subprocess", "entrypoint": "tools/hwpod-compiler-cli.ts", "argv": [ "compile", "--spec", ".hwlab/hwpod-spec.yaml", "--intent", "workspace.apply-patch", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_7be1bcb1-1953-42ae-90e7-5ee8c91ac101", "source": { "compiler": "hw...
exitCode=1

## Terminal/Error Rows
_No terminal/error rows were rendered._
