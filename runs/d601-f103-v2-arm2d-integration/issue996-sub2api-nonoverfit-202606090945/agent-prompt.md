# HWPOD CaseRun 代码代理任务

caseId: d601-f103-v2-arm2d-integration
runId: issue996-sub2api-nonoverfit-202606090945
主体仓库路径: F:\Work\HWLAB-CASE-F103
主体提交ID: 14a414da470013914b2a19229c36f2e9f8e2da4f
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-202606090945
hwpodId: d601-f103-v2
HWPOD 参数串: --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue996-sub2api-nonoverfit-202606090945"
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

## 可用 HWPOD 命令
- `hwpod-ctl spec validate`
- `hwpod inspect`
- `hwpod workspace ...`
- 每条 `hwpod-ctl` / `hwpod` 命令都必须显式追加上方 HWPOD 参数串，尤其不能省略 `--workspace-path`。
- 源码编辑优先用 `cat patch.txt | hwpod workspace apply-patch --reason "..."`；patch 必须是多行 `*** Begin Patch` envelope，不要压成一行 `--patch-content`。
- `Update File` hunk 中上下文/删除/新增行分别以空格、`-`、`+` 开头；整文件重写也必须走 `apply-patch`：在 `*** Update File: <path>` 后直接放完整新文件正文，不要降级到 `workspace write`。
- `hwpod build`
- `hwpod job status <jobId>`

## 约束
- 思维过程和输出消息一律使用中文
- hwpod 与 hwpod-ctl 已在 PATH 中（通过工具链装配），不要运行 command -v、find / -name 或 ls tools/ 探测工具位置；直接运行 hwpod-ctl spec validate 和 hwpod workspace 开始工作
- 上下文读取必须服务于当前最小实现：优先读取目标源码、相关 LCD API 和必要 ARM-2D 符号；需要确认符号时可以用 hwpod workspace rg/cat 读取最小相关片段
- 不要 depth-first 通读 .agents/skills/arm2d-skill/ 或 Middlewares；不要把完整参考阅读、全仓库搜索或无边界递归搜索作为 patch 前置门槛
- 只能修改 projects/01_baseline/User/main.c 和 projects/01_baseline/User/d601_arm2d_demo.c
- 尽早用 hwpod workspace apply-patch 提交最小 patch 并运行 hwpod build；编译失败后按具体错误做窄范围二次查询和修复，不要降级为 workspace write
- main.c 只加3行：include + show() + task()
- d601_arm2d_demo.c 需要重新实现函数体，不能只恢复原来的代码
- 只做 compile-only build check，不要下载，也不要运行 UART
- ARM-2D 库已在 Middlewares/Arm-2D/，d601_lcd 已实现
- 实现时采用直接 RGB565 stripe framebuffer：复用 s_pfb[32][240]、arm_2d_rgb16_fill_colour()、d601_lcd_draw_bitmap() 和 d601_lcd_show_string()；不要引入 Scene Player、PFB Display Adapter、图片资源生成或复杂动画
- 只能在主体隔离工作区内完成任务，不得修改 case registry repo 或原 subject repo checkout。
- 使用 HWPOD 标准入口读取、编辑和验证主体隔离工作区。
- 除非任务正文明确要求，否则只做 compile-only build check，不要下载，也不要运行 UART。

## 任务
请在隔离主体工作区中完成 D601-F103-V2 的 ARM-2D demo 最小集成，目标是提交最小可编译 patch。

任务目标：
1. 编辑 projects/01_baseline/User/main.c：在 d601_lcd.h 之后 include d601_arm2d_demo.h，在 d601_gpio_init() 后调用 d601_arm2d_demo_show()，在 jsonrpc_process() 后调用 d601_arm2d_demo_task()。
2. 编辑 projects/01_baseline/User/d601_arm2d_demo.c：实现基于 RGB565 stripe/PFB 的最小 ARM-2D demo，围绕 LCD bitmap 刷新、必要文字显示和 show()/task() 周期刷新组织代码。
3. 上下文读取采用边界化策略：先理解目标文件与相关 API；需要确认 ARM-2D 或 LCD 符号时，只读取与当前实现或编译错误直接相关的头文件片段。不要把完整 skill/reference 或 Middlewares 全量通读作为前置门槛，也不要做无边界递归搜索。
4. 一旦有足够上下文形成可编译方案，就先提交最小 patch 并运行 hwpod build；后续只根据具体编译错误做窄范围查询和修复。

最终回报 diff 摘要、编译终态、return_code、artifact 路径、warning 数和仍需人工关注的问题。