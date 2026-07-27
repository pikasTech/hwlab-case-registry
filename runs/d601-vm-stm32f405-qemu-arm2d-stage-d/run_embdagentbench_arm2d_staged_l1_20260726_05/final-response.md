# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_05
- traceId: trc_harnessrl_a645f52a1c7335d6e51eca48
- present: true

已通过 HWPOD 完成隔离 worktree 修改：

- 新增 `src/arm_2d_cfg.h`
- 接入真实 Arm-2D v1.2.4、CMSIS-DSP v1.14.2
- 增加 RGB565 framebuffer、tile 摘要、CRC、heartbeat/frame UART 输出
- 记录 runId、Arm-2D commit、CMSIS-DSP 版本

验证结果：

- `hwpod-ctl spec validate`：通过
- `hwpod inspect`：通过
- `hwpod build`：失败，固定链接计划仍有链接错误
- `hwpod download`：失败，artifact missing
- UART：失败，QEMU 未启动，无 UART 设备
- 第三方文件未修改；仅新增 harness 物化目录标记及项目源码修改

关键 provenance：

- Arm-2D commit：`b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP commit：`43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`

因此本次未获得有效 ELF、QEMU 状态或 UART 运行态证据。
