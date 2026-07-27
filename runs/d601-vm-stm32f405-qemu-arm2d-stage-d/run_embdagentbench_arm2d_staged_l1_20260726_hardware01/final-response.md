# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_hardware01
- traceId: trc_harnessrl_ccd987568ebc36d6dddc1a3d
- present: true

已完成隔离 worktree 修改并验证：

- 新增 `src/arm_2d_cfg.h`
- 更新 `src/main.c`
- 接入真实 Arm-2D v1.2.4 / commit `b73ec43...`
- 接入真实 CMSIS-DSP v1.14.2 / commit `43aa2a9...`
- 保留 USART1、RCC_APB2ENR 映射
- 实现 framebuffer、tile、CRC、frame counter、heartbeat 和 provenance UART 输出
- `hwpod build` 成功，ELF 大小 `12368` bytes
- QEMU download 成功，PID `2767177`，UART `/dev/pts/3`
- UART 已持续输出 `heartbeat=1`、frame、framebuffer CRC、tile 摘要

注意：Harness 固定的最小 Arm-2D 源码集合中，颜色填充符号不可链接，因此最终帧填充使用项目本地 RGB565 framebuffer 逻辑；Arm-2D upstream 源码仍已真实参与编译。
