# HWPOD CaseRun Code Agent Task

caseId: d601-f103-v2-main-marker-download-uart
runId: issue1018-smooth-600s-20260606-125203
subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1018-smooth-600s-20260606-125203
runLocalHwpodSpecWorkspacePath: .hwlab/hwpod-spec.yaml
verificationMode: compile-only build check; no download or runtime smoke unless the case explicitly asks for it

## Run-local HWPOD spec
CaseRun has already placed the run-local spec at `.hwlab/hwpod-spec.yaml` in this AgentRun workspace before your turn starts. Treat that file as the authority for workspace/toolchain/debug/IO bindings. Do not create or overwrite it from this prompt.

## Task
In the isolated subject worktree only, make one compile-safe UART marker mutation in projects/01_baseline/User/main.c. Use the runId shown above in the marker text, for example printf("[D601-F103] CaseRun UART marker <runId>\\r\\n");. Prefer the HWPOD workspace text-edit path currently available in the runner; if workspace apply-patch or a higher-level HWPOD edit operation fails, keep using HWPOD/hwpod-node operations and record the exact failure. Do not edit from the Linux runner by cd'ing into the Windows path. After the edit attempt, run exactly these HWPOD checks from the AgentRun workspace with .hwlab/hwpod-spec.yaml: hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml; hwpod inspect --spec .hwlab/hwpod-spec.yaml; hwpod build --spec .hwlab/hwpod-spec.yaml; hwpod download --spec .hwlab/hwpod-spec.yaml; hwpod uart read --spec .hwlab/hwpod-spec.yaml --port uart1 --max-bytes 4096. Report the diff summary, build/download returned JSON or job ids, and the raw UART read tail. Success is not required; this case is for collecting HWPOD harness improvement trace data.

## Constraints
- 只允许修改 projects/01_baseline/User/main.c
- marker 必须包含本次 runId，避免串口旧输出混淆
- 必须通过 HWPOD workspace/node 链路修改 subjectWorktreePath，不得从 Linux runner 直接 cd 到 Windows 路径
- 必须尝试 hwpod build、hwpod download 和 hwpod uart read 原入口命令
- 若修改、编译、下载或串口读取失败，继续保留 trace 和原始错误，不要绕过到非 HWPOD 路径
- 结果只作为 raw trace/evidence 记录，不做自动评价或自动门禁
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- CaseRun 已在 AgentRun workspace 预装 .hwlab/hwpod-spec.yaml；必须使用这个 run-local HWPOD spec，不要从 prompt 重建 spec。
- 如果 .hwlab/hwpod-spec.yaml 缺失或内容明显不是本次 case，请报告 CaseRun workspace setup 错误，不要自行编造或迁移 spec。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。

## Flow
- Confirm `.hwlab/hwpod-spec.yaml` exists. If it is missing, report a CaseRun workspace setup error instead of reconstructing it.
- Run `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml`.
- Run `hwpod inspect --spec .hwlab/hwpod-spec.yaml`.
- Follow the case task using standard hwpod/hwpod-ctl commands. Run build/download/UART steps only when the case explicitly asks for them, and report returned JSON/job/artifact/serial summaries.
- CaseRun will inspect git diff under subjectWorktreePath after your turn completes and may run a runner post-check compile as separate evidence.
- CaseRun records trace/session/conversation, agent commandExecution, workspace diff and Keil build evidence without auto-grading them.