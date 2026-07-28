# HWPOD CaseRun 代码代理任务

案例ID: d601-vm-vexpress-a9-qemu-gui-arm2d-binocular-eyes
运行ID: run_arm2d_binocular_from_single_l1_20260728_04
主体仓库本地路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace
主体提交ID: 6daaa6eb8540469eae69aef3714a52d3d2ab0196
主体隔离工作区路径: /home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-2dbad690c531cd32
hwpodId: d601-vm-vexpress-a9-qemu-gui
HWPOD 环境默认: HWPOD_ID=d601-vm-vexpress-a9-qemu-gui；HWPOD_WORKSPACE_PATH=/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-2dbad690c531cd32
hwpodWorkspaceArgs（仅用于显式诊断，通常不要传）: --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-2dbad690c531cd32'
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
请在 D601-VM-HOST 的隔离 Linux subject worktree 中，把当前已通过的 Arm-2D 官方 arm_2d_scene_blink 单眼示例改造成双目动画。当前基线已经真实使用官方 Eyeball.c、LeftEye.c、spin_zoom_widget.c、随机注视和眨眼逻辑，并由 VExpress-A9 PL111 双缓冲与 VBlank 同步呈现。

必须复用官方眼球位图、眼眶遮罩、spin_zoom_widget 变换和 scene blink 的状态逻辑，建立两个彼此独立的 eye/widget 实例；双眼在 640x480 画面中左右对称、大小一致，瞳孔注视方向同步，眨眼时序同步。先用 `hwpod cmd -- mkdir -p src` 和 `hwpod cmd -- cp <官方 arm_2d_scene_blink.c 路径> src/arm_2d_scene_binocular.c` 建立项目本地副本；同时把官方 `arm_2d_scene_blink.h` 复制到 `src/arm_2d_scene_blink.h`，在本地头文件中把原有 `Eye` 成员改成两个结构相同但内存独立的 `LeftEye`、`RightEye`。不要通过 cat 全文或 AgentRun output dump 搬运源码。随后只用小于 4 KiB 的定点 `hwpod workspace rg` 上下文读取，并用 `hwpod workspace apply-patch` 在本地副本中完成双实例改造。不得用自行绘制的圆形、椭圆、矩形或另一套动画替代官方资产与控件。允许窄范围修改 scripts/build 和 scripts/rebuild 的源文件清单，使其编译项目本地 scene 而不是上游单眼 scene；除此之外不得改变编译选项、目标或 Harness 行为。不得修改 HWPOD spec、QEMU helper、PL111 驱动、下载/复位/采集脚本或第三方上游文件来伪造结果。

上一轮失败实现只初始化了名为 `s_SecondEye` 的对象，却在 draw 中仍只绘制主眼，因此真实视频始终只有一只眼。不要照搬这种实现，也不要通过 `s_SecondEye = this` 复制包含内部状态的整个 scene/widget 结构。必须分别初始化左右眼的 socket 与 eyeball widget；每帧对左右两套 widget 都执行 frame-start 和 frame-complete；draw 中必须建立两个明确分离且左右对称的 pivot/region，并分别绘制左 socket、左 eyeball、右 socket、右 eyeball。共享注视目标和眨眼进度可以由同一状态机产生，但两个实例的 widget 运行状态和绘制调用必须独立。

请按以下已验证的最小结构一次完成，不要先提交半成品再靠宽搜索猜测：在 socket 配置块中用同一个只读 `tCFG` 分别调用 `spin_zoom_widget_init(&this.LeftEye.tSocket, &tCFG)` 和 `spin_zoom_widget_init(&this.RightEye.tSocket, &tCFG)`；在 eyeball 配置块中同理分别初始化两个 eyeball。load、depose、frame-complete 都各调用四个 widget。frame-start 必须是四条彼此完整、顺序执行的 `spin_zoom_widget_on_frame_start_xy(widget, 0, EYE_SIZE_RATIO, eyelidScale)`，不要把注视偏移误当成该函数的 angle/scale 参数，也不要嵌套调用。draw 先声明 `tLeftPivot`、`tRightPivot` 两个局部位置，X 以画面中心左右各偏移约 90 像素，Y 相同；再声明左右两个 eyeball region，分别以对应眼睛中心叠加同一个 `EyeBallMove.tOffset`。四次 `spin_zoom_widget_show` 的第二参数都必须是 `ptTile`，依次绘制左 socket、右 socket、左 eyeball、右 eyeball；第五参数为 255，禁止把 `__top_canvas`、mask tile 或含逗号的复合字面量误传到参数位。

右眼 region 必须与左眼 region 一起完整保留在同一个 `arm_2d_align_centre_open(__top_canvas, EYEBALL.tRegion.tSize) { ... }` 词法作用域内，直到左右两次 eyeball 绘制全部结束后才关闭该作用域。右眼必须使用完整嵌套初始化：`arm_2d_region_t tRightEyeBallRegion = { .tLocation = { .iX = __centre_region.tLocation.iX + 90 + this.EyeBallMove.tOffset.iX, .iY = __centre_region.tLocation.iY + this.EyeBallMove.tOffset.iY }, .tSize = EYEBALL.tRegion.tSize };`。禁止把 `.iX`、`.iY` 直接写成 `arm_2d_region_t` 顶层成员；禁止在第一个 align 作用域结束后继续引用 `__centre_region`。左右 `__arm_2d_hint_optimize_for_pfb__` 是同一 align 作用域内先后相邻的两个独立块，不得嵌套。结束前用四个小范围查询分别核对 init、frame-start/frame-complete、draw、load/depose，确认第二眼五阶段均有真实调用、draw 确实有四次 `spin_zoom_widget_show`，并定点读取整个 align 块确认右眼 region 没有跑出作用域。

开发中先读取当前 main.c 和构建清单，不要重复读取超过 4 KiB 的输出，也不要访问 AgentRun output dump；使用上述复制、定点读取和 apply-patch 小回环。只允许同时存在一个 `hwpod build`：必须等待当前构建明确返回后才能根据诊断修改或再次构建，禁止在旧构建仍运行时并发启动第二次构建。完成最终补丁后执行一次 `hwpod build`，退出码为零才可结束。完成后说明两个独立实例的位置、共享注视/眨眼状态、四个绘制调用和实际 build 结果。CaseRun Harness 会在 Agent 结束后独立执行最终 build、download 和 10 秒 24 fps display.capture。

## 约束
- 思维过程和输出消息一律使用中文
- 只能通过 HWPOD service/node 操作隔离 subject worktree，不得直接 SSH、cd 或编辑目标 host 路径
- 只能修改隔离 subject worktree，不得修改 case registry、HWLAB repo 或原 subject checkout
- 必须保留并复用官方 arm_2d_scene_blink、Eyeball、LeftEye 和 spin_zoom_widget，不得裸写图形替代
- 必须创建两个独立眼睛实例，位置左右对称，注视方向一致，眨眼时序同步
- src/arm_2d_scene_blink.h 中必须删除旧的外层 Eye 成员，并在 user_scene_blink_t 的 ARM_PRIVATE 作用域直接声明 `struct { spin_zoom_widget_t tSocket; spin_zoom_widget_t tEyeBall; } LeftEye, RightEye;`；禁止形成 this.Eye.LeftEye 或 this.Eye.RightEye
- 禁止用整个 scene/widget 结构赋值复制第二眼；左右 widget 必须分别初始化并完整参与帧生命周期
- draw 中必须以两个分离且左右对称的 pivot/region 分别绘制左右 socket 与 eyeball，共四次 spin_zoom_widget_show
- tLeftPivot 和 tRightPivot 必须先从官方已声明且可见的 tPivot 复制，再分别对 iX 减 90 和加 90；严禁在 arm_2d_align_centre_open 作用域外引用 __centre_region
- 左 socket 和左 eyeball 只能传 tLeftPivot，右 socket 和右 eyeball 只能传 tRightPivot；不得继续把官方居中 tPivot 传给任一眼睛
- tLeftEyeBallRegion 与 tRightEyeBallRegion 只能在 arm_2d_align_centre_open 作用域内从 __centre_region 分别构造；左右 __arm_2d_hint_optimize_for_pfb__ 必须是先左后右的两个独立顺序作用域，禁止互相嵌套
- tRightEyeBallRegion 必须使用 `.tLocation = { .iX = ..., .iY = ... }` 的嵌套初始化；arm_2d_region_t 顶层禁止直接出现 `.iX` 或 `.iY`
- 包含左右 region 与左右 eyeball 绘制的同一个 arm_2d_align_centre_open 作用域只能在右 eyeball 的 spin_zoom_widget_show 之后关闭
- 左 eyeball 的 spin_zoom_widget_show 第三个参数必须是 &tLeftEyeBallRegion，右 eyeball 必须是 &tRightEyeBallRegion；双目源码中不得残留 &tEyeBallRegion
- draw 的 pivot 必须是 arm_2d_location_t：左 X=画面中心-90、右 X=画面中心+90，Y 保持官方原值；两个 socket 都传 region=NULL 并分别传左/右 pivot；两个 eyeball region 都从 __centre_region 复制，X 分别减/加 90 后再叠加同一个 EyeBallMove 偏移，size 保持 EYEBALL 大小，并分别传对应 pivot
- 左右 eyeball 必须分别放在各自的 __arm_2d_hint_optimize_for_pfb__(leftRegion/rightRegion) 作用域内绘制；禁止把右眼绘制放在仅以左眼 region 优化的作用域内，否则 PFB 会裁掉右眼
- 左右 frame-start 必须写成彼此独立且完整的 spin_zoom_widget_on_frame_start_xy(widget, angle, scaleX, scaleY) 语句，不得嵌套或交错两个调用
- spin_zoom_widget_show 固定使用五个参数且第二参数必须是 ptTile；左右 pivot/region 先声明为局部变量，禁止在宏参数中使用含逗号的复合字面量
- 完成最终补丁后必须实际执行 hwpod build；退出码非零时继续按编译错误修复，只有退出码为零才能结束 Agent 任务
- 禁止修改 third_party/Arm-2D-main 中的上游文件
- 允许用 hwpod cmd -- cp 把官方 scene 复制为项目本地初始副本；复制后所有文本修改必须使用 HWPOD workspace apply-patch
- 单次读取输出必须小于 4 KiB；禁止重复读取大文件全文或访问 AgentRun output dump
- 同一时刻只允许一个 hwpod build；必须等待当前构建终态后才能再次构建，禁止并发构建
- 允许仅修改 scripts/build 和 scripts/rebuild 的 scene 源文件清单以编译项目本地双目 scene；禁止改变其他编译选项、目标或 Harness 行为
- 禁止修改 hwpod-spec.yaml、scripts/download、scripts/reset、PL111 驱动、QEMU helper 或采集逻辑
- project-local 文本修改使用 HWPOD workspace apply-patch，构建使用 HWPOD build
- Agent final response 不能替代 Harness 独立 build、download 和 display.capture 证据
- 结果只记录 raw trace/evidence，autoEvaluation=false
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 skills；读取 skill 时使用初始资源 manifest 给出的绝对路径，不要假定 subject worktree 内存在 .agents/skills。若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-vm-vexpress-a9-qemu-gui；Harness 已把该 HWPOD 与 subject workspace 注入工具作用域，可以省略 --hwpod-id d601-vm-vexpress-a9-qemu-gui --workspace-path '/home/ubuntu/workspace/hwpod_qemu_gui_workspace/.worktree/cr-2dbad690c531cd32'，若显式传入则必须精确一致。
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