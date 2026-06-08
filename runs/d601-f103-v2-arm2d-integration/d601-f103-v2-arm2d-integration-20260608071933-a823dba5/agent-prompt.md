# HWPOD CaseRun 代码代理任务

案例ID: d601-f103-v2-arm2d-integration
运行ID: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
主体仓库本地路径: F:\Work\HWLAB-CASE-F103
主体提交ID: 14a414da470013914b2a19229c36f2e9f8e2da4f
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5
hwpodId: d601-f103-v2
hwpodWorkspaceArgs: --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

## 运行时装配
AgentRun 通过 ResourceBundleRef kind=gitbundle 装配 HWLAB 运行时资源：仓库子路径 `tools` 会复制到工作区 `tools`，仓库子路径 `skills` 会复制到工作区 `.agents/skills`。CaseRun 不再发送临时 workspaceFiles 或 seed-file 载荷。

## HWPOD 运行时
通过运行时服务按 ID 使用 HWPOD，不要求 runner 本地存在 `.hwlab/hwpod-spec.yaml`。
每个 hwpod/hwpod-ctl 命令都必须携带这些参数：`--hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`。
本任务的标准冒烟步骤：
- `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- 工作区读取、搜索和编辑：`hwpod workspace ... --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- 编译检查：`hwpod build --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`

## 任务
主体工作区根目录就是仓库根目录，包含 projects/、docs/、tools/ 和 .agents/。编辑前先读取 `.agents/skills/arm2d-skill/SKILL.md`，并遵循其中的 ARM-2D 标准集成方法。如果该文件缺失，停止并报告 AgentRun gitbundle/skill 挂载阻塞；不要自行编造替代内容，也不要移除这个依赖。每个 `hwpod` 和 `hwpod-ctl` 命令都必须使用 CaseRun 提供的 `hwpodWorkspaceArgs`。不要使用 runner 本地 `.hwlab/hwpod-spec.yaml`；如果旧帮助文本提到它，把它转换为本任务提供的 `--hwpod-id` / `--workspace-path` 参数。符号查找优先用 `hwpod workspace rg` / `hwpod workspace search`，只有需要完整文件正文时才用 `hwpod workspace cat`。

工作区中已有 LCD 驱动 d601_lcd、GPIO，以及位于 projects/01_baseline/Middlewares/Arm-2D/ 的 ARM-2D 库。ARM-2D 头文件 arm_2d.h、arm_2d_types.h 等位于 projects/01_baseline/Middlewares/Arm-2D/Library/include/。d601_lcd.h 位于 projects/01_baseline/User/d601_lcd.h。ARM-2D demo 文件已经存在，但函数体为空。

你的任务：

1. 编辑 main.c 集成 ARM-2D：在 d601_lcd.h 之后加入 #include "d601_arm2d_demo.h"，在 d601_gpio_init() 之后调用 d601_arm2d_demo_show()，并在 while(1) 循环中 jsonrpc_process() 之后调用 d601_arm2d_demo_task()。

2. 实现 d601_arm2d_demo.c 的函数体。先阅读 d601_arm2d_demo.h 了解公开 API；使用带 hwpodWorkspaceArgs 的 `hwpod workspace rg` / `hwpod workspace search` 检查 Middlewares/Arm-2D/Library/include/ 下的 ARM-2D 头文件，重点确认 arm_2d_init、arm_2d_op_wait_async、arm_2d_rgb16_fill_colour 和 arm_2d_rgb565_t 结构；阅读 d601_lcd.h 了解 d601_lcd_get_width/height、d601_lcd_draw_bitmap、d601_lcd_fill_rect、d601_lcd_show_string。至少实现 arm2d_wait()、arm2d_tile_bind()、arm2d_fill_local()、d601_arm2d_demo_show()（初始化 ARM-2D 并渲染一次全屏填充）和 d601_arm2d_demo_task()（周期性调用 show）。复用已有 #define（D601_ARM2D_PFB_WIDTH/LINES、D601_RGB565、D601_C_*）和静态变量（s_pfb、s_arm2d_ready）。

3. 编辑完成后，使用 CaseRun 提供的 hwpodWorkspaceArgs 运行 `hwpod-ctl spec validate`、`hwpod inspect` 和 `hwpod build`。回报 diff 摘要和构建结果。不要下载，也不要运行 UART。

## 约束
- 思维过程和输出消息一律使用中文
- 可以修改 projects/01_baseline/User/main.c 和 projects/01_baseline/User/d601_arm2d_demo.c
- main.c 只加3行：include + show() + task()
- d601_arm2d_demo.c 需要重新实现函数体，不能只恢复原来的代码
- 必须通过 HWPOD workspace/node 链路修改，并在每个 hwpod/hwpod-ctl 命令中使用 CaseRun 提供的 hwpodWorkspaceArgs
- 不要创建、复制或修补 runner-local .hwlab/hwpod-spec.yaml
- 只做 compile-only build check
- ARM-2D 库已在 Middlewares/Arm-2D/，d601_lcd 已实现
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 .agents/skills；若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-f103-v2；所有 hwpod/hwpod-ctl 命令都携带 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'。
- 如果 case prompt 或旧帮助文本提到 .hwlab/hwpod-spec.yaml，把它视为过时写法并替换为本任务给出的 --hwpod-id/--workspace-path 参数；不要创建、复制或修补本地 spec 文件。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。记录返回 JSON 里的 jobId/job_id，再用独立的 hwpod job status <jobId> --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5' 短命令做有限轮询。

## 执行流程
- 先确认标准 `hwpod`、`hwpod-ctl` 和 `hwpod-compiler` 命令可从 gitbundle 工具目录调用。
- 使用标准 hwpod/hwpod-ctl 命令并携带 `--hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` 完成案例任务。只有案例明确要求时才运行 build/download/UART 步骤，并回报返回的 JSON、job、artifact 或串口摘要。
- 对 hwpod build/download，保持 HWPOD 命令本身不被包装，让它返回异步 JSON；随后用独立短命令 `hwpod job status <jobId> --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` 对返回的 job id 做有限轮询。不要用 shell sleep、&&、timeout、watch、head、pipe 或 shell loop 包裹状态轮询。
- 你的回合结束后，CaseRun 会检查 subjectWorktreePath 下的 git diff，并可能把 runner 后置编译作为单独证据记录。
- CaseRun 只记录 trace、session、conversation、agent 命令执行、workspace diff 和 Keil 构建证据，不做自动评分或门禁判断。