# HWPOD CaseRun d601-vm-stm32f405-qemu-arm2d-integration

- runId: run_embdagentbench_arm2d_l1_20260725_immutable_harness03
- status: blocked
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: /home/ubuntu/workspace/hwpod_qemu_workspace
- subjectCommitId: f909cdaf6f0cd579b1f1b66d2d1eee5235a09fb9
- subjectWorktreePath: /home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness03
- agentTraceId: trc_harnessrl_b8b1509b3bbf259e3bbb6850
- agentSessionId: ses_504981ba-711b-4c49-91a7-0ecf44eb26f3
- requestedProviderProfile: gpt.pika
- resolvedBackendProfile: gpt-pika
- model: 
- infrastructureBackend: gpt-pika
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_harnessrl_b8b1509b3bbf259e3bbb6850 --render web
- resultCommand: hwlab-cli client agent result trc_harnessrl_b8b1509b3bbf259e3bbb6850
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_harnessrl_b8b1509b3bbf259e3bbb6850
- agentTraceCommandCount: 28
- agentTraceHwpodCommandCount: 6
- agentTraceHwpodBuildCommandCount: 2
- agentTerminalStatus: completed
- agentFinalPresent: true
- agentFinalMissingReason: 
- postValidationStatus: 
- agentReportedBuildWarningCount: 
- runnerPostValidationWarningCount: 
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: {}
- agentToolCallExitCodeCounts: {}
- agentStageCommandCount: 5
- agentStageKinds: spec-validate, inspect, build, hwpod-other
- diffPatchPath: /root/hwlab-v03/.state/harnessrl/runs/run_embdagentbench_arm2d_l1_20260725_immutable_harness03/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 1
- jobId: 
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  |  | `hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm ... clipped ...` | hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immut ... clipped ... |
| inspect |  |  | `hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-2026 ... clipped ...` | hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harne ... clipped ... |
| build |  |  | `hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-202607 ... clipped ...` | hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725-immutable-harness ... clipped ... |
| hwpod-other |  |  | `hwpod --help output: commandExecution started: /bin/bash -lc 'hwpod --help' outputBytes=54` | hwpod --help output: commandExecution started: /bin/bash -lc 'hwpod --help' outputBytes=54 exitCode=null |
| hwpod-other |  |  | `hwpod cmd --help output: commandExecution started: /bin/bash -lc 'hwpod cmd --help' outputBytes=58` | hwpod cmd --help output: commandExecution started: /bin/bash -lc 'hwpod cmd --help' outputBytes=58 exitCode=null |
