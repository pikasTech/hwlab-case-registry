# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_02
- traceId: trc_harnessrl_8e5149d472591b8ea1141ac0
- present: true

已完成：

- 通过 HWPOD 标准入口修改隔离 worktree。
- 接入真实 Arm-2D v1.2.4 与 CMSIS-DSP 1.14.2。
- 添加 RAM RGB565 framebuffer、Arm-2D 填充/绘点、CRC、UART 运行信息和 FIR 调用。
- `hwpod build` 成功，生成 `build/stm32f405-qemu.elf`（39664 bytes）。

未完成：

- `hwpod download` 被固定 Harness 编译计划阻塞：该计划缺少 `src` 和 CMSIS include path，导致 upstream `arm_2d_utils.h` 无法找到 `cmsis_compiler.h`。
- 因未成功 download，QEMU 未启动，UART read 返回 `hwpod_uart_not_open`，没有运行态证据或 artifact hash。

修改文件：

- `src/main.c`
- `src/arm_2d_cfg.h`
- `src/cmsis_compiler.h`

未修改任何第三方 upstream 文件、原始 checkout 或构建脚本。
