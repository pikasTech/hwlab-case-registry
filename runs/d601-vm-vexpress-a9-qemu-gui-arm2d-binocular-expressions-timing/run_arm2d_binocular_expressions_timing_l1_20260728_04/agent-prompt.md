# HWPOD CaseRun 代码代理任务

案例ID: d601-vm-vexpress-a9-qemu-gui-arm2d-binocular-expressions-timing
运行ID: run_arm2d_binocular_expressions_timing_l1_20260728_04
主体仓库本地路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace
主体提交ID: e1d6a4d7b457b1268afdb8e927fea20422b8fd5d
主体隔离工作区路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-cfed9a1092eab28a
hwpodId: d601-vm-vexpress-a9-qemu-gui
HWPOD 环境默认: HWPOD_ID=d601-vm-vexpress-a9-qemu-gui；HWPOD_WORKSPACE_PATH=/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-cfed9a1092eab28a
hwpodWorkspaceArgs（仅用于显式诊断，通常不要传）: --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-cfed9a1092eab28a'
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
请在 D601-VM-HOST 的隔离 Linux subject worktree 中修复现有双目表情 demo 的唯一时钟单位问题。当前版本已真实 build/download/capture 成功，但 4 fps 视觉采样显示眼睛在一秒内高速轮转且标签总被 PFB 采到 `angry`。根因已经用官方 Arm-2D helper 源码确认：`arm_2d_helper_get_system_timestamp()` 返回 tick，而当前代码直接 `(timestamp / 1000u) % 8u`，没有调用官方 `arm_2d_helper_convert_ticks_to_ms(int64_t)`。

只用小于 4 KiB 的定点读取定位 `wStep` 赋值，然后只用一次 `hwpod workspace apply-patch` 把它改成按官方毫秒换算后的秒数：先调用 `arm_2d_helper_convert_ticks_to_ms(arm_2d_helper_get_system_timestamp())`，再除以 1000，最后 `% 8`。使用足够宽的有符号中间类型，最后安全转为 `uint32_t`；每个状态应稳定约 1 秒，完整 8 状态周期约 8 秒。不得修改 expression 映射、angle/scale、gaze、标签、API、四条 frame-start、四条 show、PFB 或任何其他文件。

补丁后定点读取确认该行确实使用 `arm_2d_helper_convert_ticks_to_ms`，再执行一次且只执行一个 `hwpod build`。若 Agent 内部 build 客户端发生已知长等待/退出 130，不要并发重试，如实结束；CaseRun Harness 会独立 build/download 和 10 秒 24 fps capture。最终视频必须能以 1 fps 采样看到不同标签和与标签一致的稳定双目状态。

## 约束
- 思维过程和输出消息一律使用中文
- 只能通过 HWPOD service/node 操作隔离 subject worktree，不得直接 SSH、cd 或编辑目标 host 路径
- 只允许修改 src/arm_2d_scene_binocular.c 中的 demo 时钟换算
- 必须使用官方 arm_2d_helper_convert_ticks_to_ms 后再换算秒与 8 状态周期
- 不得修改 expression、gaze、标签、API、frame-start、show 或 PFB 语义
- 单次读取输出必须小于 4 KiB，文本修改必须使用 HWPOD workspace apply-patch
- 同一时刻只允许一个 hwpod build，不得因客户端长等待并发重试
- 禁止修改 headers、scripts、third_party、hwpod-spec.yaml、QEMU、PL111、下载和采集逻辑
- Agent final response 不能替代 Harness 独立 build、download 和 display.capture 证据
- 结果只记录 raw trace/evidence，autoEvaluation=false
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 skills；读取 skill 时使用初始资源 manifest 给出的绝对路径，不要假定 subject worktree 内存在 .agents/skills。若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-vm-vexpress-a9-qemu-gui；Harness 已把该 HWPOD 与 subject workspace 注入工具作用域，可以省略 --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-cfed9a1092eab28a'，若显式传入则必须精确一致。
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