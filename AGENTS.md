# HWLAB Case Registry

本仓库是 `pikasTech/hwlab-case-registry`，保存可审计的 HWPOD case 定义和 CaseRun evidence。case 定义放在 `cases/<caseId>/`，运行产物放在 `runs/<caseId>/<runId>/`。

本仓库不保存真实被开发或被测源码；真实源码统一称为 subject repo，由 `case.json.subject` 引用。

- case 04 (`d601-f103-v2-arm2d-integration`) 使用 subject repo 分支 `case04-baseline`（commit `92e6d99`），baseline 已清空 ARM-2D demo 函数体，Agent 需从零实现。
- case 定义可以合并到 `main`，作为后续复用的输入。
- run evidence 默认通过 PR 提交，通常只审计不合并。
- 不在本仓库保存硬件私钥、API key、Keil 安装包或大型构建产物。
