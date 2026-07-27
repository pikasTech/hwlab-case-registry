# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_08
- traceId: trc_harnessrl_980ae63204727f8c5b19dd6e
- present: true

已完成并仅修改隔离 worktree：

- 新增 `src/arm_2d_cfg.h`
- 修改 `src/main.c`
- 接入真实 Arm-2D v1.2.4、CMSIS-DSP v1.14.2
- `hwpod build` 成功，ELF 产物 11,872 字节
- `hwpod download` 成功，QEMU 启动成功
- UART 曾成功输出 heartbeat、frame、`framebuffer_crc=0x77B82639`、`tile=8x4`、`fir0=00000040`

最后一次 UART 读取因 QEMU PTY 返回 `[Errno 5] Input/output error` 失败。由于之前读取窗口未保留完整 provenance 前缀，当前不能声称已满足完整 UART identity 验收；CaseRun 后置验证仍需继续记录该阻塞。
