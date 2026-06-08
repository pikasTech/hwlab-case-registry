# HWPOD CaseRun Code Agent Task

caseId: d601-f103-v2-arm2d-integration
runId: d601-f103-v2-arm2d-integration-20260608033046-a561f343
subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608033046-a561f343
runLocalHwpodSpecWorkspacePath: .hwlab/hwpod-spec.yaml
verificationMode: compile-only build check; no download or runtime smoke unless the case explicitly asks for it

## Run-local HWPOD spec
CaseRun has already placed the run-local spec at `.hwlab/hwpod-spec.yaml` in this AgentRun workspace before your turn starts, and has seeded the current v0.2 hwpod/hwpod-ctl/hwpod-compiler tool files and HWPOD skills. Treat the run-local spec as the authority for workspace/toolchain/debug/IO bindings. Do not create or overwrite it from this prompt.

## Task
The subject workspace root is the repo root (contains projects/, docs/, tools/, .agents/). All paths below are relative to workspace root. The arm2d-skill is at .agents/skills/arm2d-skill/ (SKILL.md + references/ + python/). Use `hwpod workspace rg` / `hwpod workspace search` for symbol lookup and `hwpod workspace cat` only when you need the full file body. Read .agents/skills/arm2d-skill/SKILL.md first.

The workspace has an LCD driver (d601_lcd), GPIO, and the ARM-2D library under projects/01_baseline/Middlewares/Arm-2D/. The ARM-2D library headers (arm_2d.h, arm_2d_types.h, etc) are at projects/01_baseline/Middlewares/Arm-2D/Library/include/. d601_lcd.h is at projects/01_baseline/User/d601_lcd.h. The ARM-2D demo files exist but with EMPTY function bodies.

Your task:

1. Edit main.c to integrate ARM-2D: add #include "d601_arm2d_demo.h" after d601_lcd.h, call d601_arm2d_demo_show() after d601_gpio_init(), and d601_arm2d_demo_task() in the while(1) loop after jsonrpc_process().

2. Implement d601_arm2d_demo.c function bodies. Study d601_arm2d_demo.h for the public API, use `hwpod workspace rg` / `hwpod workspace search` to inspect the ARM-2D library headers under Middlewares/Arm-2D/Library/include/ for arm_2d_init, arm_2d_op_wait_async, arm_2d_rgb16_fill_colour, and arm_2d_tile_t structures. Read d601_lcd.h for d601_lcd_get_width/height, d601_lcd_draw_bitmap, d601_lcd_fill_rect, d601_lcd_show_string. Implement at minimum: arm2d_wait(), arm2d_tile_bind(), arm2d_fill_local(), d601_arm2d_demo_show() (init ARM-2D, render one full-screen fill), and d601_arm2d_demo_task() (call show periodically). The existing #defines (D601_ARM2D_PFB_WIDTH/LINES, D601_RGB565, D601_C_*) and static variables (s_pfb, s_arm2d_ready) should be reused.

3. After editing, run hwpod-ctl spec validate, hwpod inspect, and hwpod build with .hwlab/hwpod-spec.yaml. Report diff summary and build result. Do not download or run UART.

## Constraints
- 可以修改 projects/01_baseline/User/main.c 和 projects/01_baseline/User/d601_arm2d_demo.c
- main.c 只加3行：include + show() + task()
- d601_arm2d_demo.c 需要重新实现函数体，不能只恢复原来的代码
- 必须通过 HWPOD workspace/node 链路修改
- 只做 compile-only build check
- ARM-2D 库已在 Middlewares/Arm-2D/，d601_lcd 已实现
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- CaseRun 已在 AgentRun workspace 预装 .hwlab/hwpod-spec.yaml；必须使用这个 run-local HWPOD spec，不要从 prompt 重建 spec。
- CaseRun 已随本次 run 注入当前 v0.2 的 hwpod/hwpod-ctl/hwpod-compiler 工具文件和 HWPOD skill；若标准 hwpod 命令能力缺失，报告 workspace tool seed 问题，不要改走旁路。
- 如果 .hwlab/hwpod-spec.yaml 缺失或内容明显不是本次 case，请报告 CaseRun workspace setup 错误，不要自行编造或迁移 spec。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。记录返回 JSON 里的 jobId/job_id，再用独立的 hwpod job status <jobId> --spec .hwlab/hwpod-spec.yaml 短命令做有限轮询。

## Flow
- Confirm `.hwlab/hwpod-spec.yaml` exists. If it is missing, report a CaseRun workspace setup error instead of reconstructing it.
- Run `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml`.
- Run `hwpod inspect --spec .hwlab/hwpod-spec.yaml`.
- Follow the case task using standard hwpod/hwpod-ctl commands. Run build/download/UART steps only when the case explicitly asks for them, and report returned JSON/job/artifact/serial summaries.
- For hwpod build/download, keep the HWPOD command unwrapped so it can return async JSON; then poll the returned job id with separate short `hwpod job status <jobId> --spec .hwlab/hwpod-spec.yaml` commands a bounded number of times. Do not wrap status polling with shell sleep, &&, timeout, watch, head, pipes, or shell loops.
- CaseRun will inspect git diff under subjectWorktreePath after your turn completes and may run a runner post-check compile as separate evidence.
- CaseRun records trace/session/conversation, agent commandExecution, workspace diff and Keil build evidence without auto-grading them.