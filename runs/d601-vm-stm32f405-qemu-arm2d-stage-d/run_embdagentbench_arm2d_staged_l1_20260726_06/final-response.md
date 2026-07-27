# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_06
- traceId: trc_harnessrl_89074816f09ad44ea4a7097e
- present: true

已完成并验证：

- 通过 HWPOD 校验与 inspect。
- 仅通过 `hwpod workspace apply-patch` 修改隔离 worktree：
  - `src/arm_2d_cfg.h`
  - `src/main.c`
- 接入真实 Arm-2D v1.2.4 与 CMSIS-DSP v1.14.2 源码。
- `hwpod build` 成功，ELF artifact 约 11036 bytes。
- `hwpod download` 成功启动 QEMU，UART `/dev/pts/2`。
- UART 已输出 runId、Arm-2D/CMSIS-DSP provenance、heartbeat、frame 和 CRC：
  - framebuffer CRC：`0x23b3a25e`
  - frame：`1`
  - heartbeat 持续递增

注意：Arm-2D upstream 源码已参与编译，但当前最小编译计划中的 `arm_2dp_rgb565_fill_colour` 未提供可链接实现，最终 framebuffer 使用项目本地 RGB565 生成逻辑；因此严格意义上尚未完成“通过 Arm-2D 绘制 API 生成 framebuffer”的要求。
