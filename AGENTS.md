# HWPOD Cases

本仓库保存可审计的 HWPOD case 定义和 CaseRun evidence。case 定义放在 `cases/<caseId>/`，运行产物放在 `runs/<caseId>/<runId>/`。

- case 定义可以合并到 `main`，作为后续复用的输入。
- run evidence 默认通过 PR 提交，通常只审计不合并。
- 不在本仓库保存硬件私钥、API key、Keil 安装包或大型构建产物。
