# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_03
- traceId: trc_harnessrl_cc884e69067505234f858771
- present: true

已完成隔离 worktree 修改并通过 HWPOD ARM GCC build。

修改内容：

- 新增 `src/arm_2d_cfg.h`
- `src/main.c` 接入真实 Arm-2D v1.2.4 API
- 接入 CMSIS-DSP v1.14.2 FIR API
- 生成 RGB565 framebuffer、tile、CRC32、heartbeat 和 UART provenance 输出

Build：

- `operation planId`: `hwpod_plan_6ca83dfa-596b-4cc9-8c0e-4a4adedf0be9`
- return code: `0`
- ELF: `build/stm32f405-qemu.elf`

Download 未通过：固定 `scripts/download` 的编译命令不包含 Arm-2D/CMSIS include/source，报错 `arm_2d.h: No such file or directory`。按任务约束不能修改或绕过该 Harness 脚本。

UART read 成功但读取到 `0 bytes`，且指向已有 harness scope 的 UART 路径，因此没有本次 QEMU 启动证据或运行态 UART 证据。
