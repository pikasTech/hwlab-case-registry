# HWLAB Case Registry

本仓库是 `pikasTech/hwlab-case-registry`，保存可审计的 HWPOD case 定义和 CaseRun evidence。case 定义放在 `cases/<caseId>/`，运行产物放在 `runs/<caseId>/<runId>/`。

本仓库不保存真实被开发或被测源码；真实源码统一称为 subject repo，由 `case.json.subject` 引用。

- 历史 case 04 (`d601-f103-v2-arm2d-integration`) 以 `case.json.subject.commitId` 固定的 subject repo commit `14a414da470013914b2a19229c36f2e9f8e2da4f` 为准，保留当时 subject 内置 `arm2d-skill` 的历史输入，不再作为最新 Arm2D 裸基线要求。
- #1077 阶段 D case (`d601-f103-v2-arm2d-stage-d`) 以裸 subject commit `76bce7c2d73b687473223bbbdebc7d69124ebac6` 为准；`arm2d-skill` 必须通过 HWLAB/AgentRun gitbundle resource bundle 装配给 Code Agent，不得放回 subject repo。
- case 定义可以合并到 `main`，作为后续复用的输入。
- run evidence 默认通过 PR 提交，通常只审计不合并。
- 不在本仓库保存硬件私钥、API key、Keil 安装包或大型构建产物。
