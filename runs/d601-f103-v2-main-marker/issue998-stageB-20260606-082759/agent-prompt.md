# HWPOD CaseRun Code Agent Task

caseId: d601-f103-v2-main-marker
runId: issue998-stageB-20260606-082759
subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
subjectCommitId: df7a4e6e551fa90d64bde5537cc000f89d63dd20
subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue998-stageb-20260606-082759
runLocalHwpodSpec: /root/hwlab-v02/.state/hwlab-cli/caserun/issue998-stageB-20260606-082759/.hwlab/hwpod-spec.yaml
verificationMode: compile-only build check; no download or runtime smoke unless the case explicitly asks for it

## Run-local HWPOD spec
Write exactly this YAML to `.hwlab/hwpod-spec.yaml` in your AgentRun workspace before running HWPOD commands. The Windows subjectWorktreePath is consumed by hwpod-node through this spec; do not try to cd into that Windows path from the Linux runner.

```yaml
apiVersion: hwlab.dev/v0alpha1
kind: Hwpod
metadata:
  uid: D601-F103-V2
  name: d601-f103-v2
spec:
  targetDevice:
    board: D601-F103-V2
    mcu: STM32F103
  workspace:
    path: "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue998-stageb-20260606-082759"
    toolchain: keil-mdk
    keilProject: projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
    keilTarget: USART
    keilCliPath: "C:\\Users\\liang\\.agents\\skills\\keil\\keil-cli.py"
  debugProbe:
    type: daplink
    adapter: keil
    probeUid: 3FD750C63E342E24
    probeName: MicroLink CMSIS-DAP
    programBackend: keil
  ioProbe:
    uart:
      id: uart/1
      port: COM9
      baudrate: 115200
  nodeBinding:
    nodeId: node-d601-f103-v2
    nodeType: pc-host
```

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
- 允许且必须在 AgentRun workspace 内写入/覆盖 .hwlab/hwpod-spec.yaml，用于本次 run-local HWPOD 编译验证。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。

## Flow
- Create or overwrite `.hwlab/hwpod-spec.yaml` in your AgentRun workspace with the exact run-local spec above.
- Run `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml`.
- Run `hwpod inspect --spec .hwlab/hwpod-spec.yaml`.
- Run `hwpod build --spec .hwlab/hwpod-spec.yaml` for compile-only verification and report the returned JSON/job/artifact summary.
- CaseRun will inspect git diff under subjectWorktreePath after your turn completes and may run a runner post-check compile as separate evidence.
- CaseRun records trace/session/conversation, agent commandExecution, workspace diff and Keil build evidence without auto-grading them.