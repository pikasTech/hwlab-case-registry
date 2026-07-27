# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_09
- traceId: trc_harnessrl_ea0aaf61bab6707d2bb19567
- present: true

已完成隔离 worktree 修改并通过 HWPOD ARM GCC build：

- 新增 `src/arm_2d_cfg.h`
- 接入真实 Arm-2D v1.2.4 与 CMSIS-DSP v1.14.2
- `main.c` 调用 `arm_2d_init()`、CMSIS-DSP FIR，并生成 framebuffer CRC
- build 成功，artifact：`build/stm32f405-qemu.elf`，12,592 bytes
- HWPOD `download` 成功，QEMU 启动成功，PTY `/dev/pts/2`

但 UART 两次读取均为 0 字节，未获得运行态证据；因此本案例不能报告为完整通过。第三方资源未修改，所有修改均通过 `hwpod workspace apply-patch` 写入隔离 worktree。
