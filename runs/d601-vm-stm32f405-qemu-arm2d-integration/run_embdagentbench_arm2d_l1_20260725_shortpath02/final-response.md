# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-integration
- runId: run_embdagentbench_arm2d_l1_20260725_shortpath02
- traceId: trc_harnessrl_58ca5f72d894b367d8548a93
- present: true

已完成真实 Arm-2D/CMSIS-DSP 最小集成并通过 ARM GCC 编译。

- Arm-2D：`v1.2.4`，commit `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP：`v1.14.2`，commit `43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`
- CMSIS-Core：`5.9.0`，commit `2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`
- 来源：`https://github.com/ARM-software/Arm-2D.git`、`https://github.com/ARM-software/CMSIS-DSP.git`、`https://github.com/ARM-software/CMSIS_5.git`
- 修改：`src/main.c`、`src/arm_2d_cfg.h`、`scripts/hwpod-qemu-cli.py`
- 关键 upstream 文件：Arm-2D 核心/draw/async、CMSIS-DSP FIR 实现及 CMSIS compiler headers
- Build plan/job identity：`hwpod_plan_ba3188a9-f815-4c00-a712-3b9956d029a4`
- 返回码：`0`
- Artifact：`build/stm32f405-qemu.elf`
- 大小：`12512` bytes
- SHA-256：`c50e95d2fac03c561d2db0974ec8b6afbfca63acd4cf8ca313d4ac7bef898d80`
- Warning：构建成功，stderr 为空；Arm-2D upstream 宏产生若干 GCC warning
- 未执行下载、QEMU 或 UART 验证。
