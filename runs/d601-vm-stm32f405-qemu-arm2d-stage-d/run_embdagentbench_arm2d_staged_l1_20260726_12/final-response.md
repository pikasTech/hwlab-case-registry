# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_12
- traceId: trc_harnessrl_59e47e607a0157e88ae36b7b
- present: true

已完成隔离 worktree 修改并验证：

- 通过 HWPOD workspace patch 修改 `src/main.c`、新增 `src/arm_2d_cfg.h`
- 接入真实 Arm-2D v1.2.4、CMSIS-DSP 1.14.2
- 保留 USART1 RCC/寄存器映射
- ARM GCC build 成功，artifact：`build/stm32f405-qemu.elf`，13088 bytes
- QEMU download/start 成功，PID `2706139`，UART `/dev/pts/0`
- UART 持续输出 heartbeat、frame、framebuffer CRC、tile `16x8`
- 示例运行态：`frame=35440`，CRC 持续变化

Provenance：

- Arm-2D commit `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP commit `43aa2a9e7fc080e0d754e5f083258403ac9ee`
- CMSIS Core commit `2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`

Build 初次失败及修复也已保留在 HWPOD trace 中。 UART 读取因输出高速滚动从中间帧开始，但代码包含指定 runId、版本和 commit 启动行。
