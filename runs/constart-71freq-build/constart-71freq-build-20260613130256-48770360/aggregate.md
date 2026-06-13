# HWPOD CaseRun Aggregate: constart-71freq-build

- caseId: constart-71freq-build
- runId: constart-71freq-build-20260613130256-48770360
- generatedFrom: case registry artifacts
- aggregationOnly: true
- autoEvaluation: false
- primaryEntry: aggregate.md

## 证据边界速览

- agentFinalSource: agent-final-response.md-or-terminal-row
- agentFinalBoundary: agent-authored-final-response; not-post-validation-verdict
- agentStageStatus: failed
- agentTimedOut: false
- agentRunTerminalStatus: failed
- postValidationSource: case-run-runner-post-agent-compile-check
- postValidationJobId: 20260613_210546_b27db23d
- postValidationStatus: completed
- postValidationReturnCode: 0
- postValidationWarningCount: 4
- postValidationBoundary: runner-owned-post-agent-validation; separate-from-agent-final
- finalVsPostValidation: agent-final-and-post-validation-are-separate-evidence
- supplementalValidation: not-recorded

## 状态解释与证据缺口

- declaredValidationMode: compile-only
- effectiveValidationMode: build-only
- modeResolution: case-task-overrode-default-compile-only
- requestedValidationSteps: spec-validate, inspect, build, job-status
- completedValidationSteps: not-recorded
- agentRunTerminalStatus: failed
- agentCommandStatus: failed
- caseRunStatus: completed
- hwpodExitCodeSource: case-run-runner-post-agent-compile-check
- sourceRootDirtyAtPrepare: true
- dirtyAttribution: source-root dirty before prepare (M "docs/MDTODO/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210.md"  M docs/reference/projects/41-00426-20-Controller-Code/Slave_AC_Module/canopen_communication_usage.md  M docs/reference/projects/71-00075-11/control_algorithm_gap_closure_loopback_plan.md  M docs/reference/projects/71-00075-11/control_algorithm_implementation_plan.md  M docs/reference/projects/71-00075-11/current_implementation_acceptance_and_architecture.md  M docs/reference/projects/71-00075-11/original_spec_p0_p1_implementation_plan.md  M docs/reference/projects/71-00075-11/real_hardware_regression_checklist.md  m projects/71-00075-11 ?? .worktree/ ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_152857_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_154822_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_155756_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_161550_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_162137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_164205_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_165817_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260613_121137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4.1_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4_Task_Report.md"); subject worktree/agent diff stays separate (m projects/71-00075-11)

### warnings

- declaredValidationMode=compile-only but effectiveValidationMode=build-only; case task requested runtime validation steps.
- sourceRootBaselineStatus was dirty before prepare: M "docs/MDTODO/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210.md"  M docs/reference/projects/41-00426-20-Controller-Code/Slave_AC_Module/canopen_communication_usage.md  M docs/reference/projects/71-00075-11/control_algorithm_gap_closure_loopback_plan.md  M docs/reference/projects/71-00075-11/control_algorithm_implementation_plan.md  M docs/reference/projects/71-00075-11/current_implementation_acceptance_and_architecture.md  M docs/reference/projects/71-00075-11/original_spec_p0_p1_implementation_plan.md  M docs/reference/projects/71-00075-11/real_hardware_regression_checklist.md  m projects/71-00075-11 ?? .worktree/ ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_152857_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_154822_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_155756_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_161550_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_162137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_164205_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_165817_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260613_121137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4.1_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4_Task_Report.md"
- sourceRootAfterPrepareStatus matches baseline dirty state; prepare did not introduce this source-root diff.

### evidenceGaps

- requested step(s) not observed as completed in aggregate trace summary: spec-validate, inspect, build, job-status
- requested validation steps exist but no HWPOD command rows were found in local trace artifacts.

### nonBlockingIssues

_No nonBlockingIssues recorded._

### HWPOD 关键命令摘要

_No HWPOD command summary recorded._

## 运行环境信息

- apiUrl: http://74.48.78.17:19667
- compileOnly: true
- caseRepoRunDir: /root/hwlab-case-registry/runs/constart-71freq-build/constart-71freq-build-20260613130256-48770360
- sourceRunDir: /root/hwlab-v02/.state/hwlab-cli/caserun/constart-71freq-build-20260613130256-48770360
- createdAt: 2026-06-13T13:02:56.130Z
- completedAt: 2026-06-13T13:06:10.741Z
- runnerPostAgentCompileCheck: recorded

## HWPOD / 后置验证信息

- subjectRepoLocalPath: F:\Work\ConStart
- subjectCommitId: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
- subjectSubdir: projects/71-00075-11
- subjectWorktreePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613130256-48770360
- sourceRootBaselineStatus: M "docs/MDTODO/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210.md"  M docs/reference/projects/41-00426-20-Controller-Code/Slave_AC_Module/canopen_communication_usage.md  M docs/reference/projects/71-00075-11/control_algorithm_gap_closure_loopback_plan.md  M docs/reference/projects/71-00075-11/control_algorithm_implementation_plan.md  M docs/reference/projects/71-00075-11/current_implementation_acceptance_and_architecture.md  M docs/reference/projects/71-00075-11/original_spec_p0_p1_implementation_plan.md  M docs/reference/projects/71-00075-11/real_hardware_regression_checklist.md  m projects/71-00075-11 ?? .worktree/ ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_152857_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_154822_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_155756_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_161550_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_162137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_164205_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_165817_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260613_121137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4.1_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4_Task_Report.md"
- sourceRootAfterPrepareStatus: M "docs/MDTODO/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210.md"  M docs/reference/projects/41-00426-20-Controller-Code/Slave_AC_Module/canopen_communication_usage.md  M docs/reference/projects/71-00075-11/control_algorithm_gap_closure_loopback_plan.md  M docs/reference/projects/71-00075-11/control_algorithm_implementation_plan.md  M docs/reference/projects/71-00075-11/current_implementation_acceptance_and_architecture.md  M docs/reference/projects/71-00075-11/original_spec_p0_p1_implementation_plan.md  M docs/reference/projects/71-00075-11/real_hardware_regression_checklist.md  m projects/71-00075-11 ?? .worktree/ ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_152857_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_154822_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_155756_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_161550_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_162137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_164205_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260611_165817_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/20260613_121137_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4.1_Task_Report.md" ?? "docs/MDTODO/details/20260609_\351\242\221\347\216\207\345\210\244\346\226\255_\347\224\250\346\210\267\345\217\215\351\246\210/R4_Task_Report.md"
- postAgentCompileJobId: 20260613_210546_b27db23d
- runnerPostAgentCompileStatus: completed
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 4
- buildJobRelationship: runner-post-agent-check-only
- hwpodExitCode: 0
<details>
<summary>Run-local HWPOD spec</summary>

```yaml
apiVersion: hwlab.dev/v0alpha1
kind: Hwpod
metadata:
  uid: CONSTART-71FREQ-C
  name: constart-71freq-c
spec:
  targetDevice:
    board: 71-FREQ-C
    mcu: STM32H723ZGTx
  workspace:
    path: "F:\\Work\\ConStart\\.worktree\\caserun-constart-71freq-build-20260613130256-48770360"
    toolchain: keil-mdk
    keilProject: projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvprojx
    keilTarget: FREQ_Controller_FW
    keilCliPath: "C:\\Users\\liang\\.agents\\skills\\keil\\keil-cli.py"
  debugProbe:
    type: daplink
    adapter: pyocd
    probeUid: 3FD750C63E342E24
    probeName: MicroLink CMSIS-DAP
    programBackend: pyocd
    autoBindUvoptx: false
  ioProbe:
    uart:
      id: uart/1
      baudrate: 921600
    boardComm:
      host: 192.168.0.154
      port: 8000
  boardComm:
    jsonrpcTcp:
      host: 192.168.0.154
      port: 8000
      boardCommDir: "C:\\Users\\liang\\.agents\\skills\\board-comm"
      boardCommCommand: "py -3 board-comm-cli.py"
      timeoutMs: 30000
  nodeBinding:
    nodeId: node-d601-f103-v2
    nodeType: pc-host
```

</details>

## Code Agent 信息

- providerProfile: sub2api
- requestedProviderProfile: sub2api
- resolvedBackendProfile: sub2api
- provider: sub2api
- providerModel: sub2api
- backend: agentrun-v01/sub2api
- infrastructureBackend: agentrun-v01/sub2api
- providerTraceTransport: agentrun-v01
- providerTraceWireApi: agentrun-v01-command-result
- providerTraceSource: agentrun-v01
- providerTraceBackendProfile: sub2api
- providerTraceValuesPrinted: false
- projectId: prj_hwpod_workbench
- conversationId: cnv_case_constart-71freq-build_constart-71freq-build-20260613130256-48770360
- sessionId: ses_51c0b89c-1ea4-4cff-9e2d-12be4fb1bfbb
- traceId: trc_case_constart-71freq-build_59227d7358d0451b84966040dacde98c
- agentTerminalStatus: failed
- agentCommandStatus: failed
- traceSource: hwlab-cli.client.agent.trace
- traceCommand: hwlab-cli client agent trace trc_case_constart-71freq-build_59227d7358d0451b84966040dacde98c --render web
- resultCommand: hwlab-cli client agent result trc_case_constart-71freq-build_59227d7358d0451b84966040dacde98c
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_constart-71freq-build_59227d7358d0451b84966040dacde98c

## 输入 Prompt

```markdown
# HWPOD CaseRun 代码代理任务

caseId: constart-71freq-build
runId: constart-71freq-build-20260613130256-48770360
主体仓库路径: F:\Work\ConStart
主体提交ID: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
主体隔离工作区路径: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613130256-48770360
subjectWorkspacePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613130256-48770360
projectRoot: projects/71-00075-11
projectRootPath: F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613130256-48770360\projects\71-00075-11
defaultWorkspacePath: F:\Work\ConStart
submodules:
- projects/71-00075-11 @ 5ef2fc874782713d1e4752636a8db05cc4a18cd2 (https://github.com/ConstarInc/71-00075-11)
hwpodId: constart-71freq-c
HWPOD 参数串: --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-build-20260613130256-48770360"
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

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
- `hwpod job status <jobId>`

## 约束
- 思维过程和输出消息一律使用中文
- 只读，不修改 ConStart 或 71-FREQ 源码
- 必须以 mono repo 根作为 workspace，不能切换到 projects/71-00075-11 子模块根作为默认 workspace
- 如果 submodule 未初始化或 commit 不匹配，报告 blocker，不要改用原始 dirty checkout
- 本 case 只做编译，不下载、不串口、不 board-comm
- 只能在主体隔离工作区内完成任务，不得修改 case registry repo 或原 subject repo checkout。
- CaseRun subjectWorkspacePath 是本次任务唯一源码工作区；hwpod list/inspect 中的 defaultWorkspacePath 只是 HWPOD spec 默认值，不是当前 run 工作区。
- 如果 subjectWorkspacePath 不可访问，必须报告 blocker；不得切换到 defaultWorkspacePath 或原 subject repo checkout 继续完成任务。
- 工程根必须限定在 projects/71-00075-11；查找、写入中间件和定位 Keil 工程时优先从该目录开始，不要先假定 repo 根目录。
- 使用 HWPOD 标准入口读取、编辑和验证主体隔离工作区。
- 涉及第三方库、中间件、SDK、Pack/RTE 或 vendor source 的任务，必须集成真实上游源码、发布包、Pack/RTE 或已验证缓存；不得自写同名替代实现、mock/stub、API veneer 或 subset 伪装成该中间件。获取真实来源失败时必须报告 blocker，不得把替代实现当作成功。
- 第三方上游源码或 vendor source 必须通过 HWPOD cmd/git/Pack/RTE/已验证缓存/archive 在目标工作区真实物化；不得用 apply-patch、workspace write 或手工粘贴整文件内容重放上游源码。
- 可用 HWPOD 命令和 apply-patch 规则已经是本次任务的最小操作摘要；不要把读取 skill/reference 文档或工具源码当作固定前置步骤，只有任务正文明确要求或命令失败、参数不确定时才读取最小相关片段。
- 除非任务正文明确要求，否则只做 compile-only build check，不要下载，也不要运行 UART。

## 任务
本案例用于验证 ConStart mono repo + 71-FREQ submodule 的 CaseRun 接入。请只做只读检查和编译验证：确认 subjectWorkspacePath 是 F:\Work\ConStart 下的隔离 worktree，确认 projectRootPath 指向 projects/71-00075-11，确认该 submodule HEAD 是 5ef2fc874782713d1e4752636a8db05cc4a18cd2。然后运行 hwpod-ctl spec validate、hwpod inspect 和 hwpod build。不要修改源码，不要下载，不要访问串口或 board-comm。输出编译 job id、returnCode、warningCount 和关键 artifact 路径。
```

## 低噪声 Trace

- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows
- agentFinalBoundary: agent-authored-final-response; not-post-validation-verdict
- postValidationBoundary: runner-owned-post-agent-validation; separate-from-agent-final
- sourceEventCount: 42
- renderedRowCount: 26
- hwpodCommandCount: 0
- hwpodBuildCommandCount: 0

- **13:03:17  请求接受**

- **13:03:17 total=00:00:00 run agentrun:run:reuse-skipped**

```text
AgentRun run reuse was skipped because this request requires the CaseRun tools-only resource bundle.
```

- **13:03:18 total=00:00:00 run agentrun:run:created**

```text
AgentRun run run_07f6729641194ec7ae8524b190571e5e created through internal k3s Service DNS.
```

- **13:03:18 total=00:00:00 run agentrun:command:created**

```text
AgentRun command cmd_a8e45c8bbf254b64bf86bcd4508da27a created; hwlab-cloud-api will start a runner Job explicitly without relying on scheduler automation.
```

- **13:03:19 total=00:00:01 run agentrun:runner-job:created**

```text
AgentRun runner Job agentrun-v01-runner-b2aa6ea55da5 created in namespace agentrun-v01.
```

- **13:03:24 total=00:00:06 run agentrun:backend:runner-image-work-ready-smoke**

```text
runner-image-work-ready-smoke
```

- **13:03:24 total=00:00:06 run agentrun:backend:run-claimed**

```text
run-claimed
```

- **13:03:25 total=00:00:07 run agentrun:backend:resource-bundle-materialized**

```text
resource-bundle-materialized
```

- **13:03:25 total=00:00:07 run agentrun:backend:runner-bundle-work-ready-smoke**

```text
runner-bundle-work-ready-smoke
```

- **13:03:25 total=00:00:07 run agentrun:backend:backend-turn-started**

```text
backend-turn-started
```

- **13:03:25  会话就绪**

- **13:03:25 total=00:00:07 run agentrun:backend:codex-rollout-storage-mounted**

```text
codex-rollout-storage-mounted
```

- **13:03:25 total=00:00:07 run agentrun:backend:initial-prompt-assembly**

```text
initial-prompt-assembly
```

- **13:03:25 total=00:00:07 run agentrun:backend:active-turn-control-ready**

```text
active-turn-control-ready
```

- **13:03:57 total=00:00:39 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:04:12 total=00:00:54 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:04:28 total=00:01:10 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:04:44 total=00:01:26 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:06 total=00:01:48 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:09 total=00:01:51 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:12 total=00:01:54 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:18 total=00:02:00 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:23 total=00:02:05 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:29 total=00:02:12 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **13:05:29 total=00:02:12 fail agentrun:terminal:failed**

```text
stream disconnected before completion: error sending request for url (http://10.43.52.39:8080/v1/responses)
```

- **13:05:30 total=00:02:12 fail agentrun:result:failed**

```text
stream disconnected before completion: error sending request for url (http://10.43.52.39:8080/v1/responses)
```

## 最后 Diff

- statusShort: m projects/71-00075-11
- diffStat: projects/71-00075-11 | 0  1 file changed, 0 insertions(+), 0 deletions(-) projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvoptx | 6 +++---  1 file changed, 3 insertions(+), 3 deletions(-)
- diffSha256: d027f38e42b15080aa70f0407a6750c8b583f445340391c6a8ed87338d6e0328
- sourceRootChangedAfterPrepare: false
- sourceRootChangedAfterAgent: false
_No untracked diff collection entries._
```diff
diff --git a/projects/71-00075-11 b/projects/71-00075-11
--- a/projects/71-00075-11
+++ b/projects/71-00075-11
@@ -1 +1 @@
-Subproject commit 5ef2fc874782713d1e4752636a8db05cc4a18cd2
+Subproject commit 5ef2fc874782713d1e4752636a8db05cc4a18cd2-dirty
diff --git a/projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvoptx b/projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvoptx
index 10dc8ca..865b3d8 100644
--- a/projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvoptx
+++ b/projects/71-00075-11/FirmWare/MDK-ARM/FREQ_Controller_FW.uvoptx
@@ -75,7 +75,7 @@
       <OPTFL>
         <tvExp>1</tvExp>
         <tvExpOptDlg>0</tvExpOptDlg>
-        <IsCurrentTarget>0</IsCurrentTarget>
+        <IsCurrentTarget>1</IsCurrentTarget>
       </OPTFL>
       <CpuCode>18</CpuCode>
       <DebugOpt>
@@ -277,7 +277,7 @@
       <OPTFL>
         <tvExp>1</tvExp>
         <tvExpOptDlg>0</tvExpOptDlg>
-        <IsCurrentTarget>1</IsCurrentTarget>
+        <IsCurrentTarget>0</IsCurrentTarget>
       </OPTFL>
       <CpuCode>18</CpuCode>
       <DebugOpt>
@@ -342,7 +342,7 @@
         <SetRegEntry>
           <Number>0</Number>
           <Key>CMSIS_AGDI</Key>
-          <Name>-X"MicroLink CMSIS-DAP" -U3FD750C63E342E24 -O206 -S9 -C0 -P00000000 -N00("ARM CoreSight SW-DP") -D00(2BA01477) -L00(0) -TO65554 -TC10000000 -TT10000000 -TP20 -TDS8007 -TDT0 -TDC1F -TIEFFFFFFFF -TIP8 -FO15 -FD20000000 -FC8000 -FN1 -FF0STM32H72x-73x_1024.FLM -FS08000000 -FL0100000 -FP0($$Device:STM32H723ZGTx$CMSIS\Flash\STM32H72x-73x_1024.FLM)</Name>
+          <Name>-X"MicroLink CMSIS-DAP" -U3FD750C63E342E24 -O206 -S9 -C0 -P00000000 -N00("ARM CoreSight SW-DP") -D00(6BA02477) -L00(0) -TO65554 -TC10000000 -TT10000000 -TP20 -TDS8007 -TDT0 -TDC1F -TIEFFFFFFFF -TIP8 -FO15 -FD20000000 -FC8000 -FN1 -FF0STM32H72x-73x_1024.FLM -FS08000000 -FL0100000 -FP0($$Device:STM32H723ZGTx$CMSIS\Flash\STM32H72x-73x_1024.FLM)</Name>
         </SetRegEntry>
         <SetRegEntry>
           <Number>0</Number>
```

## 原始产物索引

| Path | Bytes | SHA-256 |
|---|---:|---|
| evidence.json | 65464 | 2c3710ed5d090bbb8f9465552dcabb68360948d520dbe3478e8eab2f1aabab5f |
| summary.md | 1806 | 7ccc6c307d8885a6ecc85b5b2d74b022ffad40e59fa5f8c5b5f913b403690a23 |
| aggregate.md | self-referential | self-referential |
| agent-messages.json | 9513 | c7eb8838fe1986631f073b605357a7cdefc8b4fcdf9a97f989524e026e9109e4 |
| agent-trace.md | 6495 | f3cb4573893dfb7328e88ad1a1c0c428cbe466ce8e627319454d9be52f751a05 |
| agent-transcript.md | 6495 | f3cb4573893dfb7328e88ad1a1c0c428cbe466ce8e627319454d9be52f751a05 |
| final-response.md | 1224 | 7dde545e5cbe25761a4e34e3d3fd9682c40968071b59a76a56fc64c343827c7b |
| run.json | 72596 | 4fbbfdc8fbc84bd00e9834e6e2eecf7e9f81486c2f015ea0a371d52259802683 |
| result.json | 10772 | fdb4d72682c1701edc1158a28c7c7b4441aed2911976a0bc2a015e8d1b6ea7a2 |
| agent-trace.json | 36551 | 371adcecaf6de3122df322a8c482d0865a9bd492679aeb0f3df94d7c6bdf0925 |
| agent-prompt.md | 4726 | 1a1c192918c92b3bba0710dc36bb564579e277dbc6c382f47003d7efedb335f1 |
| agent-diff.patch | 1986 | d027f38e42b15080aa70f0407a6750c8b583f445340391c6a8ed87338d6e0328 |
| .hwlab/hwpod-spec.yaml | 1061 | c0589cbaa93aca8724b24f5404f52359145863c6725b32d893356851f4eaf4b5 |
| worker.stdout.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |
| worker.stderr.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |

## 说明

本文件只做已完成 CaseRun registry 产物的二次整理聚合，不新增自动结论、门禁或等级。
