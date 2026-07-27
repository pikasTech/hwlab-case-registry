# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_11
- traceId: trc_harnessrl_5195727f54e183098ee5c1ac
- present: true

已完成 Arm-2D 阶段 D，全部修改位于隔离 worktree：

`/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-staged-l1-20260726-11`

完成内容：

- 新增 `src/arm_2d_cfg.h`
- 修改 `src/main.c`
- 接入真实 Arm-2D v1.2.4、CMSIS-DSP 1.14.2
- RAM framebuffer/tile：`32x16` RGB565
- Arm-2D 填充与 CMSIS-DSP FIR 运行
- 保留 USART1 与 `RCC_APB2ENR` 映射
- UART 持续输出 runId、版本、commit、heartbeat、frame、CRC

验证结果：

- `hwpod-ctl spec validate`: 成功
- `hwpod build`: 成功
- ELF artifact: `build/stm32f405-qemu.elf`
- Artifact size: `38692` bytes
- QEMU: 运行中，PID `2700274`
- UART: `/dev/pts/0`
- UART read: 成功，捕获 `4095` bytes
- Framebuffer CRC: `efb5af2e`
- Frame counter 持续递增，tile 摘要为 `32x16`

固定 provenance：

- Arm-2D v1.2.4: `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP v1.14.2: `43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`
- CMSIS Core 5.9.0: `2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`

HWPOD 接口未提供 artifact SHA256 只读操作，因此未能通过受控入口取得文件 hash。
