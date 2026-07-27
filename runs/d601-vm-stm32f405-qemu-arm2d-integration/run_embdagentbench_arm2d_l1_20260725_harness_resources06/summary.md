# HWPOD CaseRun d601-vm-stm32f405-qemu-arm2d-integration

- runId: run_embdagentbench_arm2d_l1_20260725_harness_resources06
- status: blocked
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: /home/ubuntu/workspace/hwpod_qemu_workspace
- subjectCommitId: f909cdaf6f0cd579b1f1b66d2d1eee5235a09fb9
- subjectWorktreePath: /home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-harness-resources06
- agentTraceId: trc_harnessrl_6ffc20ab863709b7399f5d48
- agentSessionId: ses_0cdd5ca5-7c0b-4baa-851d-f691660c433e
- requestedProviderProfile: gpt.pika
- resolvedBackendProfile: gpt-pika
- model: 
- infrastructureBackend: gpt-pika
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_harnessrl_6ffc20ab863709b7399f5d48 --render web
- resultCommand: hwlab-cli client agent result trc_harnessrl_6ffc20ab863709b7399f5d48
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_harnessrl_6ffc20ab863709b7399f5d48
- agentTraceCommandCount: 8
- agentTraceHwpodCommandCount: 3
- agentTraceHwpodBuildCommandCount: 1
- agentTerminalStatus: completed
- agentFinalPresent: true
- agentFinalMissingReason: 
- postValidationStatus: 
- agentReportedBuildWarningCount: 
- runnerPostValidationWarningCount: 
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: {}
- agentToolCallExitCodeCounts: {}
- agentStageCommandCount: 3
- agentStageKinds: spec-validate, inspect, build
- diffPatchPath: /root/hwlab-v03/.state/harnessrl/runs/run_embdagentbench_arm2d_l1_20260725_harness_resources06/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 1
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm ... clipped ...` | hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725_harne ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-2026 ... clipped ...` | hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725_harness_resourc ... clipped ... |
| build |  | 1 | `hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-202607 ... clipped ...` | hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725_harness_resources ... clipped ... |
