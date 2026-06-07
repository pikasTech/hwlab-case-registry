# HWPOD CaseRun Code Agent Task

caseId: d601-f103-v2-main-marker
runId: d601-f103-v2-main-marker-20260607013345-de84e602
subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-main-marker-20260607013345-de84e602
runLocalHwpodSpecWorkspacePath: .hwlab/hwpod-spec.yaml
verificationMode: compile-only build check; no download or runtime smoke unless the case explicitly asks for it

## Run-local HWPOD spec
CaseRun has already placed the run-local spec at `.hwlab/hwpod-spec.yaml` in this AgentRun workspace before your turn starts, and has seeded the current v0.2 hwpod/hwpod-ctl/hwpod-compiler tool files and HWPOD skills. Treat the run-local spec as the authority for workspace/toolchain/debug/IO bindings. Do not create or overwrite it from this prompt.

## Task
In the isolated subject worktree only, make the smallest compile-safe mutation to projects/01_baseline/User/main.c: add exactly one line after the existing printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\\r\\n"); line: printf("[D601-F103] CaseRun marker stageB\\r\\n");. Use the hwpod workspace apply-patch entry or an equivalent HWPOD workspace operation so the edit is applied through hwpod-node to subjectWorktreePath; do not edit from the Linux runner by cd'ing into the Windows path. After the edit, run hwpod-ctl spec validate, hwpod inspect, and hwpod build with .hwlab/hwpod-spec.yaml, then report the diff summary and build job/artifact summary. Do not modify any file other than projects/01_baseline/User/main.c.

## Constraints
- 只允许修改 projects/01_baseline/User/main.c
- 必须新增且只新增一行 printf marker，不做 Arm2D 移植
- 必须通过 HWPOD workspace/node 链路修改 subjectWorktreePath，不得尝试从 Linux runner 直接 cd 到 Windows 路径
- 修改后只做 compile-only build check，不下载、不运行 runtime smoke
- 结果只作为 raw diff/evidence 记录，不做自动评价或自动门禁
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