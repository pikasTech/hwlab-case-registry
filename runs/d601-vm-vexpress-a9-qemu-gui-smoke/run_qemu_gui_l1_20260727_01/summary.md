# HWPOD CaseRun d601-vm-vexpress-a9-qemu-gui-smoke

- runId: run_qemu_gui_l1_20260727_01
- status: blocked
- autoEvaluation: false
- compileOnly: false
- subjectRepoLocalPath: /home/ubuntu/workspace/hwpod_qemu_gui_workspace
- subjectCommitId: 4ed40401ff5686c86f9598ae8239b76374a98d00
- subjectWorktreePath: /home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/caserun-run-qemu-gui-l1-20260727-01
- agentTraceId: trc_harnessrl_8058e61d70d9eab603318718
- agentSessionId: ses_bf4a1193-6d9c-4c19-ad7e-b87825841cfc
- requestedProviderProfile: gpt.pika
- resolvedBackendProfile: gpt-pika
- model: 
- infrastructureBackend: gpt-pika
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_harnessrl_8058e61d70d9eab603318718 --render web
- resultCommand: hwlab-cli client agent result trc_harnessrl_8058e61d70d9eab603318718
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_harnessrl_8058e61d70d9eab603318718
- agentTraceCommandCount: 6
- agentTraceHwpodCommandCount: 4
- agentTraceHwpodBuildCommandCount: 0
- agentTerminalStatus: completed
- agentFinalPresent: true
- agentFinalMissingReason: 
- postValidationStatus: 
- agentReportedBuildWarningCount: 
- runnerPostValidationWarningCount: 
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: {}
- agentToolCallExitCodeCounts: {}
- agentStageCommandCount: 4
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v03/.state/harnessrl/runs/run_qemu_gui_l1_20260727_01/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate output: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "h ... clipped ...` | hwpod-ctl spec validate output: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "hwpodId": "d601-vm-ve ... clipped ... |
| inspect |  | 0 | `hwpod inspect output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "hwpodId": "d601-vm ... clipped ...` | hwpod inspect output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "hwpodId": "d601-vm-vexpress-a9-qemu-gu ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -i 'pl111\|framebuffer\|fb' src/main.c output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601- ... clipped ...` | hwpod workspace rg -n -i 'pl111\|framebuffer\|fb' src/main.c output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-vm-vexpress-a9-qemu- ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat src/main.c output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "h ... clipped ...` | hwpod workspace cat src/main.c output: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-vm-vexpress-a9-qemu-gui", "hwpodId": "d601-vm-ve ... clipped ... |
