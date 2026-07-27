# CaseRun Final Response

- caseId: d601-vm-stm32f405-qemu-arm2d-stage-d
- runId: run_embdagentbench_arm2d_staged_l1_20260726_10
- traceId: trc_harnessrl_333bb3897c22a556ab816e89
- present: true

已完成并验证：

- 通过 HWPOD 作用域修改隔离 worktree，仅改动：
  - `src/main.c`
  - `src/arm_2d_cfg.h`
- 使用真实 Arm-2D v1.2.4、CMSIS-DSP 1.14.2 和 CMSIS Core 资源。
- `hwpod build` 成功，生成 `build/stm32f405-qemu.elf`，11864 bytes。
- `hwpod download` 成功启动 QEMU，PID `2673375`，UART `/dev/pts/1`。
- `hwpod uart read --port uart1` 成功读取持续运行证据，包含 runId、版本、commit、heartbeat、frame、CRC、tile 尺寸和 FIR 摘要。

示例 UART：

```text
runId=run_embdagentbench_arm2d_staged_l1_20260726_10
Arm-2D=ARM-software/Arm-2D-v1.2.4
commit=b73ec43b6567feffe57642861e8b5eb083788011
CMSIS-DSP=1.14.2 heartbeat=1 frame=00001552
framebuffer_crc=076bc42e tile=32x16 fir=0000005f
```

Build operationId：`hwpod_plan_21519bf2-9d1f-452f-a1d0-5ff56b311e8d`  
Download operationId：`hwpod_plan_5b7ca407-2fb0-44ad-a7c3-228b64a75c5b`  
UART operationId：`hwpod_plan_c0be5286-ced4-4f47-8dc5-bbf9311852f2`

UART 输出已截断保存于运行时 evidence dump；QEMU 当前处于运行状态。
