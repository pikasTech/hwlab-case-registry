# HWPOD CaseRun 代码代理任务

案例ID: d601-vm-vexpress-a9-qemu-gui-arm2d-binocular-eyes-pfb-fix
运行ID: run_arm2d_binocular_eyes_pfb_fix_l1_20260728_13
主体仓库本地路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace
主体提交ID: ce6852e01490d70384747876e14c50bb33134176
主体隔离工作区路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-0f79286781244568
hwpodId: d601-vm-vexpress-a9-qemu-gui
HWPOD 环境默认: HWPOD_ID=d601-vm-vexpress-a9-qemu-gui；HWPOD_WORKSPACE_PATH=/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-0f79286781244568
hwpodWorkspaceArgs（仅用于显式诊断，通常不要传）: --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-0f79286781244568'
验证模式: custom-runtime；Agent final 与 CaseRun 后置 HWPOD validation 独立记录。
CaseRun 后置验证动作: build:build, download:download, display-capture:displayCapture

## 运行时装配
AgentRun 通过 ResourceBundleRef kind=gitbundle 装配 HWLAB 运行时资源。工具命令从 bundle 暴露；skill 的真实位置以 AgentRun 初始资源 manifest 给出的绝对路径为准，不把 subject worktree 下的 `.agents/skills` 当作固定路径。CaseRun 不再发送临时 workspaceFiles 或 seed-file 载荷。

## HWPOD 运行时
通过运行时服务按 ID 使用 HWPOD，不要求 runner 本地存在 `.hwlab/hwpod-spec.yaml`。

## Harness 已物化资源
- arm-2d-main: third_party/Arm-2D-main | https://github.com/ARM-software/Arm-2D.git | ref=main | commit=3dd16b28b2d8c920e43736d644c8e5876180eb50 | reused=false
hwpod/hwpod-ctl 默认读取已注入的 HWPOD_ID 和 HWPOD_WORKSPACE_PATH；不要在每条命令中重复长参数。显式传入时必须与环境作用域精确一致。
本任务的标准冒烟步骤：
- `hwpod-ctl spec validate`
- `hwpod inspect`
- 工作区读取、搜索和编辑：`hwpod workspace ...`
- 编译检查：`hwpod build`

## 任务
请在 D601-VM-HOST 的隔离 Linux subject worktree 中修复现有 Arm-2D 双目 scene 的右眼 PFB 裁剪问题。当前基线已经真实编译、下载并采集到动画：左眼完整，右侧只有眼眶，原因是右眼球绘制被放在仅覆盖左眼 region 的 `__arm_2d_hint_optimize_for_pfb__` 作用域中。不要重写 scene，不要重新复制官方文件，只对 `src/arm_2d_scene_binocular.c` 的 draw 函数做最小修复。

先用小于 4 KiB 的定点 `hwpod workspace rg` 查看 `tLeftPivot`、`tRightPivot`、`tEyeBallRegion`、`__arm_2d_hint_optimize_for_pfb__` 和四次 `spin_zoom_widget_show` 附近上下文。修复后必须满足：左右 pivot 都是独立的 `arm_2d_location_t`，X 为画面中心左右各约 90 像素、Y 相同；左右 socket 各用对应 pivot 绘制；从 `__centre_region` 分别建立 `tLeftEyeBallRegion` 和 `tRightEyeBallRegion`，X 分别减/加 90 后叠加同一 `EyeBallMove.tOffset`，size 保持官方 EYEBALL 大小；左眼球和右眼球分别位于以各自 region 为参数的独立 `__arm_2d_hint_optimize_for_pfb__` 作用域中。四次 `spin_zoom_widget_show` 都必须继续使用官方 LeftEye/RightEye socket/eyeball widget，第二参数为 `ptTile`，不得改成裸绘图。

文本修改只用 `hwpod workspace apply-patch`。不得修改构建清单、生命周期、HWPOD spec、QEMU helper、PL111 驱动、下载/复位/采集脚本、第三方文件或其他项目文件。完成补丁后用小范围查询核对左右两个 region、两个 PFB 作用域和四次 show，再执行且只同时执行一个 `hwpod build`；退出码为零后结束，并如实报告改动和构建结果。CaseRun Harness 会独立执行最终 build、download 和 10 秒 24 fps display.capture。

## 约束
- 思维过程和输出消息一律使用中文
- 只能通过 HWPOD service/node 操作隔离 subject worktree，不得直接 SSH、cd 或编辑目标 host 路径
- 只允许修改 src/arm_2d_scene_binocular.c
- 必须保留官方 LeftEye、RightEye、Eyeball 与 spin_zoom_widget 实现，不得裸写图形替代
- 左右 pivot 必须是独立 arm_2d_location_t，左右 eyeball region 必须独立
- 左右眼球必须分别位于以各自 region 为参数的独立 __arm_2d_hint_optimize_for_pfb__ 作用域
- draw 中必须保留左右 socket 与左右 eyeball 共四次 spin_zoom_widget_show
- 单次读取输出必须小于 4 KiB，禁止读取大文件全文或 AgentRun output dump
- 文本修改必须使用 HWPOD workspace apply-patch
- 同一时刻只允许一个 hwpod build，退出码为零后才能结束
- 禁止修改 scripts、third_party、hwpod-spec.yaml、QEMU、PL111 和采集逻辑
- Agent final response 不能替代 Harness 独立 build、download 和 display.capture 证据
- 结果只记录 raw trace/evidence，autoEvaluation=false
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 skills；读取 skill 时使用初始资源 manifest 给出的绝对路径，不要假定 subject worktree 内存在 .agents/skills。若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-vm-vexpress-a9-qemu-gui；Harness 已把该 HWPOD 与 subject workspace 注入工具作用域，可以省略 --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-0f79286781244568'，若显式传入则必须精确一致。
- 如果 case prompt 或旧帮助文本提到 .hwlab/hwpod-spec.yaml，把它视为过时写法；直接使用 Harness 注入的 HWPOD_ID/HWPOD_WORKSPACE_PATH 环境作用域，不要创建、复制或修补本地 spec 文件。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- CaseRun Harness 已按固定 provenance 物化 subject 资源；直接读取和使用下列目标路径，不要重复 clone、fetch、覆盖或删除这些资源。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。只有返回 JSON 明确包含 jobId/job_id 时，才用独立的 hwpod job status <jobId> 短命令有限轮询；status=completed 或只返回 operationId/planId 时不得调用 job status。
- 同一 HWPOD 节点的只读 workspace/cmd 请求可在节点声明的 maxInFlight 范围内并发；build、download、reset、UART 和其他作用于同一物理资源的操作必须按资源串行。节点报告 maxInFlight 或 busy 时停止新增请求，并按 retryable 信息有限重试，不要无界并发重发。

## 执行流程
- 先确认标准 `hwpod`、`hwpod-ctl` 和 `hwpod-compiler` 命令可从 gitbundle 工具目录调用。
- 使用标准 hwpod/hwpod-ctl 命令和环境默认作用域完成案例任务。只有案例明确要求时才运行 build/download/UART 步骤，并回报返回的 JSON、job、artifact 或串口摘要。
- 对 hwpod build/download，保持 HWPOD 命令本身不被包装。只有响应明确返回 `jobId` 或 `job_id` 时，才用独立短命令 `hwpod job status <jobId>` 有限轮询；响应已经 `status=completed` 或只返回 `operationId/planId` 时不得把它当作 job。不要用 shell sleep、&&、timeout、watch、head、pipe 或 shell loop 包裹状态轮询。
- 你的回合结束后，CaseRun 会检查 subjectWorktreePath 下的 git diff，并可能把 runner 后置编译作为单独证据记录。
- CaseRun 只记录 trace、session、conversation、agent 命令执行、workspace diff 和 Keil 构建证据，不做自动评分或门禁判断。