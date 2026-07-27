# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_download_uart01
- traceId: trc_harnessrl_8b5267ca116770757af5be0f
- present: true

阶段D已完成，修改仅在隔离 worktree。

- 新增 `src/arm_2d_cfg.h`
- 修改 `src/main.c`
- 实际调用 Arm-2D 上游 `arm_2d_rgb16_fill_colour`
- 实际调用 CMSIS-DSP `arm_fir_init_f32` / `arm_fir_f32`
- 保留 USART1 与 `RCC_APB2ENR` 映射
- 构建成功：`build/stm32f405-qemu.elf`，34980 bytes
- Artifact SHA-256：`2426e9961394daf20565bc0d1354a58ed2f7b608428bbf718ebccd9ce2a988b8`

运行证据：

- Download/QEMU：成功，PID `2919436`，UART `/dev/pts/1`
- UART：成功读取 12681 bytes
- 持续输出 heartbeat、递增 frame、`framebuffer_crc=f2697aa7`、`tile=16x8`
- Arm-2D：v1.2.4，commit `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP：v1.14.2，commit `43aa2a9e7fc080e0d7541e9f5e083258403ac9ee`

未修改任何第三方 upstream 文件、case registry 或原始 checkout。
