# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_rawcapture02
- traceId: trc_harnessrl_67a5793099afce2e98222f6c
- present: true

阶段 D 已完成，修改仅落在隔离 worktree：

- 新增 `src/arm_2d_cfg.h`
- 修改 `src/main.c`
- 使用真实 Arm-2D v1.2.4 `arm_2d_rgb16_fill_colour`
- 使用真实 CMSIS-DSP v1.14.2 `arm_fir_f32`
- 保留 USART1/RCC_APB2ENR 原映射
- UART 持续输出 runId、provenance、heartbeat、frame、CRC

验证结果：

- `hwpod-ctl spec validate`：成功
- `hwpod build`：成功，artifact `build/stm32f405-qemu.elf`，35068 bytes
- `hwpod download`：成功，QEMU PID `2937425`
- UART：持续输出 heartbeat/frame/CRC，CRC 示例 `3523624389`
- Arm-2D commit：`b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP commit：`43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`

UART 原始证据 SHA-256：`246b13b49b614b0a210f0def3a3d4f95d10825b91fb2eefdd0a1e971cb3ef224`。HWPOD build 接口仅返回 artifact 大小，未提供 ELF SHA-256。
