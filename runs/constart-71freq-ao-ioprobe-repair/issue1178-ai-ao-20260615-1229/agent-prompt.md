# HWPOD CaseRun 代码代理任务

caseId: constart-71freq-ao-ioprobe-repair
runId: issue1178-ai-ao-20260615-1229
主体仓库路径: F:\Work\ConStart
主体提交ID: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
主体隔离工作区路径: F:\Work\ConStart\.worktree\caserun-issue1178-ai-ao-20260615-1229
subjectWorkspacePath: F:\Work\ConStart\.worktree\caserun-issue1178-ai-ao-20260615-1229
projectRoot: projects/71-00075-11
projectRootPath: F:\Work\ConStart\.worktree\caserun-issue1178-ai-ao-20260615-1229\projects\71-00075-11
defaultWorkspacePath: F:\Work\ConStart
submodules:
- projects/71-00075-11 @ 5ef2fc874782713d1e4752636a8db05cc4a18cd2 (https://github.com/ConstarInc/71-00075-11)
hwpodId: constart-71freq-c
HWPOD 参数串: --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-issue1178-ai-ao-20260615-1229"
验证模式: 案例明确要求运行态验证；允许按任务正文执行 download、board-comm 和 io-probe read，并必须保留真实证据。

## 可用 HWPOD 命令
- `hwpod-ctl spec validate`
- `hwpod inspect`
- `hwpod workspace ...`
- `hwpod cmd <command> [...argv]`（只用于目标 host 内的真实上游源码获取、Pack/RTE/cache/archive 物化或必要诊断；项目本地文本编辑仍用 workspace apply-patch）
- 每条 `hwpod-ctl` / `hwpod` 命令都必须显式追加上方 HWPOD 参数串，尤其不能省略 `--workspace-path`。
- 项目本地文本源码编辑优先用 `cat patch.txt | hwpod workspace apply-patch --reason "..."`；patch 必须是多行 `*** Begin Patch` envelope，不要压成一行 `--patch-content`。
- `Update File` hunk 中上下文/删除/新增行分别以空格、`-`、`+` 开头；项目本地文件整文件重写也必须走 `apply-patch`：在 `*** Update File: <path>` 后直接放完整新文件正文，不要降级到 `workspace write`。
- 第三方上游源码、vendor source、SDK/Pack/RTE 文件不得通过 apply-patch/workspace write 粘贴或重写；必须通过 HWPOD cmd/git/archive/Pack/RTE/已验证缓存物化并记录 URL、tag/ref/version、hash。
- `hwpod build`
- `hwpod download`
- `hwpod board-comm jrpctcp ...`
- `hwpod io-probe inspect <probeId>` / `hwpod io-probe read <probeId>`
- `hwpod job status <jobId>`

## 约束
- 思维过程和输出消息一律使用中文
- 思维过程和输出消息一律使用中文
- 只允许修改 subjectWorkspacePath 隔离 worktree，不得修改原始 F:\Work\ConStart checkout 或 case registry
- 允许重点修改 projects/71-00075-11/FirmWare/APP/driver/aout.c 和 projects/71-00075-11/FirmWare/APP/user_config.h；如确需触碰其他文件，必须先说明原因并保持最小 diff
- 不得删除、篡改或伪造 control/status.output.ao_current_ua；该字段只能作为 command echo，不能当作外部电流证据
- 必须使用 hwpod io-probe read main41.ai0.current 读取 41 主机 AI0 外部电流证据，不要直接解析裸大 JSON 作为最终结论
- 安全预检先做 4000uA、8000uA、12000uA；只有读数稳定且安全时才做 20000uA；20000uA 后必须立即恢复 4000uA 并再次读取，不要中间重复恢复
- 下载前必须确认 probe UID 3FD750C63E342E24 与 71-FREQ-C 匹配；不匹配时报告 blocker，不得换探针
- 遇到 41 主机不可达、AI0 未接线、ioProbe read 失败、download probe 不匹配或 build 失败时，报告 blocker 并保留已完成 evidence
- 只能在主体隔离工作区内完成任务，不得修改 case registry repo 或原 subject repo checkout。
- CaseRun subjectWorkspacePath 是本次任务唯一源码工作区；hwpod list/inspect 中的 defaultWorkspacePath 只是 HWPOD spec 默认值，不是当前 run 工作区。
- 如果 subjectWorkspacePath 不可访问，必须报告 blocker；不得切换到 defaultWorkspacePath 或原 subject repo checkout 继续完成任务。
- 工程根必须限定在 projects/71-00075-11；查找、写入中间件和定位 Keil 工程时优先从该目录开始，不要先假定 repo 根目录。
- 使用 HWPOD 标准入口读取、编辑和验证主体隔离工作区。
- 涉及第三方库、中间件、SDK、Pack/RTE 或 vendor source 的任务，必须集成真实上游源码、发布包、Pack/RTE 或已验证缓存；不得自写同名替代实现、mock/stub、API veneer 或 subset 伪装成该中间件。获取真实来源失败时必须报告 blocker，不得把替代实现当作成功。
- 第三方上游源码或 vendor source 必须通过 HWPOD cmd/git/Pack/RTE/已验证缓存/archive 在目标工作区真实物化；不得用 apply-patch、workspace write 或手工粘贴整文件内容重放上游源码。
- 可用 HWPOD 命令和 apply-patch 规则已经是本次任务的最小操作摘要；不要把读取 skill/reference 文档或工具源码当作固定前置步骤，只有任务正文明确要求或命令失败、参数不确定时才读取最小相关片段。
- 本案例已声明运行态验证；按任务正文执行必要的 download、board-comm 和 io-probe read，遇到硬件或探针不匹配时报告 blocker。

## 任务
本案例用于造模并修复 71-FREQ-C AO 电流输出校准。你必须在 subjectWorkspacePath 的隔离 worktree 内完成，不得修改原始 F:\Work\ConStart checkout 或 case registry。第一步先只读确认 mono repo HEAD、projects/71-00075-11 submodule HEAD、HWPOD spec 和 41 AI0 ioProbe：运行 hwpod-ctl spec validate、hwpod inspect、hwpod io-probe inspect main41.ai0.current、hwpod io-probe read main41.ai0.current。第二步在隔离 worktree 中制造一个可审计坏 baseline：只允许围绕 projects/71-00075-11/FirmWare/APP/driver/aout.c 和 projects/71-00075-11/FirmWare/APP/user_config.h 退化 ao_current_to_pwm_duty() 的 gain/offset 使用，使 4000uA/8000uA/12000uA 的外部 41 AI0 回采明显偏离；不要删除 control/status.output.ao_current_ua，不要伪造 JSON-RPC 返回。第三步再修复 AO 驱动边界校准，使 public API 仍接收 uA，请求电流只在 aout.c 的 PWM duty 边界转换一次。第四步按顺序运行 hwpod build，确认 probe UID 3FD750C63E342E24 与 71-FREQ-C 匹配后运行 hwpod download；若探针不匹配，报告 blocker，不要改用其他探针。第五步通过 hwpod board-comm jrpctcp put hardware/ao/current/4000、8000、12000 和 hwpod io-probe read main41.ai0.current 做安全预检；确认安全后补 20000uA 点。最后必须恢复 4000uA 并再次读取 main41.ai0.current，不要在 12000uA 和 20000uA 之间额外恢复 4000uA。输出必须包含：造模 diff 摘要、修复 diff 摘要、build job id/returnCode/warningCount、download 证据、每个电流点的 71 command echo 与 41 AI0 external current 表。