# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_capturefull01
- traceId: trc_harnessrl_851855434d38d93035a916a6
- present: true

已完成隔离 worktree 修改并通过 HWPOD ARM GCC build。

- Arm-2D v1.2.4 真实调用：`arm_2d_rgb16_fill_colour`
- CMSIS-DSP v1.14.2 upstream 头文件接入
- 保留 USART1/RCC 映射，补充 GPIOA AF7 配置
- 构建产物：`build/stm32f405-qemu.elf`
- 大小：32,588 bytes
- SHA-256：`e95cac44dda8c7057b5375e2891104e2aa732d0a68fe9d5265c5e7d6ff5ac325`
- QEMU download 成功，PID `2825798`

但 UART 读取连续三次均为空，因此运行态 UART 证据未形成，任务不能判定为完整成功。修改仅通过 HWPOD `workspace apply-patch` 写入隔离 worktree；第三方资源未修改。
