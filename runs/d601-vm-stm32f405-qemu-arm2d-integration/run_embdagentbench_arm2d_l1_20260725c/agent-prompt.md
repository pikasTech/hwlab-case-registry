# HWPOD CaseRun 代码代理任务

案例ID: d601-vm-stm32f405-qemu-arm2d-integration
运行ID: run_embdagentbench_arm2d_l1_20260725c
主体仓库本地路径: /home/ubuntu/workspace/hwpod_qemu_workspace
主体提交ID: f909cdaf6f0cd579b1f1b66d2d1eee5235a09fb9
主体隔离工作区路径: /home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c
hwpodId: d601-vm-stm32f405-qemu
hwpodWorkspaceArgs: --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'
验证模式: 仅执行编译构建检查；不下载、不做运行态冒烟验证。
CaseRun 后置验证动作: validation_01_build:build

## 运行时装配
AgentRun 通过 ResourceBundleRef kind=gitbundle 装配 HWLAB 运行时资源：仓库子路径 `tools` 会复制到工作区 `tools`，仓库子路径 `skills` 会复制到工作区 `.agents/skills`。CaseRun 不再发送临时 workspaceFiles 或 seed-file 载荷。

## HWPOD 运行时
通过运行时服务按 ID 使用 HWPOD，不要求 runner 本地存在 `.hwlab/hwpod-spec.yaml`。
每个 hwpod/hwpod-ctl 命令都必须携带这些参数：`--hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'`。
本任务的标准冒烟步骤：
- `hwpod-ctl spec validate --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'`
- `hwpod inspect --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'`
- 工作区读取、搜索和编辑：`hwpod workspace ... --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'`
- 编译检查：`hwpod build --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'`

## 任务
请在 D601-VM-HOST 的隔离 Linux subject worktree 中完成 STM32F405 QEMU 的真实 Arm-2D 最小集成，并以 ARM GCC 编译证据收口。

先通过标准 HWPOD workspace/cmd 入口读取 src/main.c、scripts/hwpod-qemu-cli.py、linker.ld 和必要的 arm2d-skill。获取 ARM-software/Arm-2D v1.2.4 与真实 CMSIS-DSP 1.14.2 来源，记录 URL、tag/version、commit 和文件清单。只物化 Cortex-M4 最小必要源码与头文件；upstream 文件保持原文，本地配置、framebuffer、display port 和 demo glue 放在项目本地文件。修改构建入口，使 arm-none-eabi-gcc 编译真实 Arm-2D/CMSIS-DSP 与 demo，并生成 build/stm32f405-qemu.elf。尽早运行 hwpod build，后续只按具体编译错误做窄范围修复。最终回报 provenance、diff、build operation/job identity、return code、warning 和 artifact hash。

## 约束
- 思维过程和输出消息一律使用中文
- 只能通过 HWPOD service/node 操作隔离 subject worktree，不得直接 SSH、cd 或编辑目标 host 路径
- 只能修改隔离 subject worktree，不得修改 case registry、HWLAB repo 或原 subject checkout
- 资源与 skill 必须来自 AgentRun gitbundle，不得使用 workspaceFiles、seed files、host skill 或 ConfigMap fallback
- 必须使用 ARM-software/Arm-2D 的真实 upstream v1.2.4；禁止 mock、stub、同名 API veneer、兼容子集或自制替代实现
- CMSIS-DSP 必须来自真实 1.14.2 Pack/RTE 或 upstream，并记录 provenance；禁止手写 arm_math.h 或最小 stub
- 第三方 upstream 文件必须由 HWPOD cmd/git/archive/已验证缓存物化，不得通过 apply-patch 手工粘贴或重写
- project-local 文本修改使用 HWPOD workspace apply-patch；禁止退化为 runner 直接文件操作
- 只做 compile-only，不启动 QEMU，不读取 UART
- 结果只记录 raw trace/evidence，autoEvaluation=false
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 .agents/skills；若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-vm-stm32f405-qemu；所有 hwpod/hwpod-ctl 命令都携带 --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'。
- 如果 case prompt 或旧帮助文本提到 .hwlab/hwpod-spec.yaml，把它视为过时写法并替换为本任务给出的 --hwpod-id/--workspace-path 参数；不要创建、复制或修补本地 spec 文件。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。记录返回 JSON 里的 jobId/job_id，再用独立的 hwpod job status <jobId> --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c' 短命令做有限轮询。

## 执行流程
- 先确认标准 `hwpod`、`hwpod-ctl` 和 `hwpod-compiler` 命令可从 gitbundle 工具目录调用。
- 使用标准 hwpod/hwpod-ctl 命令并携带 `--hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'` 完成案例任务。只有案例明确要求时才运行 build/download/UART 步骤，并回报返回的 JSON、job、artifact 或串口摘要。
- 对 hwpod build/download，保持 HWPOD 命令本身不被包装，让它返回异步 JSON；随后用独立短命令 `hwpod job status <jobId> --hwpod-id d601-vm-stm32f405-qemu --workspace-path '/home/ubuntu/workspace/hwpod_qemu_workspace/.worktree/caserun-run-embdagentbench-arm2d-l1-20260725c'` 对返回的 job id 做有限轮询。不要用 shell sleep、&&、timeout、watch、head、pipe 或 shell loop 包裹状态轮询。
- 你的回合结束后，CaseRun 会检查 subjectWorktreePath 下的 git diff，并可能把 runner 后置编译作为单独证据记录。
- CaseRun 只记录 trace、session、conversation、agent 命令执行、workspace diff 和 Keil 构建证据，不做自动评分或门禁判断。