# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-integration
- runId: run_embdagentbench_arm2d_l1_20260725b
- traceId: trc_harnessrl_20896c3311f54ed3ae21304d
- present: true

已完成隔离 worktree 中的真实 Arm-2D/CMSIS-DSP 编译集成。

- Arm-2D：`v1.2.4`，commit `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP：`v1.14.2`，commit `43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`
- CMSIS Core：`5.9.0`，commit `2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`
- 来源：`https://github.com/ARM-software/Arm-2D.git`、`https://github.com/ARM-software/CMSIS-DSP.git`、`https://github.com/ARM-software/CMSIS_5.git`

修改内容包括本地 Arm-2D 配置、demo glue、裸机 libc glue，以及 ARM GCC 构建入口。第三方 upstream 文件未修改。

构建证据：

- HWPOD operation plan：`hwpod_plan_ba732795-4800-48ce-a07b-db777c4ef446`
- 返回码：`0`
- Artifact：`build/stm32f405-qemu.elf`
- 大小：`6240` 字节
- SHA-256：`e96e681e5c03c5ffbff10a2c22a469949cb0176ba1662dd0057152f0af10866`
- 警告：Arm-2D upstream 头文件产生 GCC `declaration does not declare anything` 警告；无错误
- 未执行下载、QEMU 启动或 UART 验证。
