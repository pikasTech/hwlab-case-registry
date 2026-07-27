# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_harnessvisibility02
- traceId: trc_harnessrl_2c62b3eaec3a5a5ce7de9452
- present: true

已完成隔离 worktree 修改并通过 HWPOD build：

- 新增 `src/arm_2d_cfg.h`
- 接入真实 Arm-2D `arm_2d_rgb16_fill_colour`
- 接入 CMSIS-DSP `arm_fir_init_f32` / `arm_fir_f32`
- 保留 USART1 与 `RCC_APB2ENR`
- 增加 runId、版本/commit、framebuffer CRC、heartbeat 输出逻辑
- 构建产物：`build/stm32f405-qemu.elf`，34992 字节
- `hwpod download` 成功，QEMU PID `2831866`

但 UART 证据未获取：连续三次 `hwpod uart read --port uart1` 均返回空 stdout。已记录对应 operation IDs，当前不能声称 QEMU UART 运行态验证成功。Artifact SHA256 也未能通过当前 HWPOD 标准入口取得。
