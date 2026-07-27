# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-integration
- runId: run_embdagentbench_arm2d_l1_20260725_immutable_harness05
- traceId: trc_harnessrl_10d1d757a9bb6933c10b92b0
- present: true

已完成隔离 worktree 中的 STM32F405 QEMU Arm-2D 最小集成，并通过 ARM GCC compile-only 构建。

- 修改：新增 `src/arm_2d_cfg.h`
- 物化 upstream：
  - Arm-2D `v1.2.4`：`https://github.com/ARM-software/Arm-2D.git`，commit `b73ec43b6567feffe57642861e8b5eb083788011`
  - CMSIS-DSP `v1.14.2`：`https://github.com/ARM-software/CMSIS-DSP.git`，commit `43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`
  - CMSIS Core `5.9.0`：`https://github.com/ARM-software/CMSIS_5.git`，commit `2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`
- Build plan：`hwpod_plan_94999c13-851f-463a-93b0-42beea8d2f23`
- Return code：`0`
- ELF SHA-256：`c2d7227b4e20f233f8d234f00764c35c5c264ed0a38b25f88919a4fd40eea5be`
- MAP SHA-256：`814402953003558f47b7b130aa12ce37c969c3b1d51296fc63b553539c1e09fb`
- 警告：存在 Arm-2D upstream GCC 宏相关 warning，无编译错误。
- 未执行下载、QEMU、UART 或运行态冒烟验证。
