# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_workerfresh04
- traceId: trc_harnessrl_9d70c28590d57f34c63bea49
- present: true

已完成 STM32F405 QEMU Arm-2D 阶段 D。

修改：

- `src/arm_2d_cfg.h`
- `src/main.c`
- 使用真实 Arm-2D `arm_2d_rgb16_fill_colour`
- 使用真实 CMSIS-DSP `arm_fir_f32`
- 保留 USART1、`RCC_APB2ENR` 映射
- UART 持续输出 runId、版本/commit、heartbeat、frame、CRC 和 tile 摘要

验证结果：

- HWPOD validate/inspect：通过
- ARM GCC build：通过
- ELF：`build/stm32f405-qemu.elf`，35276 bytes
- QEMU download/start：通过，PID `2840236`
- UART：持续输出成功
- framebuffer CRC：`f2697aa7`
- UART evidence SHA256：`bb82ca55b26da0b7cc7f697f6e6d1a48b6608e456840192627f84a2bf0cb0e05`
- Arm-2D：v1.2.4，`b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP：v1.14.2，`43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`

未修改第三方 upstream 文件。
