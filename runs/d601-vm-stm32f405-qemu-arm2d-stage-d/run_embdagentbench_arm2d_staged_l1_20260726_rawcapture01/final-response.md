# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_rawcapture01
- traceId: trc_harnessrl_0734b92cb2d3ab6c1739e94d
- present: true

已完成 Arm-2D 阶段 D：

- 修改：`src/main.c`、新增 `src/arm_2d_cfg.h`
- 真实调用 Arm-2D `arm_2d_rgb16_fill_colour`
- 接入 CMSIS-DSP 1.14.2 FIR
- 保留 USART1、`RCC_APB2ENR` 映射
- Build 成功：`build/stm32f405-qemu.elf`，34,880 bytes
- Artifact SHA256：`c0d100800776f65b2cf551f9fce25e71cb10fecba3669ec601c126b42878140f`
- QEMU download/start 成功：PID `2933681`
- UART 持续输出 heartbeat、frame、`framebuffer_crc32=b2aa7578`、tile `16x16`
- UART capture SHA256：`82e84c9c692f63529877b1e265ef4cdc98208176ff929e53f25a11ea228ff46f`

Provenance：

- Arm-2D v1.2.4：`b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP v1.14.2：`43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`
- CMSIS Core 5.9.0：`2b7495b8535bdcb306dac29b9ded4cfb679d7e5c`

所有源码修改均通过 HWPOD workspace apply-patch 完成，未修改原始 checkout 或 Harness 脚本。
