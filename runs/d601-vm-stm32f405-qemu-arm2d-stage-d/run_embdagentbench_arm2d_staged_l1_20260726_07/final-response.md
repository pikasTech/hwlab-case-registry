# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_07
- traceId: trc_harnessrl_9c850c27eb02af403ff68ad1
- present: true

已完成隔离 worktree 修改并通过 HWPOD build：

- 新增 `src/arm_2d_cfg.h`
- 接入真实 Arm-2D v1.2.4 与 CMSIS-DSP v1.14.2
- 加入 framebuffer、CRC、UART runId/provenance/frame 输出逻辑
- build 成功，ELF artifact：`build/stm32f405-qemu.elf`，7080 bytes
- download/QEMU 启动成功，PID `2656658`，UART `/dev/pts/4`

但 UART 运行态证据未取得：首次读取返回 0 bytes，第二次返回 `[Errno 5] Input/output error`，表明 QEMU 进程未保持可读 UART 状态。因此本次任务不能宣称完整通过；最终 blocker 是 QEMU/UART runtime，而非编译。
