# HWPOD CaseRun Code Agent Task

caseId: d601-f103-v2-leader-review
runId: d601-f103-v2-leader-review-20260607235359-897338d1
subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-leader-review-20260607235359-897338d1
runLocalHwpodSpecWorkspacePath: .hwlab/hwpod-spec.yaml
verificationMode: compile-only build check; no download or runtime smoke unless the case explicitly asks for it

## Run-local HWPOD spec
CaseRun has already placed the run-local spec at `.hwlab/hwpod-spec.yaml` in this AgentRun workspace before your turn starts, and has seeded the current v0.2 hwpod/hwpod-ctl/hwpod-compiler tool files and HWPOD skills. Treat the run-local spec as the authority for workspace/toolchain/debug/IO bindings. Do not create or overwrite it from this prompt.

## Task
You are a Leader agent with the `hwlab-code-agent` tool available. Your task is to demonstrate the Leader-Coder-Reviewer pattern.

The subject workspace has .hwlab/hwpod-spec.yaml already. The subject files are under projects/01_baseline/User/.

## Step 1: Spawn Coder
Use `hwlab-code-agent spawn --message "..." ` to create a coder agent. Tell it:
- Read projects/01_baseline/User/main.c via hwpod workspace cat
- Add a single comment line `// case05-leader-test` after the existing `#include "d601_lcd.h"` line
- Use `hwpod workspace insert-after` to make the edit
- After editing, run `hwpod workspace cat projects/01_baseline/User/main.c` to verify
- Report what you changed

The hwpod spec is at .hwlab/hwpod-spec.yaml — the coder will auto-inherit it.

## Step 2: Wait for Coder
Use `hwlab-code-agent poll <traceId> --timeout 300000` to wait for the coder to finish.

## Step 3: Spawn Reviewer
Use `hwlab-code-agent spawn --message "..." ` to create a reviewer agent. Tell it:
- Read projects/01_baseline/User/main.c via hwpod workspace cat
- Check if the file contains `// case05-leader-test` 
- Verify the comment is on its own line after `#include "d601_lcd.h"`
- Report PASS if found correctly placed, FAIL otherwise

## Step 4: Wait for Reviewer
Use `hwlab-code-agent poll <reviewerTraceId> --timeout 300000`.

## Output
After both complete, report:
1. Coder traceId and what it did
2. Reviewer verdict (PASS/FAIL)
3. Whether the Leader-Coder-Reviewer pattern worked correctly

## Constraints
- Leader 使用 hwlab-code-agent spawn/poll 调度 Coder 和 Reviewer
- Coder 通过 hwpod 修改 subject worktree 中的文件
- Reviewer 通过 hwpod 读取 subject worktree 验证改动
- hwpod spec 通过 CWD 自动继承，无需显式 --spec-path
- compile-only 模式，不下载不串口
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