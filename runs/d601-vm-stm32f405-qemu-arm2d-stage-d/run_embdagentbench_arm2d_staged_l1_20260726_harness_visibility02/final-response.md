# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_harness_visibility02
- traceId: trc_harnessrl_12fb8dba66dc1450e70a8ff7
- present: true

已完成隔离 worktree 修改并验证：

- 修改：`src/main.c`、新增 `src/arm_2d_cfg.h`
- 真实调用 Arm-2D v1.2.4 `arm_2d_rgb16_fill_colour`
- 保留 USART1 与 `RCC_APB2ENR` 映射
- 接入真实 CMSIS-DSP 1.14.2 头文件
- Build 成功：`build/stm32f405-qemu.elf`，32544 bytes
- Download/QEMU 启动成功：PID `2821033`，UART `/dev/pts/3`

限制：三次标准 `hwpod uart read --port uart1` 均返回空内容，因此无法提供 UART 运行态证据；源码和 QEMU 启动证据已保留。
