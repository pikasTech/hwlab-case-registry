# HWPOD CaseRun d601-vm-stm32f405-qemu-arm2d-integration

- runId: run_embdagentbench_arm2d_l1_20260725_immutable_harness05
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: /home/ubuntu/workspace/hwpod_qemu_workspace
- subjectCommitId: f909cdaf6f0cd579b1f1b66d2d1eee5235a09fb9
- subjectWorktreePath: /home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness05
- agentTraceId: trc_harnessrl_10d1d757a9bb6933c10b92b0
- agentSessionId: 
- requestedProviderProfile: gpt.pika
- resolvedBackendProfile: gpt-pika
- model: gpt-5.6-luna
- infrastructureBackend: gpt-pika
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_harnessrl_10d1d757a9bb6933c10b92b0 --render web
- resultCommand: hwlab-cli client agent result trc_harnessrl_10d1d757a9bb6933c10b92b0
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_harnessrl_10d1d757a9bb6933c10b92b0
- agentTraceCommandCount: 58
- agentTraceHwpodCommandCount: 8
- agentTraceHwpodBuildCommandCount: 4
- agentTerminalStatus: completed
- agentFinalPresent: true
- agentFinalMissingReason: 
- postValidationStatus: 
- agentReportedBuildWarningCount: 
- runnerPostValidationWarningCount: 
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: {}
- agentToolCallExitCodeCounts: {}
- agentStageCommandCount: 8
- agentStageKinds: spec-validate, inspect, build, hwpod-other
- diffPatchPath: /root/hwlab-v03/.state/harnessrl/runs/run_embdagentbench_arm2d_l1_20260725_immutable_harness05/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm ... clipped ...` | hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immut ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-2026 ... clipped ...` | hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harne ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-202607 ... clipped ...` | hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness ... clipped ... |
| build |  | 0 | `hwpod build --help output: { "ok": true, "action": "hwpod-cli.build.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod buil ... clipped ...` | hwpod build --help output: { "ok": true, "action": "hwpod-cli.build.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod build --hwpod-id d601-f1 ... clipped ... |
| build |  | 1 | `hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-202607 ... clipped ...` | hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness ... clipped ... |
| hwpod-other |  | 0 | `hwpod --help output: { "ok": true, "action": "hwpod-cli.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "bun tools/hwpod-cli.ts ... clipped ...` | hwpod --help output: { "ok": true, "action": "hwpod-cli.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "bun tools/hwpod-cli.ts inspect --hwpod-id  ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd --help output: { "ok": true, "action": "hwpod-cli.cmd.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod cmd --hw ... clipped ...` | hwpod cmd --help output: { "ok": true, "action": "hwpod-cli.cmd.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "hwpod cmd --hwpod-id d601-f103-v2  ... clipped ... |
| build |  | 1 | `hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-202607 ... clipped ...` | hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness ... clipped ... |
