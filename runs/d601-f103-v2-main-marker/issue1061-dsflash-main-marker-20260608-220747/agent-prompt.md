# HWPOD CaseRun 代码代理任务

caseId: d601-f103-v2-main-marker
runId: issue1061-dsflash-main-marker-20260608-220747
主体仓库路径: F:\Work\HWLAB-CASE-F103
主体提交ID: df7a4e6e551fa90d64bde5537cc000f89d63dd20
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1061-dsflash-main-marker-20260608-220747
hwpodId: d601-f103-v2
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

## 可用 HWPOD 命令
- `hwpod-ctl spec validate`
- `hwpod inspect`
- `hwpod workspace ...`
- `hwpod build`
- `hwpod job status <jobId>`

## 约束
- 思维过程和输出消息一律使用中文
- 只允许修改 projects/01_baseline/User/main.c
- 必须新增且只新增一行 printf marker，不做 Arm2D 移植
- 必须通过 HWPOD workspace/node 链路修改 subjectWorktreePath，不得尝试从 Linux runner 直接 cd 到 Windows 路径
- 修改后只做 compile-only build check，不下载、不运行 runtime smoke
- 结果只作为 raw diff/evidence 记录，不做自动评价或自动门禁
- 只能在主体隔离工作区内完成任务，不得修改 case registry repo 或原 subject repo checkout。
- 使用 HWPOD 标准入口读取、编辑和验证主体隔离工作区。
- 除非任务正文明确要求，否则只做 compile-only build check，不要下载，也不要运行 UART。

## 任务
只在隔离主体工作区中，对 projects/01_baseline/User/main.c 做最小且可编译安全的变更：在已有 printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n"); 这一行之后，准确新增一行 printf("[D601-F103] CaseRun marker stageB\r\n");。通过 hwpod workspace apply-patch 入口或等价的 HWPOD workspace 操作编辑，使变更经 hwpod-node 落到 subjectWorktreePath；不要从 Linux runner cd 到 Windows 路径直接编辑。编辑后使用 CaseRun 提供的 hwpodWorkspaceArgs 运行 hwpod-ctl spec validate、hwpod inspect 和 hwpod build，然后回报 diff 摘要以及构建 job/artifact 摘要。除 projects/01_baseline/User/main.c 外，不要修改任何文件。