# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-integration
- runId: run_embdagentbench_arm2d_l1_20260725_harness_scope07
- traceId: trc_harnessrl_6a06d32b78e60d28f9cbccfc
- present: true

已完成真实 Arm-2D 最小集成并通过 ARM GCC compile-only 构建。

修改：

- 新增 `src/arm_2d_cfg.h`
- 更新 `src/main.c`，引入真实 Arm-2D/CMSIS-DSP 头文件及 RGB565 framebuffer/tile、FIR 类型
- 未修改任何 upstream 第三方文件

Provenance：

- Arm-2D v1.2.4，`b73ec43b...`
- CMSIS-DSP v1.14.2，`43aa2a9e...`
- CMSIS Core 5.9.0，`2b7495b8...`

最终构建：

- HWPOD operation plan：`hwpod_plan_8ee25779-c894-4049-b5af-1ba9f6a91478`
- exit code：`0`
- ELF：`build/stm32f405-qemu.elf`，5624 bytes
- Map：`build/stm32f405-qemu.map`，78828 bytes
- 警告：Arm-2D upstream 宏展开产生重复 `declaration does not declare anything` 警告
- artifact hash：当前 HWPOD workspace API 未返回 hash，无法提供

未执行下载、QEMU 启动或 UART 冒烟验证。
