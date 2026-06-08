# HWPOD CaseRun 代码代理任务

caseId: d601-f103-v2-arm2d-integration
runId: d601-f103-v2-arm2d-integration-20260608115850-6d880ebc
主体仓库路径: F:\Work\HWLAB-CASE-F103
主体提交ID: 14a414da470013914b2a19229c36f2e9f8e2da4f
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608115850-6d880ebc
hwpodId: d601-f103-v2
hwpodEnvDefaults:
- PATH includes $PWD/tools (AgentRun materialized tools bundle)
- HWLAB_HWPOD_ID=d601-f103-v2
- HWLAB_HWPOD_WORKSPACE_PATH=F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608115850-6d880ebc
hwpodWorkspaceArgs(仅人工单步 fallback，不是 agent 标准命令): --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608115850-6d880ebc'
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

## 运行时装配
AgentRun 通过 ResourceBundleRef kind=gitbundle 装配 HWLAB 运行时资源：仓库子路径 `tools` 会复制到工作区 `tools` 并进入 PATH，仓库子路径 `skills` 会复制到工作区 `.agents/skills`。CaseRun 不再发送临时 workspaceFiles 或 seed-file 载荷。
运行面应已提供如下 env defaults；它们是诊断参照，不要求你每条命令重新 export：
```bash
export PATH="$PWD/tools:$PATH"
export HWLAB_HWPOD_ID='d601-f103-v2'
export HWLAB_HWPOD_WORKSPACE_PATH='F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608115850-6d880ebc'
```

## HWPOD 运行时
通过运行时服务按 ID 使用 HWPOD，不要求 runner 本地存在 `.hwlab/hwpod-spec.yaml`。
标准 `hwpod` / `hwpod-ctl` 会读取 `HWLAB_HWPOD_ID` 和 `HWLAB_HWPOD_WORKSPACE_PATH`，因此 agent 命令默认省略重复参数。
本任务的标准冒烟步骤：
- `hwpod-ctl spec validate`
- `hwpod inspect`
- 工作区读取、搜索和编辑：`hwpod workspace ...`
- 编译检查：`hwpod build`，记录返回 JSON 的 jobId/job_id，再用 `hwpod job status <jobId>` 做有限短轮询。

## 任务
请在隔离主体工作区中完成 D601-F103-V2 的 ARM-2D demo 最小集成。

任务目标：
1. 编辑 projects/01_baseline/User/main.c：在 d601_lcd.h 之后加入 d601_arm2d_demo.h，在 d601_gpio_init() 之后调用 d601_arm2d_demo_show()，并在 while(1) 循环中 jsonrpc_process() 之后调用 d601_arm2d_demo_task()。
2. 编辑 projects/01_baseline/User/d601_arm2d_demo.c：先阅读 d601_arm2d_demo.h、d601_lcd.h 和 Middlewares/Arm-2D/Library/include/ 下的 ARM-2D 头文件，再从当前头文件和现有工程代码推导实现。至少完成 arm2d_wait()、arm2d_tile_bind()、arm2d_fill_local()、d601_arm2d_demo_show() 和 d601_arm2d_demo_task()。
3. 完成后执行 compile-only 验证，并回报 diff 摘要、编译终态、return_code、artifact 路径、warning 数和仍需人工关注的问题。

不要照搬历史 run trace、旧答案或记忆中的 API 形态；所有 ARM-2D 与 LCD API 以当前工作区内头文件和源码为准。

## 约束
- 思维过程和输出消息一律使用中文
- 只能修改 projects/01_baseline/User/main.c 和 projects/01_baseline/User/d601_arm2d_demo.c
- main.c 只加3行：include + show() + task()
- d601_arm2d_demo.c 需要重新实现函数体，不能只恢复原来的代码
- 只做 compile-only build check，不要下载，也不要运行 UART
- ARM-2D 库已在 Middlewares/Arm-2D/，d601_lcd 已实现
- case04 成功 trace 已验证：当前工程的 RGB565 类型名是 arm_2d_color_rgb565_t，不是 arm_2d_rgb565_t；如需使用类型定义，只做轻量复核，不要从零搜索所有命名变体
- case04 成功 trace 已验证：arm_2d_rgb16_fill_colour(tile, region, colour) 可用于 RGB565 填充；ARM_2D_OP_WAIT_ASYNC(...) / arm_2d_op_wait_async(...) 的宏和函数形态需要按当前头文件轻量复核后使用
- 优先读取 projects/01_baseline/User/d601_arm2d_demo.h、projects/01_baseline/User/d601_lcd.h、Middlewares/Arm-2D/Library/include/arm_2d.h 和 arm_2d_types.h；不要把搜索范围扩成全仓库摸索
- d601_lcd 已提供 bitmap/string 入口；实现时围绕 LCD bitmap 绘制、stripe/PFB 刷新、FPS 文本和 show()/task() 周期刷新组织代码
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 .agents/skills，并按运行面合同把 materialized tools/ 加入 PATH；若标准 hwpod 命令能力缺失，报告 gitbundle/runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-f103-v2；HWPOD identity/workspace 已由 HWLAB_HWPOD_ID 与 HWLAB_HWPOD_WORKSPACE_PATH 提供，标准 hwpod/hwpod-ctl 命令不要重复携带 --hwpod-id/--workspace-path。
- 不要先用 command -v 探测 hwpod/hwpod-ctl/hwpod-compiler；直接运行标准 HWPOD 命令并保留结构化 JSON/stdout/stderr 作为证据。
- 如果 case prompt 或旧帮助文本提到 .hwlab/hwpod-spec.yaml，把它视为过时写法并替换为本任务的 env defaults；不要创建、复制或修补本地 spec 文件。
- 如果标准 hwpod 命令或 env defaults 确实不可用，报告 AgentRun runner env/runtime assembly 阻塞；不要把每条命令改写成 PATH 前缀、shell alias 或 runner-local spec fallback。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。

## 执行流程
- 不要先跑 `command -v` 工具探测；直接运行标准 `hwpod-ctl spec validate` 和 `hwpod inspect`，用它们的 JSON/stdout/stderr 判断装配是否正常。
- 使用标准 hwpod/hwpod-ctl 命令完成案例任务，默认不重复 `--hwpod-id` / `--workspace-path`。
- 对 hwpod build/download，保持 HWPOD 命令本身不被包装，让它返回异步 JSON；随后用独立短命令 `hwpod job status <jobId>` 对返回的 job id 做有限轮询。不要用 shell sleep、&&、timeout、watch、head、pipe 或 shell loop 包裹状态轮询。
- CaseRun 只记录 trace、session、conversation、agent 命令执行、workspace diff 和 Keil 构建证据，不做自动评分或门禁判断。