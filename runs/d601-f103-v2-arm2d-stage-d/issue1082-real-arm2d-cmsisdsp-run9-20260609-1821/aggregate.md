# HWPOD CaseRun Aggregate: d601-f103-v2-arm2d-stage-d

- caseId: d601-f103-v2-arm2d-stage-d
- runId: issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- generatedFrom: case registry artifacts
- aggregationOnly: true
- autoEvaluation: false
- primaryEntry: aggregate.md

## 状态解释与证据缺口

- declaredValidationMode: compile-only
- effectiveValidationMode: build-download-uart
- modeResolution: case-task-overrode-default-compile-only
- requestedValidationSteps: spec-validate, inspect, build, job-status, download, uart-read
- completedValidationSteps: spec-validate, inspect, build, job-status
- agentRunTerminalStatus: completed
- caseRunStatus: completed
- hwpodExitCodeSource: case-run-runner-post-agent-compile-check
- sourceRootDirtyAtPrepare: true
- dirtyAttribution: source-root dirty before prepare (M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx); subject worktree/agent diff stays separate (M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx  M projects/01_baseline/User/main.c ?? projects/01_baseline/Middlewares/Arm-2D/ ?? projects/01_baseline/Middlewares/CMSIS-DSP/ ?? projects/01_baseline/User/arm_2d_cfg.h ?? projects/01_baseline/User/d601_arm2d_demo.c ?? projects/01_baseline/User/d601_arm2d_demo.h)

### warnings

- declaredValidationMode=compile-only but effectiveValidationMode=build-download-uart; case task requested runtime validation steps.
- sourceRootBaselineStatus was dirty before prepare: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
- sourceRootAfterPrepareStatus matches baseline dirty state; prepare did not introduce this source-root diff.

### evidenceGaps

- requested step(s) not observed as completed in aggregate trace summary: download, uart-read
- hwpod-command-stdout-truncated: low-noise trace clipped at least one HWPOD stdout; this summary extracts command/exitCode/jobId/status fields, raw stdout remains in trace artifacts.

### nonBlockingIssues

_No nonBlockingIssues recorded._

### HWPOD 关键命令摘要

| Step | Status | Job ID | Return Code | Warning Count | Exit Code | Evidence |
|---|---|---|---:|---:|---:|---|
| spec-validate | completed |  |  |  | 0 | command=hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821 stdout=truncated |
| inspect | completed |  |  |  | 0 | command=hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821 stdout=truncated |
| inspect | ok |  |  |  |  | command=HWPOD inspect 显示 Windows 节点和隔离工作区都可用。Arm-2D skill 的关键约束和任务一致：真实上游源码、Keil 工程同步、不要� ... clipped ... |
| build | completed |  |  |  | 0 | command=hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821 stdout=truncated |
| job-status | completed | 20260610_023312_6a39b39e |  |  | 1 | command=hwpod job status 20260610_023312_6a39b39e --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9 ... clipped ... stdout=truncated |
| build | completed |  |  |  | 0 | command=hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821 stdout=truncated |
| job-status | completed | 20260610_023420_e74921a8 |  |  | 0 | command=hwpod job status 20260610_023420_e74921a8 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9 ... clipped ... stdout=truncated |

## 运行环境信息

- apiUrl: http://74.48.78.17:19667
- compileOnly: true
- caseRepoRunDir: /root/hwlab-case-registry/runs/d601-f103-v2-arm2d-stage-d/issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- sourceRunDir: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- createdAt: 2026-06-09T18:20:58.513Z
- completedAt: 2026-06-09T18:35:14.881Z
- runnerPostAgentCompileCheck: recorded

## HWPOD 信息

- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectSubdir: projects/01_baseline
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- sourceRootBaselineStatus: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
- sourceRootAfterPrepareStatus: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
- agentBuildJobIds: 20260610_023312_6a39b39e, 20260610_023420_e74921a8
- agentReportedBuildJobId: 20260610_023312_6a39b39e
- agentReportedReturnCode: 0
- postAgentCompileJobId: 20260610_023507_54c2bb24
- runnerPostAgentCompileStatus: completed
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- hwpodExitCode: 0
<details>
<summary>Run-local HWPOD spec</summary>

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
    path: "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
    toolchain: keil-mdk
    keilProject: projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
    keilTarget: USART
    keilCliPath: "C:\\Users\\liang\\.agents\\skills\\keil\\keil-cli.py"
  debugProbe:
    type: daplink
    adapter: keil
    probeUid: 95FFF39D3DB47E0D
    probeName: MicroKeenV4 CMSIS-DAP
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
- conversationId: cnv_case_d601-f103-v2-arm2d-stage-d_issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- sessionId: ses_20cb841b-1403-4346-bea6-70598ba0264f
- traceId: trc_case_d601-f103-v2-arm2d-stage-d_894423a3c94c4d96869d0176ce7eecd6
- traceSource: hwlab-cli.client.agent.trace
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_894423a3c94c4d96869d0176ce7eecd6 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_894423a3c94c4d96869d0176ce7eecd6
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_894423a3c94c4d96869d0176ce7eecd6

## 输入 Prompt

```markdown
# HWPOD CaseRun 代码代理任务

caseId: d601-f103-v2-arm2d-stage-d
runId: issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
主体仓库路径: F:\Work\HWLAB-CASE-F103
主体提交ID: 76bce7c2d73b687473223bbbdebc7d69124ebac6
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
subjectWorkspacePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
projectRoot: projects/01_baseline
projectRootPath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821\projects\01_baseline
defaultWorkspacePath: F:\Work\HWLAB-CASE-F103
hwpodId: d601-f103-v2
HWPOD 参数串: --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
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
- 只允许修改主体隔离工作区，不得修改 case registry repo、HWLAB repo 或原 subject repo checkout
- arm2d-skill 必须来自 AgentRun gitbundle 装配的 .agents/skills/arm2d-skill，不得复制或新增到 subject repo 的 .agents/skills 下
- subject 裸基线不包含 Arm-2D 源码；必须从 ARM-software Arm-2D upstream、官方发布包、CMSIS-Pack/RTE 或目标节点已验证缓存取得真实源码/组件，并在最终回复说明 provenance
- 允许用 sparse checkout、filter clone、archive path、Pack/RTE 组件或最小必要文件清单降低体积；复制到 subject 的 upstream source 文件必须保持原始内容，板级配置、display port、demo 和 adapter 放在 project-local 文件中
- 禁止自写同名替代实现、mock/stub、API veneer 或 subset 冒充 Arm-2D；禁止把只读取 upstream metadata/tag 当作已经集成；真实来源获取或集成失败时必须报告 blocker
- 若真实 Arm-2D 编译需要 arm_math.h/CMSIS-DSP，必须从 ARM-software/CMSIS-DSP、官方 CMSIS-Pack/RTE 或目标节点已验证缓存取得真实 CMSIS-DSP 依赖并记录 provenance；禁止使用 Arm-2D PC 示例 platform/math/arm_math.h、手写 arm_math.h 或最小 stub 冒充 CMSIS-DSP
- 若使用目标节点 CMSIS-DSP Pack/RTE，不能只复制 Include/PrivateInclude；必须把实际参与链接的真实 Source 文件物化到 subject 并加入 Keil uvprojx。本 case 至少需要 Source/FastMathFunctions/arm_sin_f32.c、arm_sin_q31.c、arm_cos_f32.c、arm_cos_q31.c 和 Source/CommonTables/arm_common_tables.c 来满足 Arm-2D transform 对 CMSIS-DSP 的真实依赖
- 所有 project-local 文本修改必须通过 HWPOD workspace apply-patch 或等价 HWPOD workspace 写入入口完成，不得从 Linux runner 直接 cd 到 Windows 路径编辑；第三方 upstream/vendor source 物化必须通过 HWPOD cmd/git/archive/Pack/RTE/已验证缓存，不得用 apply-patch 或 workspace write 重写源码
- 必须更新 Keil uvprojx；新增 C 源文件后不能只改源文件而漏掉 Keil 工程
- 必须尝试 hwpod build、hwpod download 和 hwpod uart read 原入口命令，并保留原始错误或 job id
- UART 输出必须包含本次 runId 和 Arm-2D 真实来源 tag/ref，避免旧串口输出或伪实现混淆
- UART 的 Arm-2D provenance 行必须包含 ARM-software/Arm-2D、tag/ref 和 commit，CMSIS-DSP provenance 行必须包含实际 Pack/RTE 或 upstream 版本，避免只输出泛化 ARM2D 字样
- 结果只作为 raw trace/evidence 记录，不做自动评价或自动门禁
- 执行面必须优先采用最小真实源码路径：Arm-2D Library/Include、Library/Source 中适用于 Cortex-M3 的 C 源文件、本地 arm_2d_cfg.h、项目 demo/glue；不要为了本 case 接入 examples/demos/Helper/PFB/PC platform 大目录
- 首次写入前不要进行大范围探索；完成 HWPOD spec/inspect、Arm-2D tag 核对、CMSIS-DSP Pack 存在性核对和必要 API/uvprojx 上下文读取后，应先写 project-local glue/uvprojx，再通过 build 错误增量补缺失文件
- Keil 工程至少应包含真实 CMSIS-DSP Source/FastMathFunctions 的 arm_sin_f32.c、arm_sin_q31.c、arm_cos_f32.c、arm_cos_q31.c 和 Source/CommonTables/arm_common_tables.c；这些不能只留在 Pack 路径或 Include 目录中
- 只能在主体隔离工作区内完成任务，不得修改 case registry repo 或原 subject repo checkout。
- CaseRun subjectWorkspacePath 是本次任务唯一源码工作区；hwpod list/inspect 中的 defaultWorkspacePath 只是 HWPOD spec 默认值，不是当前 run 工作区。
- 如果 subjectWorkspacePath 不可访问，必须报告 blocker；不得切换到 defaultWorkspacePath 或原 subject repo checkout 继续完成任务。
- 工程根必须限定在 projects/01_baseline；查找、写入中间件和定位 Keil 工程时优先从该目录开始，不要先假定 repo 根目录。
- 使用 HWPOD 标准入口读取、编辑和验证主体隔离工作区。
- 涉及第三方库、中间件、SDK、Pack/RTE 或 vendor source 的任务，必须集成真实上游源码、发布包、Pack/RTE 或已验证缓存；不得自写同名替代实现、mock/stub、API veneer 或 subset 伪装成该中间件。获取真实来源失败时必须报告 blocker，不得把替代实现当作成功。
- 第三方上游源码或 vendor source 必须通过 HWPOD cmd/git/Pack/RTE/已验证缓存/archive 在目标工作区真实物化；不得用 apply-patch、workspace write 或手工粘贴整文件内容重放上游源码。
- 可用 HWPOD 命令和 apply-patch 规则已经是本次任务的最小操作摘要；不要把读取 skill/reference 文档或工具源码当作固定前置步骤，只有任务正文明确要求或命令失败、参数不确定时才读取最小相关片段。
- 除非任务正文明确要求，否则只做 compile-only build check，不要下载，也不要运行 UART。

## 任务
请在隔离主体工作区中完成 D601-F103-V2 Arm2D 阶段D：从裸基线真实集成 Arm-2D 中间件源码，并用真实 build、download、UART 运行态证据收口。

任务背景：当前 subject commit 是裸基线，已经不包含 subject repo 内置的 .agents/skills/arm2d-skill、Middlewares/Arm-2D、d601_arm2d_demo.c/.h 或 Keil Arm2D 工程项。Arm2D skill 由 CaseRun/AgentRun gitbundle 提供在 runner 的 .agents/skills/arm2d-skill；不要把 skill 目录复制进 subject repo。

真实性底线：本 case 验收的是“真实已有 Arm-2D 中间件集成”，不是同名 API 替代层。必须从 ARM-software Arm-2D upstream、官方发布包、CMSIS-Pack/RTE 或目标节点已验证缓存取得真实源码/组件。首选官方仓库 https://github.com/ARM-software/Arm-2D.git 的受控 tag/ref；本次优先使用 tag v1.2.4（目标 Windows host 已验证 refs/tags/v1.2.4 tag object=deda1c31efa35f5b0b3cfc3ef44a04110983ceca，peeled commit refs/tags/v1.2.4^{}=b73ec43b6567feffe57642861e8b5eb083788011）。可以用 sparse checkout、filter clone、archive path、Pack/RTE 组件或最小必要文件清单降低体积，但 copied upstream source 必须保持原始内容。工程本地配置、display port、demo、adapter、board glue 可以新增在 project-local 位置；不要改写 upstream source 文件来适配板级代码。禁止通过 apply-patch/workspace write 手工粘贴或整文件重写 Arm-2D upstream 源码；上游文件必须由 HWPOD cmd/git/archive/Pack/RTE/已验证缓存在目标工作区真实物化，并记录 hash/ref。

执行收敛要求：本 case 已经确认 Cortex-M3/USART target 不需要 Arm-2D examples、Helper scene、PFB 或 PC 示例平台。为避免 20 分钟 turn 被大范围探索耗尽，集成时只走最小真实源码路径：Arm-2D 使用官方 v1.2.4 checkout/export 后的 Library/Include、Library/Source 中适用于 Cortex-M3 的 C 源文件和本地 arm_2d_cfg.h；CMSIS-DSP 使用目标节点已验证 Pack/RTE 1.14.2 的 Include、PrivateInclude，以及真实 Source/FastMathFunctions/arm_sin_f32.c、arm_sin_q31.c、arm_cos_f32.c、arm_cos_q31.c、Source/CommonTables/arm_common_tables.c。不要遍历或接入 Arm-2D examples/demos/Helper 大目录；除非首次编译错误明确指向缺失文件，否则不要扩大源码范围。

任务目标：
1. 通过 HWPOD 标准入口操作主体隔离工作区，必要时读取 .agents/skills/arm2d-skill/SKILL.md 和最小相关 reference，理解 Arm2D/Keil/PFB 接入约束。
2. 获取真实 Arm-2D upstream/Pack/RTE 源码或组件，把必要真实文件加入 projects/01_baseline 的合适位置；首选通过 `hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 refs/tags/v1.2.4^{}` 先核对 tag object 和 peeled commit，再用 HWPOD cmd 在目标 Windows host 内 clone/archive/checkout-index/export 到 projectRoot 下，避免把 .git 目录留在 subject 源码树中；记录来源 URL、tag/ref/version、获取方式、文件清单、tag object SHA 和 peeled commit SHA。若真实来源不可获取或无法集成，停止并报告 blocker，不要提交替代实现。
3. 修改 Keil 工程 projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx，把真实 Arm2D 源码、include path、本地配置和应用 glue 纳入 USART target。
4. 新增或恢复应用层 demo 文件，并修改 main.c 接入 show/task 路径。demo 至少要通过 Arm-2D API/LCD 绘制可辨识的 RGB565 画面，并在 loop 中维护帧计数或心跳。
5. 在 UART 中输出可采集的运行态证据：启动标记、runId、Arm-2D 来源 tag/ref、loop heartbeat、frame counter，以及 LCD/framebuffer/cache 或 tile dump 摘要。串口单行不要过长，可拆成多行 printf。
6. 依次运行 hwpod-ctl spec validate、hwpod inspect、hwpod build、hwpod job status、hwpod download、hwpod job status、hwpod uart read --port uart1 --max-bytes 8192。若 download 返回 job id，必须轮询 job status 到终态或报告仍在 running 的具体 job id。
7. 最终回报：Arm2D 真实源码来源、复制的 upstream 文件清单和本地 glue 文件清单、Keil 工程变更摘要、build/download job id 与终态、UART 原始尾部、LCD/framebuffer/cache dump 摘要，以及仍需人工关注的问题。
```

## 低噪声 Trace

- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows
- sourceEventCount: 362
- renderedRowCount: 100
- hwpodCommandCount: 44
- hwpodBuildCommandCount: 2

- **18:21:06  请求接受**

- **18:21:06 total=00:00:00 run agentrun:run:reuse-skipped**

```text
AgentRun run reuse was skipped because this request requires the CaseRun caserun-with-skills resource bundle.
```

- **18:21:06 total=00:00:00 run agentrun:run:created**

```text
AgentRun run run_2d3bb61162ff4ca7b2dc0c50ae2ff81c created through internal k3s Service DNS.
```

- **18:21:06 total=00:00:00 run agentrun:command:created**

```text
AgentRun command cmd_0bc8f8df830c49d486bda85a4bc3b2d7 created; hwlab-cloud-api will start a runner Job explicitly without relying on scheduler automation.
```

- **18:21:07 total=00:00:00 run agentrun:runner-job:created**

```text
AgentRun runner Job agentrun-v01-runner-2aac7dd1717e created in namespace agentrun-v01.
```

- **18:21:10 total=00:00:04 run agentrun:backend:run-claimed**

```text
run-claimed
```

- **18:21:11 total=00:00:05 run agentrun:backend:resource-bundle-materialized**

```text
resource-bundle-materialized
```

- **18:21:11 total=00:00:05 run agentrun:backend:backend-turn-started**

```text
backend-turn-started
```

- **18:21:11  会话就绪**

- **18:21:11 total=00:00:05 run agentrun:backend:codex-rollout-storage-mounted**

```text
codex-rollout-storage-mounted
```

- **18:21:11 total=00:00:05 run agentrun:backend:initial-prompt-assembly**

```text
initial-prompt-assembly
```

- **18:21:11 total=00:00:05 run agentrun:backend:active-turn-control-ready**

```text
active-turn-control-ready
```

- **18:21:12 total=00:00:06 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **18:21:14 total=00:00:07 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **18:21:15 total=00:00:08 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **18:21:16 total=00:00:10 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **18:21:30  助手消息**

我会按 HWPOD 入口操作这个隔离工作区，并使用本次挂载的 `hwpod-ctl`、`hwpod-cli`、`arm2d-skill` 约束；先做 spec 校验，再读取最小工程上下文。

- <details>
  <summary>已运行 hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F1...</summary>

  ```text
  hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-H...
  exitCode=0
  durationMs=0
  outputBytes=2976
  sourceSeq=24
  rowId: tool:call_jsueSyCxhD0PkeVOQ2ltWHTu
  ```

  </details>

- **18:21:44  助手消息**

Spec 已确认工作区绑定到本次 `caserun` 隔离路径。接下来我会核对 HWPOD 可见状态、Arm-2D tag，以及只读取 Arm-2D skill 里和 Keil/源码接入有关的最小说明。

- <details>
  <summary>已运行 sed -n '1,220p' .agents/skills/arm2d-skill/SKILL.md</summary>

  ```text
  sed -n '1,220p' .agents/skills/arm2d-skill/SKILL.md
  stdout:
  --- name: arm2d-skyer description: 用于 ARM-2D 嵌入式 UI 开发工作：scene/PFB/generic loader/dirty region/RGB565 资源、GIF 精灵图与动画资源链路、Keil MDK/RTE/显示适配器集成、SRAM/Flash/帧率权衡，以及在 MCU 上实现伪 shader/demo-scene 特效。 --- # ARM-2D 嵌入式 UI 工作流 这是一个通用 ARM-2D 嵌入式 UI 技能。核心目标不是写通用教程，而是让助手按可移植、可维护、贴合硬件约束的方式处理 ARM-2D 工程。 ## 默认背景 - 常用语言：C。 - 常用图形栈：ARM-2D、PFB、Scene Player、Generic Loader。 - 常见工程环境：Keil MDK、CMSIS-Pack/RTE、RTOS 或裸机工程。 - 常见显示链路：LCD/OLED/RGB/MIPI/Framebuffer、SPI/QSPI/8080/LTDC 等显示接口。 - 常见像素格式：RGB565、RGB888、ARGB8888。 - 常见任务：动态 UI、GIF/动画素材、局部刷新、低 RAM 渲染、伪 shader 特效。 ## 总原则 - 优先写能在目标 MCU 上稳定跑起来的代码，不追求理论优雅。 - 每次涉及动画/特...
  exitCode=0
  durationMs=0
  outputBytes=7283
  outputTruncated=true
  sourceSeq=27
  rowId: tool:call_kRd3bRQIpBcTi8hOhsQsxZqB
  ```

  </details>

- <details>
  <summary>已运行 hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktr...</summary>

  ```text
  hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=442
  outputBytes=4068
  outputTruncated=true
  sourceSeq=31
  rowId: tool:call_3iSnV68o63lPomnVYSqsXodB
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 're...</summary>

  ```text
  hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 'refs/tags/v1.2.4"'^{}'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=2049
  outputBytes=4322
  outputTruncated=true
  sourceSeq=33
  rowId: tool:call_AbzEP5x3KuGGC37PEhZMJfhd
  ```

  </details>

- **18:21:52  助手消息**

HWPOD inspect 显示 Windows 节点和隔离工作区都可用。Arm-2D skill 的关键约束和任务一致：真实上游源码、Keil 工程同步、不要改写官方源码。

- **18:22:07  助手消息**

Arm-2D v1.2.4 tag 已在目标 Windows host 核对：tag object `deda1c31...`，peeled commit `b73ec43...`，和任务给定值一致。下一步我读取基线工程、Keil 工程和 `main.c` 的最小上下文，然后在目标 host 内物化上游源码。

- <details>
  <summary>已运行 hwpod workspace --help --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F10...</summary>

  ```text
  hwpod workspace --help --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": null, "applyPatchExample": "cat > /tmp/hwpod.patch <<'PATCH'\n*** Begin Patch\n*** Update File: projects/01_baseline/User/main.c\n@@\n #include \"d601_lcd.h\"\n+#include \"d601_arm2d_demo.h\"\n \n int main(void)\n@@\n d601_lcd_init();\n+ d601_arm2d_demo_show();\n*** End Patch\nPATCH\ncat /tmp/hwpod.patch | hwpod workspace apply-patch --reason \"edit subject workspace through hwpod-node\"", "applyPatchRules": [ "Use a multi-line Codex/UniDes...
  exitCode=0
  durationMs=0
  outputBytes=2864
  sourceSeq=37
  rowId: tool:call_PGCNERUrBa2zGgSSf449UEdg
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command "Get-ChildItem -Recurse -Filter *.uvprojx proj...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command "Get-ChildItem -Recurse -Filter *.uvprojx projects/01_baseline/Projects/MDK-ARM | Select-Object FullName; Get-ChildItem -Recurse -Filter main.c projects/01_baseline | Select-Object FullName" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=809
  outputBytes=4445
  outputTruncated=true
  sourceSeq=42
  rowId: tool:call_LRx2VQRXfvuSLEsOy7VpmGWs
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command "Get-ChildItem -Force projects/01_baseline | S...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command "Get-ChildItem -Force projects/01_baseline | Select-Object Mode,Length,Name; Get-ChildItem -Recurse -File projects/01_baseline/User,projects/01_baseline/Core,projects/01_baseline/Hardware -ErrorAction SilentlyContinue | Select-Object -First 80 FullName" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=876
  outputBytes=4508
  outputTruncated=true
  sourceSeq=43
  rowId: tool:call_ncOF6PMAgHs3yRVWbjM6ESFK
  ```

  </details>

- **18:22:23  助手消息**

`hwpod workspace` 支持 `cat/rg/ls/apply-patch`，我会用它来读改项目文本。当前工程根已有 `Drivers/Middlewares/Projects/User`，但还是裸基线，需要补真实 Arm-2D 和 CMSIS-DSP 源码。

- <details>
  <summary>已运行 hwpod workspace ls projects/01_baseline/Hardware --recursive --max-entries 300 --hwpod-...</summary>

  ```text
  hwpod workspace ls projects/01_baseline/Hardware --recursive --max-entries 300 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", "r...
  exitCode=1
  durationMs=502
  outputBytes=4177
  outputTruncated=true
  sourceSeq=65
  rowId: tool:call_gGLFyOy3rshCaptuHMgxguaW
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace ls projects/01_baseline/User --recursive --max-entries 200 --hwpod-id d...</summary>

  ```text
  hwpod workspace ls projects/01_baseline/User --recursive --max-entries 200 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=518
  outputBytes=4286
  outputTruncated=true
  sourceSeq=66
  rowId: tool:call_OGvUuvEan5D3wPauGYioYmVu
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg -e "d601_lcd|LCD|printf|USART|frame|main\(" projects/01_baseline/Use...</summary>

  ```text
  hwpod workspace rg -e "d601_lcd|LCD|printf|USART|frame|main\(" projects/01_baseline/User projects/01_baseline/Hardware --context 2 --max-matches 80 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=576
  outputBytes=4362
  outputTruncated=true
  sourceSeq=67
  rowId: tool:call_DPGqbpvWEDuJsKs4fCQuPITb
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/Projects/MDK-...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=565
  outputBytes=4319
  outputTruncated=true
  sourceSeq=68
  rowId: tool:call_DrKTQR186XrL82tMN9vjFRGX
  ```

  </details>

- **18:22:46  助手消息**

我已经确认 `main.c` 和 Keil `USART` target 的裸基线形态：只有本地 LCD/JSON-RPC/USART 文件，include path 目前只到 `Middlewares`。现在先在目标 Windows host 内检查 CMSIS-DSP 1.14.2 Pack/RTE 实际路径，再导出 Arm-2D v1.2.4 的 `Library` 最小源码。

- <details>
  <summary>已运行 hwpod workspace ls projects/01_baseline/Middlewares --recursive --max-entries 200 --hwp...</summary>

  ```text
  hwpod workspace ls projects/01_baseline/Middlewares --recursive --max-entries 200 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=440
  outputBytes=4293
  outputTruncated=true
  sourceSeq=77
  rowId: tool:call_gVEgXGdXkHcRJ1Uko0NnMaUK
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_lcd.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=431
  outputBytes=4305
  outputTruncated=true
  sourceSeq=78
  rowId: tool:call_IBDqr4kiqVKgS8oMJNY0O5HY
  ```

  </details>

- <details>
  <summary>已运行 'hwpod cmd powershell -NoProfile -Command "$paths=@('"'C:\Users\liang\AppData\Local\Arm...</summary>

  ```text
  'hwpod cmd powershell -NoProfile -Command "$paths=@('"'C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2','C:\Users\liang\AppData\Local\Keil_v5\ARM\PACK\ARM\CMSIS-DSP\1.14.2','C:\Keil_v5\ARM\PACK\ARM\CMSIS-DSP\1.14.2','C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS\5.9.0','C:\Users\liang\AppData\Local\Keil_v5\ARM\PACK\ARM\CMSIS\5.9.0'); foreach("'$p in $paths){ if(Test-Path $p){ Write-Output '"\"FOUND "'$p'"\"; Get-ChildItem -Force "'$p | Select-Object Mode,Name | Format-Table -AutoSize } else { Write-Output '"\"MISS "'$p'"\" } }" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821""
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", "r...
  exitCode=1
  durationMs=747
  outputBytes=4809
  outputTruncated=true
  sourceSeq=80
  rowId: tool:call_s4l78zO8rDWnhDLVD2pp2mg9
  ```

  </details>

- **18:23:01  助手消息**

刚才 CMSIS-DSP 路径检查命令被本地 shell 展开了 `$paths`，不是目标侧问题。我会用单引号重跑，避免变量被 runner 提前吞掉。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$paths=@("C:'"\Users\liang\AppData\Local\Ar...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$paths=@("C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2","C:\Users\liang\AppData\Local\Keil_v5\ARM\PACK\ARM\CMSIS-DSP\1.14.2","C:\Keil_v5\ARM\PACK\ARM\CMSIS-DSP\1.14.2","C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS\5.9.0","C:\Users\liang\AppData\Local\Keil_v5\ARM\PACK\ARM\CMSIS\5.9.0"); foreach("'$p in $paths){ if(Test-Path $p){ Write-Output "FOUND $p"; Get-ChildItem -Force $p | Select-Object Mode,Name | Format-Table -AutoSize } else { Write-Output "MISS $p" } }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=734
  outputBytes=4798
  outputTruncated=true
  sourceSeq=84
  rowId: tool:call_W36iqAfTwz3rDFv3OqzqkocR
  ```

  </details>

- **18:23:17  助手消息**

CMSIS-DSP Pack 已在目标节点确认：`C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2`，包含 `Include/PrivateInclude/Source`。我现在会只从这个 Pack 复制任务要求的真实 DSP 源码文件，并从 Arm-2D upstream 导出 `Library`。

- <details>
  <summary>已运行 sourceSeq=87</summary>

  ```text
  sourceSeq=87
  rowId: tool:92
  ```

  </details>

- <details>
  <summary>已运行 "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-...</summary>

  ```text
  "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-Location).Path; $tmp=Join-Path $env:TEMP "arm2d-v1.2.4-d601-run9"; if(Test-Path $tmp){Remove-Item -Recurse -Force $tmp}; git clone --filter=blob:none --sparse https://github.com/ARM-software/Arm-2D.git $tmp; Set-Location $tmp; git sparse-checkout set Library; git checkout --detach b73ec43b6567feffe57642861e8b5eb083788011; $dst=Join-Path $root "projects'"\01_baseline\Middlewares\Arm-2D"; if(Test-Path "'$dst){Remove-Item -Recurse -Force $dst}; New-Item -ItemType Directory -Force $dst | Out-Null; Copy-Item -Recurse -Force (Join-Path $tmp "Library") $dst; Set-Location $root; $sha=(git -C $tmp rev-parse HEAD); Write-Output "ARM2D_EXPORT $dst"; Write-Output "ARM2D_COMMIT $sha"; Get-ChildItem -Recurse -File (Join-Path $dst "Library") | Select-Object @{Name="Rel";Expression={$_.FullName.Subs...
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=12860
  outputBytes=5156
  outputTruncated=true
  sourceSeq=91
  rowId: tool:call_ID6MyohZmZCivbS4xPpG40uF
  ```

  </details>

- **18:23:48  助手消息**

Arm-2D 导出命令还在目标节点执行，当前看起来处在 clone/checkout 阶段。我会等它完成后再动项目本地文件。

- **18:23:58  助手消息**

Arm-2D `Library` 已从 upstream v1.2.4 commit `b73ec43...` 导出到 subject 的 `Middlewares/Arm-2D`，没有把 `.git` 留进源码树。接下来复制 CMSIS-DSP Pack 1.14.2 的 include、private include 和任务指定的 5 个真实 C 源文件。

- <details>
  <summary>已运行 "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-...</summary>

  ```text
  "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-Location).Path; $src="C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2"; if("'!(Test-Path $src)){ throw "CMSIS-DSP Pack 1.14.2 not found: $src" }; $dst=Join-Path $root "projects'"\01_baseline\Middlewares\CMSIS-DSP"; if(Test-Path "'$dst){Remove-Item -Recurse -Force $dst}; New-Item -ItemType Directory -Force $dst | Out-Null; Copy-Item -Recurse -Force (Join-Path $src "Include") $dst; Copy-Item -Recurse -Force (Join-Path $src "PrivateInclude") $dst; $files=@("Source'"\FastMathFunctions\arm_sin_f32.c","Source\FastMathFunctions\arm_sin_q31.c","Source\FastMathFunctions\arm_cos_f32.c","Source\FastMathFunctions\arm_cos_q31.c","Source\CommonTables\arm_common_tables.c"); foreach("'$f in $files){ $from=Join-Path $src $f; if(!(Test-Path $from)){ throw "mi...
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", "r...
  exitCode=1
  durationMs=436
  outputBytes=5659
  outputTruncated=true
  sourceSeq=97
  rowId: tool:call_era2FZuxkD8Tk6kbVrxgXmKA
  ```

  </details>

- **18:24:29  助手消息**

CMSIS-DSP 复制命令在节点侧报了 `ENOTCONN: socket is not connected`，看起来是命令执行通道问题，不是源码缺失。我会先检查目标目录是否已经部分生成，再用更短输出的命令重试/补齐。

- <details>
  <summary>已运行 hwpod workspace ls projects/01_baseline/Middlewares/CMSIS-DSP --recursive --max-entries...</summary>

  ```text
  hwpod workspace ls projects/01_baseline/Middlewares/CMSIS-DSP --recursive --max-entries 80 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", "r...
  exitCode=1
  durationMs=454
  outputBytes=4229
  outputTruncated=true
  sourceSeq=102
  rowId: tool:call_wVxQyX1qI5GcVMxjcSRnBxr1
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-L...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-Location).Path; $src="C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2"; "'$dst=Join-Path $root "projects'"\01_baseline\Middlewares\CMSIS-DSP"; "'$need=@("Include'"\arm_math.h","PrivateInclude\dsp\none.h","Source\FastMathFunctions\arm_sin_f32.c","Source\FastMathFunctions\arm_sin_q31.c","Source\FastMathFunctions\arm_cos_f32.c","Source\FastMathFunctions\arm_cos_q31.c","Source\CommonTables\arm_common_tables.c"); foreach("'$n in $need){ $p=Join-Path $dst $n; Write-Output ("{0} {1}" -f (Test-Path $p),$n) }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=731
  outputBytes=4860
  outputTruncated=true
  sourceSeq=104
  rowId: tool:call_RsNSPS57FDVWi8dTUjNxQCK6
  ```

  </details>

- **18:26:35  助手消息**

CMSIS-DSP 目标目录尚未生成。我会分两步复制，减少单次节点命令长度和输出量。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-L...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-Location).Path; $src="C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2"; "'$dst=Join-Path $root "projects'"\01_baseline\Middlewares\CMSIS-DSP"; if(Test-Path "'$dst){Remove-Item -Recurse -Force $dst}; New-Item -ItemType Directory -Force $dst | Out-Null; Copy-Item -Recurse -Force (Join-Path $src "Include") $dst; Copy-Item -Recurse -Force (Join-Path $src "PrivateInclude") $dst; Copy-Item -Force (Join-Path $src "ARM.CMSIS-DSP.sha1") $dst; Copy-Item -Force (Join-Path $src "ARM.CMSIS-DSP.pdsc") $dst; Copy-Item -Force (Join-Path $src "LICENSE.txt") $dst; Write-Output "CMSIS_DSP_HEADERS_OK"'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1155
  outputBytes=4918
  outputTruncated=true
  sourceSeq=108
  rowId: tool:call_Yt5oDUdVCp1XXEfnMozi6pcr
  ```

  </details>

- **18:26:46  助手消息**

CMSIS-DSP headers/private headers 已复制完成；现在补复制 5 个会参与链接的 DSP source 文件。

- <details>
  <summary>已运行 "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-...</summary>

  ```text
  "hwpod cmd powershell -NoProfile -Command '"'$ErrorActionPreference="Stop"; $root=(Get-Location).Path; $src="C:'"\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2"; "'$dst=Join-Path $root "projects'"\01_baseline\Middlewares\CMSIS-DSP"; "'$files=@("Source'"\FastMathFunctions\arm_sin_f32.c","Source\FastMathFunctions\arm_sin_q31.c","Source\FastMathFunctions\arm_cos_f32.c","Source\FastMathFunctions\arm_cos_q31.c","Source\CommonTables\arm_common_tables.c"); foreach("'$f in $files){ $from=Join-Path $src $f; $to=Join-Path $dst $f; New-Item -ItemType Directory -Force (Split-Path $to) | Out-Null; Copy-Item -Force $from $to }; Write-Output "CMSIS_DSP_SOURCES_OK"; foreach($f in $files){ $p=Join-Path $dst $f; Write-Output "$f $((Get-Item $p).Length)" }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-i...
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=788
  outputBytes=5005
  outputTruncated=true
  sourceSeq=112
  rowId: tool:call_oWytu3M6iOosbbbvEt30Wqce
  ```

  </details>

- **18:27:09  助手消息**

现在第三方源码已经物化：Arm-2D `Library` 和 CMSIS-DSP Pack 源码都在 subject 工作区中。接下来我会按实际头文件确认可用 API，然后用 project-local demo/glue 接 LCD，不修改 upstream 文件。

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h pr...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1053
  outputBytes=4446
  outputTruncated=true
  sourceSeq=165
  rowId: tool:call_NVNn7JjpCTylErV73fgVo7od
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg -e "arm_2d_init|arm_2d_fill|fill_colour|tile|__arm_2d_impl|arm_2d_op...</summary>

  ```text
  hwpod workspace rg -e "arm_2d_init|arm_2d_fill|fill_colour|tile|__arm_2d_impl|arm_2d_op_wait|arm_2d_rgb16|ARM_2D_CFG" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/Middlewares/Arm-2D/Library/Source --context 2 --max-matches 120 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1164
  outputBytes=4473
  outputTruncated=true
  sourceSeq=166
  rowId: tool:call_UvwftPdNQSzyFIF4x12aVVpY
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg -e "arm_sin|arm_cos|arm_math|ARM_MATH_CM3|ARM_MATH_LOOPUNROLL" proje...</summary>

  ```text
  hwpod workspace rg -e "arm_sin|arm_cos|arm_math|ARM_MATH_CM3|ARM_MATH_LOOPUNROLL" projects/01_baseline/Middlewares/CMSIS-DSP/Include projects/01_baseline/Middlewares/CMSIS-DSP/Source --context 1 --max-matches 80 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1075
  outputBytes=4426
  outputTruncated=true
  sourceSeq=167
  rowId: tool:call_u5CsbAz4LasgINIiRWGqfxpS
  ```

  </details>

- **18:27:15  助手消息**

我看到 Arm-2D 公开入口是 `arm_2d_init()`、tile/region API；配置模板默认开启很多特性。为了 Cortex-M3 build 收敛，本地 `arm_2d_cfg.h` 会关闭 async、Helium、AA transform 等不需要的项，并保留 RGB565 绘制能力。

- **18:27:26  助手消息**

API 搜索输出很大，但已经足够确认不会去接 Helper/PFB。为避免猜 API，我会再读 `arm_2d_draw.h`/`arm_2d_tile.h` 中 RGB565 fill/copy 的具体宏和 tile 初始化写法。

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=525
  outputBytes=4371
  outputTruncated=true
  sourceSeq=220
  rowId: tool:call_VHYbRcxNlXGRkIrOlCnzZMIp
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg -e "ARM_2D_DECLARE|ARM_2D_INIT|tColourInfo|pchBuffer|phwBuffer|tSize...</summary>

  ```text
  hwpod workspace rg -e "ARM_2D_DECLARE|ARM_2D_INIT|tColourInfo|pchBuffer|phwBuffer|tSize|iWidth|iHeight|arm_2d_rgb565_fill_colour\(" projects/01_baseline/Middlewares/Arm-2D/Library/Include --context 3 --max-matches 120 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=530
  outputBytes=4432
  outputTruncated=true
  sourceSeq=221
  rowId: tool:call_NhdyHCuO9uP2gHMvNmcYz1LS
  ```

  </details>

- **18:27:33  助手消息**

`arm_2d_draw.h` 确认有 `arm_2d_rgb16_fill_colour()` / `arm_2d_rgb16_draw_point()`，可以用真实 Arm-2D 在小 framebuffer tile 上绘制，再通过现有 LCD bitmap 函数刷到屏幕。还需要精确 tile 结构字段名，马上读对应结构定义。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_types.h"; "'$lines=Get-Content $p; for($i=0;$i -lt $lines.Length;$i++){ if($lines[$i] -match "typedef struct arm_2d_tile_t") { $start=[Math]::Max(0,$i-10); $end=[Math]::Min($lines.Length-1,$i+90); for($j=$start;$j -le $end;$j++){ "{0:D4}: {1}" -f ($j+1),$lines[$j] }; break } }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=729
  outputBytes=4612
  outputTruncated=true
  sourceSeq=226
  rowId: tool:call_O6Lt01A9gFDpQjEBIqxQMSar
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_types.h"; Select-String -Path "'$p -Pattern "ARM_2D_COLOUR|ARM_2D_COLOR|RGB565|RGB16|arm_2d_color_info_t" -Context 2,3 | Select-Object -First 80 | ForEach-Object { $_.Context.PreContext; $_.Line; $_.Context.PostContext; "---" }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=804
  outputBytes=4562
  outputTruncated=true
  sourceSeq=232
  rowId: tool:call_vdWCrwHM0w950jt1Hm4jfuNH
  ```

  </details>

- **18:27:51  助手消息**

Tile 字段确认：RGB565 根 tile 可以设置 `tInfo.bIsRoot=1`、`tRegion.tSize`、`phwBuffer`。我会用 project-local `User/arm_2d_cfg.h` 和 `User/d601_arm2d_demo.*` 做适配，然后补 Keil 工程。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_types.h"; "'$lines=Get-Content $p; for($i=0;$i -lt $lines.Length;$i++){ if($lines[$i] -match "typedef .*arm_2d_color_info_t|arm_2d_color_info_t") { $start=[Math]::Max(0,$i-20); $end=[Math]::Min($lines.Length-1,$i+40); for($j=$start;$j -le $end;$j++){ "{0:D4}: {1}" -f ($j+1),$lines[$j] }; break } }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=768
  outputBytes=4633
  outputTruncated=true
  sourceSeq=236
  rowId: tool:call_9OqpBgDFJaD300ZXIbnalv7y
  ```

  </details>

- **18:28:09  助手消息**

还有一个工程风险：`arm_common_tables.c` 源文件很大，Keil 里必须加入它，但可以用 CMSIS-DSP 官方表配置宏只打开 sin/cos 需要的表，避免裸 F103 flash 被不相关表撑爆。我会先看这个文件的宏守卫，再决定 `Define`。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\CMSI...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\CMSIS-DSP\Source\CommonTables\arm_common_tables.c"; Get-Content "'$p -TotalCount 220'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=688
  outputBytes=4389
  outputTruncated=true
  sourceSeq=242
  rowId: tool:call_96dlHoyWoazvuyDEITJzh9ZW
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command 'Select-String -Path "projects\01_baseline\Mid...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command 'Select-String -Path "projects\01_baseline\Middlewares\CMSIS-DSP\Source\CommonTables\arm_common_tables.c" -Pattern "sinTable" -Context 2,2 | Select-Object -First 40 | ForEach-Object { "'$_.Context.PreContext; $_.Line; $_.Context.PostContext; "---" }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=751
  outputBytes=4515
  outputTruncated=true
  sourceSeq=245
  rowId: tool:call_DZA1ijWkFYMIJWLZLtz0vefp
  ```

  </details>

- **18:28:25  助手消息**

`arm_common_tables.c` 使用 `ARM_DSP_CONFIG_TABLES` 宏族做官方表裁剪。Keil `Define` 会加入 `ARM_DSP_CONFIG_TABLES,ARM_FAST_ALLOW_TABLES,ARM_TABLE_SIN_F32,ARM_TABLE_SIN_Q31` 一类宏；若 build 证明宏名还需调整，再按错误收敛。

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\CMSI...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$p="projects'"\01_baseline\Middlewares\CMSIS-DSP\Source\CommonTables\arm_common_tables.c"; "'$lines=Get-Content $p; for($i=0;$i -lt $lines.Length;$i++){ if($lines[$i] -match "sinTable_f32") { $start=[Math]::Max(0,$i-20); $end=[Math]::Min($lines.Length-1,$i+5); for($j=$start;$j -le $end;$j++){ "{0:D5}: {1}" -f ($j+1),$lines[$j] }; break } }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1210
  outputBytes=4608
  outputTruncated=true
  sourceSeq=249
  rowId: tool:call_csRf0iedeYLUByOL9kHzkWs2
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command '"'$files=@("projects'"\01_baseline\Middleware...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command '"'$files=@("projects'"\01_baseline\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_sin_f32.c","projects\01_baseline\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_cos_f32.c","projects\01_baseline\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_sin_q31.c","projects\01_baseline\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_cos_q31.c"); foreach("'$p in $files){ "==== $p"; Get-Content $p -TotalCount 80 }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=771
  outputBytes=4706
  outputTruncated=true
  sourceSeq=253
  rowId: tool:call_MGx3ypRdlHy0hYHEW3bRJWVg
  ```

  </details>

- **18:28:49  助手消息**

FastMath 源码确认 4 个 `arm_sin/arm_cos` C 文件都实际读取 `sinTable_f32/q31`，所以 Keil 里保留这 5 个真实 DSP 源文件足够满足本 case 的 DSP 链接要求。现在开始写本地配置、demo 和 uvprojx patch。

- <details>
  <summary>已运行 hwpod workspace rg -e "arm_math.h|arm_sin|arm_cos|sinTable|ARM_MATH" projects/01_baseli...</summary>

  ```text
  hwpod workspace rg -e "arm_math.h|arm_sin|arm_cos|sinTable|ARM_MATH" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/Middlewares/Arm-2D/Library/Source --context 2 --max-matches 80 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=492
  outputBytes=4422
  outputTruncated=true
  sourceSeq=259
  rowId: tool:call_0rZC3jBUgbK13WuQ5RJpMUAC
  ```

  </details>

- **18:29:17 total=00:08:11 run agentrun:steer:accepted**

```text
HWLAB accepted an in-flight steer request and will create an AgentRun type=steer command on the existing run.
```

- **18:29:17 total=00:08:11 run agentrun:steer:command-created**

```text
AgentRun steer command cmd_5a1639d9d40146d3abe3badb701325e9 created on run run_2d3bb61162ff4ca7b2dc0c50ae2ff81c; runner will apply it if the target Codex turn is still active.
```

- <details>
  <summary>已运行 hwpod cmd powershell -NoProfile -Command 'Select-String -Path "projects\01_baseline\Mid...</summary>

  ```text
  hwpod cmd powershell -NoProfile -Command 'Select-String -Path "projects\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_draw.h" -Pattern "arm_2dp_rgb16_fill_colour|arm_2dp_rgb565_fill_colour|arm_2d_rgb565_fill_colour" -Context 2,8 | Select-Object -First 20 | ForEach-Object { "'$_.Context.PreContext; $_.Line; $_.Context.PostContext; "---" }'"' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=679
  outputBytes=4572
  outputTruncated=true
  sourceSeq=267
  rowId: tool:call_2nz2wQ1QucGFW7fUEPQRrlQV
  ```

  </details>

- **18:29:59  助手消息**

收到。我停止继续读源码/API，直接写最小 project-local glue、`main.c` 接入和 Keil 工程项，然后马上跑 `hwpod build`。

- **18:30:50  助手消息**

我现在用 `hwpod workspace apply-patch` 写入 3 个本地 glue 文件、改 `main.c`，并把 Keil target 的 include path、宏和 C 源文件列表补上。第三方源码文件保持原样，不通过 patch 改写。

- **18:31:05 total=00:09:58 run agentrun:steer:accepted**

```text
HWLAB accepted an in-flight steer request and will create an AgentRun type=steer command on the existing run.
```

- **18:31:05 total=00:09:58 run agentrun:steer:command-created**

```text
AgentRun steer command cmd_c67e67a2bbf94685989462306392d7e8 created on run run_2d3bb61162ff4ca7b2dc0c50ae2ff81c; runner will apply it if the target Codex turn is still active.
```

- <details>
  <summary>已运行 "cat &lt;&lt;'PATCH' | hwpod workspace apply-patch --reason "add minimal Arm-2D run9 glue and...</summary>

  ```text
  "cat <<'PATCH' | hwpod workspace apply-patch --reason "add minimal Arm-2D run9 glue and Keil project entries" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821" *** Begin Patch *** Add File: projects/01_baseline/User/arm_2d_cfg.h +#ifndef __ARM_2D_USER_CFG_H__ +#define __ARM_2D_USER_CFG_H__ + +#define __ARM_2D_HAS_ASYNC__ 0 +#define __ARM_2D_HAS_HELIUM__ 0 +#define __ARM_2D_HAS_FPU__ 0 +#define __ARM_2D_HAS_ANTI_ALIAS_TRANSFORM__ 0 +#define __ARM_2D_CFG_FORCED_FIXED_POINT_TRANSFORM__ 1 +#define __ARM_2D_CFG_SUPPORT_COLOUR_CHANNEL_ACCESS__ 0 +#define __ARM_2D_CFG_SUPPORT_CCCA8888_IMPLICIT_CONVERSION__ 0 +#define __ARM_2D_CFG_USE_IIR_BLUR_REVERSE_PATH__ 0 +#define __ARM_2D_CFG_SUPPORT_TRANSFORM_FOR_NON_A8_FONTS__ 0 +#define __ARM_2D_CFG_ENABLE_LOG__ 0 +#define __ARM_2D_CFG_LOG_OUTPUT_S...
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=547
  outputBytes=14281
  outputTruncated=true
  sourceSeq=277
  rowId: tool:call_VauYEwKvd9kX7pZT4fEVWuAv
  ```

  </details>

- **18:32:13  助手消息**

我会按你的强制收敛要求执行：本轮下一次工具调用就是 `hwpod workspace apply-patch`，只做一次最小修补，然后直接 `hwpod build`。

- <details>
  <summary>已运行 "cat &lt;&lt;'PATCH' | hwpod workspace apply-patch --reason "tighten minimal Arm-2D run9 glue...</summary>

  ```text
  "cat <<'PATCH' | hwpod workspace apply-patch --reason "tighten minimal Arm-2D run9 glue before build" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821" *** Begin Patch *** Update File: projects/01_baseline/User/d601_arm2d_demo.c @@ - printf("[ARM2D-RUN9] arm2d=ARM-software/Arm-2D tag=%s\r\n", D601_ARM2D_TAG); - printf("[ARM2D-RUN9] arm2d commit=%s\r\n", D601_ARM2D_COMMIT); + printf("[ARM2D-RUN9] arm2d=ARM-software/Arm-2D tag=%s commit=%s\r\n", + D601_ARM2D_TAG, + D601_ARM2D_COMMIT); @@ - if ((s_loop & 0x03FFUL) == 0UL) { + if ((s_loop & 0x00FFUL) == 0UL) { *** Update File: projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx @@ - <File><FileName>arm_2d_tile.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\Arm-2D\Library\Source\__arm_2d_tile.c</FilePa...
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=447
  outputBytes=5531
  outputTruncated=true
  sourceSeq=281
  rowId: tool:call_uFpuOedqkJwRk8OVTN90WMLU
  ```

  </details>

- **18:33:10  助手消息**

最小 glue 和 uvprojx 已通过 HWPOD patch 写入并做了收敛修补。现在不再读取源码，直接跑 `hwpod build`。

- <details>
  <summary>已运行 hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree...</summary>

  ```text
  hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1613
  outputBytes=4224
  outputTruncated=true
  sourceSeq=285
  rowId: tool:call_VCeB2gGGQ1sN3L12mtcFy6NA
  ```

  </details>

- **18:33:19  助手消息**

Build 已提交到 HWPOD，正在等 Keil 编译结果；如果失败，我会只按编译错误做最小 patch，不扩大到 examples/Helper/PFB。

- **18:33:25  助手消息**

`hwpod build` 已返回异步 job：`20260610_023312_6a39b39e`，状态 queued。我现在轮询 job status 到终态。

- <details>
  <summary>已运行 hwpod job status 20260610_023312_6a39b39e --hwpod-id d601-f103-v2 --workspace-path "F:\...</summary>

  ```text
  hwpod job status 20260610_023312_6a39b39e --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", "r...
  exitCode=1
  durationMs=1150
  outputBytes=4251
  outputTruncated=true
  sourceSeq=291
  rowId: tool:call_3gW5e27Rz11KiZEmgb2jXnwF
  ```

  </details>

- **18:33:49  助手消息**

Build job 到终态 failed，但 HWPOD 返回的诊断只有“未生成 hex/axf”，没有编译器错误正文。为了继续收敛，我只读取这次 Keil job 的 stdout/stderr 日志，不再泛读源码/API。

- <details>
  <summary>已运行 hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\.state\job-logs\20260610_0233...</summary>

  ```text
  hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\.state\job-logs\20260610_023312_6a39b39e.stdout.txt" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=440
  outputBytes=4332
  outputTruncated=true
  sourceSeq=295
  rowId: tool:call_vDcZ8cUxYgg5SJayDq8ecKzW
  ```

  </details>

- **18:34:02  助手消息**

stdout 只有 job 启动事件，错误细节不在 stdout。我再读取同一个 job 的 stderr 和 keil-cli JSONL 日志，仍只限构建日志。

- <details>
  <summary>已运行 hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\.state\job-logs\20260610_0233...</summary>

  ```text
  hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\.state\job-logs\20260610_023312_6a39b39e.stderr.txt" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=444
  outputBytes=4262
  outputTruncated=true
  sourceSeq=303
  rowId: tool:call_CghoUfjbThl7xuZOFyuAiJXu
  ```

  </details>

- <details>
  <summary>已运行 hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\logs\20260610\keil_build_2026...</summary>

  ```text
  hwpod cmd cmd /c type "C:\Users\liang\.agents\skills\keil\logs\20260610\keil_build_20260610_023312.jsonl" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=446
  outputBytes=4327
  outputTruncated=true
  sourceSeq=304
  rowId: tool:call_uAo0VKRG50QCbE0uQYfo1Xmo
  ```

  </details>

- **18:34:10  助手消息**

错误已经明确：CMSIS-DSP 官方 fast math 源文件编译时没有看到 `sinTable_f32/q31` 声明。补官方表声明宏 `ARM_FAST_ALLOW_TABLES`，不改 DSP 源码，然后重跑 build。

- <details>
  <summary>已运行 cat &lt;&lt;'PATCH' | hwpod workspace apply-patch --reason "enable CMSIS-DSP fast math table ...</summary>

  ```text
  cat <<'PATCH' | hwpod workspace apply-patch --reason "enable CMSIS-DSP fast math table declarations" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821" *** Begin Patch *** Update File: projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx @@ - <Define>USE_HAL_DRIVER,STM32F103xE,ARM_MATH_CM3,ARM_DSP_CONFIG_TABLES,ARM_TABLE_SIN_F32,ARM_TABLE_SIN_Q31</Define> + <Define>USE_HAL_DRIVER,STM32F103xE,ARM_MATH_CM3,ARM_DSP_CONFIG_TABLES,ARM_FAST_ALLOW_TABLES,ARM_TABLE_SIN_F32,ARM_TABLE_SIN_Q31</Define> *** End Patch PATCH
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=1074
  outputBytes=4708
  outputTruncated=true
  sourceSeq=308
  rowId: tool:call_F0xajt6pvJnfVFPZcDeakHXI
  ```

  </details>

- **18:34:19  助手消息**

宏补丁已应用。现在重新提交 build。

- <details>
  <summary>已运行 hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree...</summary>

  ```text
  hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=856
  outputBytes=4223
  outputTruncated=true
  sourceSeq=312
  rowId: tool:call_DJdPUyxqrs2t9bXZO4HslFZY
  ```

  </details>

- **18:34:26  助手消息**

第二次 build job 已提交：`20260610_023420_e74921a8`，当前 queued。我继续轮询到终态。

- <details>
  <summary>已运行 hwpod job status 20260610_023420_e74921a8 --hwpod-id d601-f103-v2 --workspace-path "F:\...</summary>

  ```text
  hwpod job status 20260610_023420_e74921a8 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "effectiveWorkspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1082-real-arm2d-cmsisdsp-run9-20260609-1821", "defaultWorkspacePath": "F:\\Work\\D601-HWLAB", ...
  exitCode=0
  durationMs=779
  outputBytes=4253
  outputTruncated=true
  sourceSeq=317
  rowId: tool:call_v1AeDCgBlnpLRwZ0EYFPriho
  ```

  </details>

- **18:34:51  助手消息**

` completed，return code `0` - 产物： - `projects/01_baseline/Output/atk_f103.hex` - `projects/01_baseline/Output/atk_f103.axf` - 仍有 12 个 warning，均为 Arm-2D upstream 头文件末尾无换行警告；未改官方源码。 按你本轮强制收敛要求，我没

- **18:34:52  助手最终消息，轮次完成（总耗时 00:13:45）**

已按强制收敛完成最小 glue 并通过 build。

变更摘要：
- 新增 `projects/01_baseline/User/arm_2d_cfg.h`
- 新增 `projects/01_baseline/User/d601_arm2d_demo.c/.h`
  - 使用真实 `arm_2d.h`、`arm_math.h`
  - 构造 `120x80` RGB565 tile
  - 调用 `arm_2d_rgb16_fill_colour()` / `arm_2d_rgb16_draw_point()`
  - 使用 `arm_sin_f32()` / `arm_cos_f32()` 参与绘制和校验
  - UART 输出 `[ARM2D-RUN9] start/arm2d/cmsisdsp/heartbeat/tile/sum`
- 修改 `main.c` 初始化并周期调用 demo task
- 修改 `atk_f103.uvprojx`
  - include path 加入 Arm-2D Library Include、CMSIS-DSP Include/PrivateInclude
  - 加入真实 Arm-2D 源文件：`arm_2d.c`、`arm_2d_draw.c`、`__arm_2d_tile.c`、`__arm_2d_core.c`
  - 加入真实 CMSIS-DSP 源文件：`arm_sin_f32.c`、`arm_sin_q31.c`、`arm_cos_f32.c`、`arm_cos_q31.c`、`arm_common_tables.c`

真实来源：
- Arm-2D：`ARM-software/Arm-2D` tag `v1.2.4`, commit `b73ec43b6567feffe57642861e8b5eb083788011`
- CMSIS-DSP：目标节点 Pack `ARM.CMSIS-DSP 1.14.2`

Build 结果：
- 第一次 job `20260610_023312_6a39b39e` failed：CMSIS-DSP `sinTable_f32/q31` 声明缺失
- 已补 `ARM_FAST_ALLOW_TABLES`
- 第二次 job `20260610_023420_e74921a8` completed，return code `0`
- 产物：
  - `projects/01_baseline/Output/atk_f103.hex`
  - `projects/01_baseline/Output/atk_f103.axf`
- 仍有 12 个 warning，均为 Arm-2D upstream 头文件末尾无换行警告；未改官方源码。

按你本轮强制收敛要求，我没

## 最后 Diff

- statusShort: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx  M projects/01_baseline/User/main.c ?? projects/01_baseline/Middlewares/Arm-2D/ ?? projects/01_baseline/Middlewares/CMSIS-DSP/ ?? projects/01_baseline/User/arm_2d_cfg.h ?? projects/01_baseline/User/d601_arm2d_demo.c ?? projects/01_baseline/User/d601_arm2d_demo.h
- diffStat: .../01_baseline/Projects/MDK-ARM/atk_f103.uvprojx  | 30 +++++++++++++++++++---  projects/01_baseline/User/main.c                   |  3 +++  2 files changed, 30 insertions(+), 3 deletions(-) /dev/null => projects/01_baseline/User/arm_2d_cfg.h | 19 +++++++++++++++++++  1 file changed, 19 insertions(+) .../01_baseline/User/d601_arm2d_demo.c             | 152 +++++++++++++++++++++  1 file changed, 152 insertions(+) /dev/null => projects/01_baseline/User/d601_arm2d_demo.h | 15 +++++++++++++++  1 file changed, 15 insertions(+) [omitted by CaseRun diffCollection]  projects/01_baseline/Middlewares/Arm-2D/Library/Include/README.md | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6093 sha256=c1103b647525c121c384ca07bb5c33abeba1f282e35796eaf1f1e8a6c3e77cd7  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_direct.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=702618 sha256=4e20aefa89552cf17d4167964c28b75978ca675eeeef912ee89561e566ec83cc  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50196 sha256=571d66e07011770d9ff35b2c99d8e55653b81d4b3f36246dd8ad64e9d1d4466c  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=57001 sha256=09e2987ce098ba23a60fdc52d901f26532c5ab7af8b2d8ad8883804e4a766aae  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_horizontal_line_mask.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14191 sha256=91413cec7defbb011d83afac4a6547d0d3cefd7c0cac78e9af177bd94c834c26  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_mask_and_mirroring.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=28581 sha256=b0d1d412829aa14bc8c8fa832bda96177c44268472212cf15487f977cf285238  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_vertical_line_mask.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14191 sha256=53fe886bab2694ecaf70be3e7ad50a655bacda579fa9f9389fbf998b0bb2df01  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_iir_blur.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7810 sha256=ee9de1c0f211a245733db2efc8144947d500c72d98dcb99dd0a58b44b350b4b6  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_reverse_colour.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5828 sha256=093682917e626d3d1793ddc6e21dc42d4b5d6d2d10d6a08cc3572f54b39f5f6b  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_impl.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=81634 sha256=f7d1b55a3fcd923b485c6fc3207314897d74df1bb855b6daf8b4b8bc2beda946  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7921 sha256=7031dd6c77345aa39c0728fe29f1f54b5041e400981cbe2fbbcdee25aa9029df  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math_helium.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11770 sha256=86c8e6880e65347a49b0fdb025ef47844fb4ee4783b5a982204e3f43f25d7fed  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=55371 sha256=2ee3f92219e30716c4bdabbd6bf06a4077faf432df22a5470be8d6fd56810d8e  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving_helium.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50584 sha256=398648b0a658c8443b650015a3a20bf76ed1617aad8a917c34f03be386ba4f3a  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_2xssaa_transform.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2620 sha256=1d227751fcd1e66c2df4dc89672616aac43466b868dd9109e26fe9897801e28b  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_copy_with_source_mask_and_opacity.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=8531 sha256=390031f297aead07b7da04ae17354dcefbbf45326e47567ed7cebdf6848abdb5  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_opacity.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7589 sha256=a8ca41e621d5cedfcab31e473be3f9ce1340d825bf7c222bd99c516e0129de88  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_source_mask_and_opacity.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=8623 sha256=78e2fec4e1b21ed81ffdcca18ff7e7ee78f97a528da02648a4af00644fac041e  projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_utils_helium.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=12753 sha256=aeae45284792a62ba243ed91fd3370d5ed653813bcf68f6b1c7daf825e09cf74  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11976 sha256=a06b06c74e188a86ef93deb4966e054d0e538e54b7b5295a2a28e7da5e0a1d46  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_alpha_blending.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=253192 sha256=dc6f4a6d55c7eaf06b2899e42e54774a253632fd5f20f59949151b9aa9958b1d  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_conversion.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15531 sha256=ec44d01e4ceb742ea286d26a25f71a01d8fd9eef1eae59331e793db331d4b1c3  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=27029 sha256=037cf3d5e060f0a58fe6ed3523e1342ede8510d84b89396fd7cfa3c3cc4b9229  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_features.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13037 sha256=eb09cfab1f453ecf7cb56c5ea4f3bd66afbee4c9df1b5439164de814b274e253  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_filter.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=1837 sha256=cd38c6905643b15057b6dbf6de1418531808fff21b606e289d7950adafb7c2ea  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_op.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=27045 sha256=f2d5e9cbcfc510f13b29978c291f6ba7aec1072bfa6d19d85954b08e68f6c314  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=118097 sha256=1c67b99565384ae4f58f5f5c69de937c6417ba0487ddf60b35df10d42c22c020  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_transform.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=358855 sha256=27938bc95927626756846813cb73a039c398f8b72971d3c70434dcce9829f271  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=54562 sha256=c0448752cc11ac9a3d33eec3275466e52498ba1c64cf8f0c78d053b54b65706b  projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_utils.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=55570 sha256=5d1732205efecb5382fcee2a74de13b0af99cac7a2385e410184dfe5354717fa  projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13958 sha256=ba5b164c3fead82b80cbae486db77b17255f1f8d807f781b942d85442079dd25  projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_aci.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2613 sha256=07296a23296ed813b89b8e4c8a293dac27722aabc2c7917c463bd801536b047e  projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_arch_port.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2858 sha256=f6d404214925c9c1f563c24c2d4d22ebd0d8475bbc9a9f4efce83f52456963c3  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_alpha_blending_wrapper.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=70380 sha256=96eafd5446c2a2bb114800027cc20c21ba33ee57966c7e12c1317a62ef17c345  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ccca8888_transform_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=136817 sha256=24c3cb360a05c161620b3034d194378360c606a6cdaeac4734b54647bd7a09a6  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_conversion_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=34238 sha256=db7d67d0a201bb64084e21d67436c7f3663ab90596d194cce51ba9e779bb553f  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_mirror_wrapper.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9568 sha256=4aa096a4198c1a81b31ee31cc2fd166261075e0a45e04ffb77af03bf7d56be4b  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_colour_keying_and_mirror_wrapper.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10363 sha256=ae62006da3bc01d2a0f8962e1d3ba270333e2c32be8ab9c85957aabb13c8a397  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_mask_and_mirror_wrapper.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=23195 sha256=da3a6f1766e500550550d57491c5a98021dc6080abede54c0b709db04942e6e6  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_core.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=100762 sha256=948f3d1f3737cb0a0e5a77e053b839091779d66310e9e22c2d16de676b57cce5  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=97922 sha256=6eab5de88bedcbe9c5a005d8a6234f7fb585d878caffe860cb48f8b375712ae4  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=104134 sha256=b620e7012b068caeb7a6989cd66a712324c50766ca9cead2157a353714f3c4d8  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=183449 sha256=a164bed9e178a8435bb3381d6dcecd20f90c8e608c9fae9e8c8bc25fd8d8ec69  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=152465 sha256=26d2f264c4e7e212ea3a100086f92847f365fb1000ddbc4befbffbefa83a5393  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76970 sha256=61730b7041df584da415f16eda0342fdb1f3de39cd2ae32d1b34fd98298f4c68  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50957 sha256=1799828853efdaa363d1d0f4363aaa3bd6d75668006b78b836056006fbef8f71  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=130438 sha256=bd47cdd0d3df50899dcecd163bfc79a307d4f0102f31555490da25c5024034fc  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=71956 sha256=09a9e89b8eb2e170062eea08304c85b1bace01053abc2ba1821b25f596e8abc2  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76968 sha256=62bfbde4d3ec137a884350d50a6eb3a74b5853dc9fbf88e47c1f6ce7c65e7194  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=45204 sha256=6af6230181a59c977f907b0496d3bb6eea3594df7b410a4e4cbc32cac229a65c  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=42298 sha256=1dbfc97b512c1044cae73b0f204bb799432e4ed6046b1c0de28a9a2dad9ef922  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=54159 sha256=f824215089bee1c3d14942a83400fdfae4176a981afc05478345c2986817bcb2  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11111 sha256=f9d8184be89c2150e2af15b3fffcd0900e292b13c528fc2e74f720fbe4ae4e82  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6637 sha256=4a5d71f44889541fcdb45ce18a90a33ebc4ef02bcbc539b74bd97a15267eba78  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_blending.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5248 sha256=11534b17595c0c00ce38ccb338534e57409df971f894de43fc35d3468c4439ae  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=74606 sha256=53fe1dc126180933ce16b29264ec87fd80530f8770d81ccfc0905ca6150dc44d  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=108098 sha256=f0428f549cee7aa264ba5bc36e2cafb84760ce0a3fa29c6704aaed6449270098  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_colour_filling_with_alpha.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20477 sha256=8df01e017dfc8ef4b76084c7fe82ed0ccd6498b5ff79bf08c011aefeac7abed3  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=64862 sha256=78a0aa55765ff6604143824e3a9890b5a7a7802dbee9943dbc98d47a0b96093e  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=38848 sha256=16cadadd6f5cd4f0ed38245dfacf2db51dea925d46e059ce77bf64374294485a  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=12762 sha256=af15b40f04a3e83bffcfab4779cb2fadb88297bba5d04bc3d55981b9ac8db1fd  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=51156 sha256=06e1741561780bbe2423f8abec7e1da5e797dd161b2ceb19dc393f2c0aa2a2b1  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2170 sha256=bb0e0324a589feb9d62ce7477d7eb282ca16401dd3df54ef2fecb14caca21ce9  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3426 sha256=6e3cccedb16720d369ed952be66598be0c6a1330f6d86e9d519970ef06d08707  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_ccca8888_trans.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13107 sha256=2beafd5ac640dd9702e6fc9719685ab0aa7cbfb61d8a52c9149c4d77ae9f72a5  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_and_fill.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=49718 sha256=35fc31bbb8b18b8521c4c84047f842d3ef85cdba4122c8c21a1fb6c06e85d460  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=46340 sha256=28fd08359b39767476a5e339aecc400df4b94979ee0252f57ffd0862880885b9  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=82248 sha256=e45a6c791eb0684391a8b8338a75a3a364cf4e1f632f4aae67b69fc62ea86d22  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18366 sha256=f29ce6723d359b4355c04796029c1e022da7dbddf7a817affc857a5a6be47094  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=107916 sha256=1ca067d5b157189a54c6b215c4a646cbbd2a422b4c421bf6b758c97797ec326f  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=51650 sha256=87d0592eaa700f0182cdcd7d8c0f7b2acd5ec6b8a1bedd8100b827800a25d883  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform_helium.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=41246 sha256=444632d9b5e04be8e4694d0dbba86aba5fa948e47eca4ba6f4ad891972db185e  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11163 sha256=327a1f5ce3d71287c96fb2a2b50cbedf25fbd13c67edb90d0f0ea00934cb5388  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_colour_keying_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6734 sha256=bd0b6af4dda0122db30ac8a298cfc11b0dbe54f6215470ea790faae76c506124  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_des_mask_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10109 sha256=4e61835e2bdab7cf9e044dd1e3ee78a3700cd9a47d844f7a6b23b771e37d9a4a  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_masks_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15308 sha256=1a5e49f73f6212c501a4e8052f52d380a42fff8c3e15d848522ec109bb9e135d  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_src_mask_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15826 sha256=503f67c175906572dfe9b63cdbdeab718b53ed99198ac83ed242fcffb6c266b1  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10571 sha256=56d73f69562bffc97bd2de302894ae805ca6e6a8f445e465da8a6266d667786b  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_colour_keying_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7041 sha256=41dd731a7afb53759cbff698471e2dc07cc5fed4478c6d19beccb3022ebc7523  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_des_mask_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11031 sha256=d349f5dcad6ac37ff2b329a66dfc0c5c86bb59990b5d5f3804bb30044e9c2443  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_masks_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=16938 sha256=3ab18f22338f89f7c8e385a3c6d4202c93b58a2283843ebec9e16b466e7a5fc2  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_src_mask_and_mirror.inc | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=17510 sha256=bd4472fde44960d3cdb95369c98f5de68a93ffe5fa84ad9bc86a990a2e16b638  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=111546 sha256=f253e065b11dfd1d065655989c80c053982e0af37feba18b9018dbc9c26dea33  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_2xssaa_transform.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=23051 sha256=747c4ca6b4d155af6c70298a56a1b608a543a88b17cab06d3705bd0fa330c4ea  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_4xssaa_transform_src_mask_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76949 sha256=12b95d57fcb8636662778c9c6e6612865fd0d847a5c2b47782541f8f86b683da  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=67437 sha256=fd442a5e5577a856c52ed3f830fc57ce143eeecd486b84188cf762c34390f3a4  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=39322 sha256=87d9612eac3a6aa1775403025d02146d6fb9745fe2991e48d8fa1e380038f379  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=32869 sha256=95ed9ad437bb751dc25f68cedbf9f683fc09867940bc060f238de15763c24bff  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18451 sha256=56f7fb92a51c0ea8eee14d84fb04d90465f44c04bf98258c0a1ac6fec0dabd59  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=81227 sha256=d2b9f0054b2bd743a58bbfc260031f9e1d7275b666baa683c8572997838c4e9a  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=38388 sha256=1e9e745ff6d7e03cff18ecafd3d4ffbb38b539cc8afbf800a87a5d8a654b087e  projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_transform_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=243351 sha256=b085ff0f85e0f92212f62eabf7fe299be75be9d07df4e7bd90eaa0e3b0683b1f  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9808 sha256=0370fd1488df05a9e218e0036eab844e1f01bef5cc3057fe989a3d209c38c078  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_alpha_blending.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=136285 sha256=7f8364dea0153d6bf9194c47638f99562975d4a0ee8ef3233d3375add49499f7  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_async.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=34851 sha256=d7c091545e4e2242113aa7ec71275161d0654307beb40f9d59a08b5e5ec6ad45  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_conversion.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31315 sha256=e83327e0f1483ceceb0b453e01cbce973ae93c6942943bce5391161ae1994d3b  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_draw.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31582 sha256=b111fa20a6320e3f8633b55a8e4517258f3e03300301e47e20d2417f7bb461c9  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_filter.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2207 sha256=e49d7f612cbdcd0e232a97377b53215dd2ebe7db35fcb7b877f101c452028d35  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_helium.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=294963 sha256=8324403b8444ca2ac3f74898f9cd167a0c4fdddfb39d8b2e7ec42abb5bcff7e0  projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_transform.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=119824 sha256=654dcca2d2ccfcd0e1b887ef4bdba69321b5e538919db78b525b3052ae011626  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/README.md | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3604 sha256=39acedfeaeabae00467aefa6355edb2655be2b8668907aef79198099bfba62e3  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_ccca8888_transform_helium.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=56416 sha256=7a899f8935c04202aca0ef1bdc1899dd64db5144710df1188e6943eac13c4f91  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=39798 sha256=2e6ce0b5a43e2bd8555a09978b020b87ed0d942db6fab2dc59d35312b33483b6  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20524 sha256=364da896fa52143b36a90b228b9d986d5ca1696618cf2f9db436fffb18f70284  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=67165 sha256=adce8457736cf45d4f5ef612937fe6d7356627b817e3fb6ebbc466dc60c6872d  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22879 sha256=9fb13e43e930e960a22d550ac71e63a1371f7af1407f6ea1d6dbbd0b923b713f  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_helium.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=46567 sha256=441f817722ee740b8b5b01ca61b9e2429bf710051484b0b455d7bb25b2112d36  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22508 sha256=28ed944956bb492d25faa2e51af79e03355350311a5030b36ad916b78922504c  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6530 sha256=497212c90423800c7e29455f488a33111e17b52a8aae40263c6b03b52e6d943c  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20541 sha256=07e0006857215128e227dbe87ede4bfb5cc2f0bebc2fd7a6efe15c71edf7e994  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6105 sha256=3f0466cbf7f7aaa81076823bf9803307aa0f4074eccdac09cdf3a3a09bfef401  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22483 sha256=042d0fcdcbe07118a7404397007601a821d906d4f82a9ba9a07a33be307353a9  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6508 sha256=d59600fe957247e043a5ca4bce1bf6cc2d32baf3fee0e329a7ec24715f4812d4  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18566 sha256=eba0ba7b609da36cacad23abfbd945c0355e3529c3b915667d6f87f4e4304c05  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6126 sha256=87e07d35b6d9200eed4153512e167921d7471bdae09e2214cd6b41b97d253856  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6685 sha256=66766677fa7264852e71f80b6589d87a3198b03cc7019eee958153af733735a5  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=4198 sha256=99b3a42fc3b9af3be82dd0860b065a3efbe677156ffbcd4d706dbbed37c3c853  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11688 sha256=b3b13cbd9c578e7a463a1d09029be3bcc7089f285e6ea61add7243da63efc4e4  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2862 sha256=bcafd2bcf36a7211e08d01e26bdb1e2a1bab4e81c617ac68369a6d2e873e3fdd  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=26662 sha256=e58aab31766a39f685547a30220a29d5b88e4f7b6c73f68d81ac22fa79ef0294  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5079 sha256=bb334aee9b27cbd26982197bed2b34c5f264b83899da2e28b3f5c68210078ba4  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14496 sha256=068e021697dff31c45f149f65d90b1b91dfd6ddf54dbe02f1134b4605be11bad  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=4741 sha256=f6eb47dff38ff54ad6fb1ab14be251dbb3bad72b9823325f6aa298dc0b42e2ca  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity_helium.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9389 sha256=36daffaf7430ffe55e4b49ce6a01aa83ab27b4310ecfbf1a8c7e96f7cf729fe5  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31206 sha256=09433e31993cb64bfeafd892c95c025c1b06b346914904af9b86c41473624ffc  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.h.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5107 sha256=39e38236c2660cdb705eb0dfa7cebc2c66a12df1e0fff8f5fe85da046fc7418e  projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c.jinja | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15024 sha256=6eaf353328204893ef29fed4ae48ed77a35bd2312d82fa90e7cc9cba9ea2da06  projects/01_baseline/Middlewares/Arm-2D/Library/template/README.md | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=195 sha256=1ae00af09de532bd91de4155b0db79062e899b6ee1bf18ad755319b1dfa7445f  projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11003 sha256=ebe5631cdebba3589677c56baf57b5f4896c29d0681a40a15e38aec055b8a034  projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3140 sha256=e28680e1fda3c85a4587e1486aec7eefc9d7a0671ff9d639bf3c313a60949119  projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.c | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11815 sha256=89b604f381b439b4f60297874d52d6b5ce6717c6fad94046aee9a10059a95784  projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.h | omitted rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3302 sha256=47ac75bbf4804726bc49abc3c45f1727a4317b9e0843211c69da648c9990df4e  projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.pdsc | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=14303 sha256=72cea3f0d75fecd7b6d1ebd93235ae395f026d8352c48c58d3a2baffcbf333ef  projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.sha1 | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=257602 sha256=9a3b0f714580ba1d53195d751e0743febb4202fca1088972f6e67920387bdc6d  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30043 sha256=dc36e5c463aee1beea88844c48661a2201a045717bd68ddad6c5ba3cff6cafc6  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5563 sha256=c0f326ab182e922fbd700c2cb6164ea998679e058721e91ec0bea0ad4b19c9a6  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3637 sha256=0e19ec8edc49a897eed2b02acfbb36da98da1199931765d5a5269857afeb50a5  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3552 sha256=f173a3dace7642876073eef169a3b6201b7c77fe6dd7aebe8f41429ceb78ddce  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_helium_utils.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=21467 sha256=b2908dda4945d1a3f99d29330cb5439e3b1852a06d84c6560d87d7822489f46d  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8404 sha256=f170e01c8f852f6fa50dff547c3c8e56facc6a2a1186ac409a54bbc93b32c8ed  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1812 sha256=51599ec6c3f1840d148d76cdf728d17bcf5de31943b41ee8dbb07c407a45cfa0  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_memory.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5184 sha256=d5916539a16ad055c84a5bb5d5399fedd4a491e2c44a113dcce8ebb6dc7c089b  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=15011 sha256=4c8451b4da0085ef63ef23db08c8dcf13dc2cc96c6bc4d3c584762d4aa75be5b  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3813 sha256=3b9028e261096c695af06e39ca7793543286c5382899f8f35ea746effecdd61d  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10367 sha256=cbf227724f370e5aaa5b15baaea48638f0e00b19baba1ad8e29ea6fd23636500  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4433 sha256=f1834a5927205692d747151ffbdb9771089291b398611b83ea5c0fa9e52ee143  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9807 sha256=7193f27bfdd6db7dc91a8aca9ba38c9af38ead6305940672e121312a6f7e171b  projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8343 sha256=55d4102cbb7ef14412452b28dcbab332f2e6d8ef6950be121e7295b1c2d20d4b  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=26199 sha256=3fd31426a623339e2fa60d9aa2d67b880967a4edca420e3fd7ee3733fb65d072  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5163 sha256=43f3935b4595ca51d5089b5ccd78e2689bbd1898616bec17b9e785e680fdf57b  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2828 sha256=f22b8c3ae42fd3cfdd154e1dd4fd0638985c1739ccb9472907a74f250d0e6b25  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2629 sha256=ce68b78ca4312607eb5e1e5a159eabc86e2f73af6199705e07a67e36e4aed9ee  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10923 sha256=0e0123c33173162631186f4bd7c44ce796dbf1cdc2015ccd30d3ac745ae201ad  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4082 sha256=743c1337cef2cd59a920affa8032a2e0596052853e95ab2bba5b59e81aa31637  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=29222 sha256=f753aea94700e87e43f66b7e5814c9d55c06bcf3606bfac3a369a1c10744f9e5  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1299 sha256=ddc9e1bba2a990a5bc32c0c853c32108bee85791cac9e3cb1911c8eb611a61de  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/debug.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4971 sha256=55e7557a5e9985bebe4b24341339962a970f5dfa84d5fb474a49a6a0577f45ca  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10040 sha256=936242bb7a79eb0a7454636144fc95bf7e62b34d39d3b6c1fca30a350fe80344  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5322 sha256=540125b782f58935eb6f9c03a7e3dd49f9941de0df9a3b91b0561cd5bc5be3a8  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10094 sha256=3e59abe1cf3fffe19ff0590c614109e7d445101cc67e301d94b10a8adcfb72ea  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3501 sha256=dbc95d8026960350b6e9bfc48fe94ef7f7e860f91564e57ee5a2be8cdffee195  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=98240 sha256=3d079f167ce03e1cb83479913b2bfb14c78fe3a76ba969fa2579739f06dd2643  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9196 sha256=4b002e4ba6abada63777975faf63cd0ba071130250c74394e9c2917504bc4d4f  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9162 sha256=75550ce2565d3f1ecb5b41feac0cf268f80d473a36cb21ecdda205b248bf23ea  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2987 sha256=92d107b03f05eabc8c4a82def3756e099e91572c54179a0598f90a455b923384  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=34628 sha256=1fa1d78a0205d9a3155121edcdddf7e5f6ed1c9292f2f0e2e9efcd3c7471ed40  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10199 sha256=26a8e871f71889f70b4601cd0ad39b3460a8e03a01fb63b766d3b7ce8e8b4245  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_utils.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=25412 sha256=4d437c15ed00f988622db7e356a4cd721d50d53474f3edd304c533bffcfcbf44  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/none.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=14967 sha256=ca27e36ba16457d2a9abc1f13e2e0f249ad6ba4642efc446aa2faeb5ace0a257  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/quaternion_math_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5587 sha256=7bb1d91577b4c11d5d50fcf827ccb5ce38236c776c094fae9ad081489c7bca65  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30076 sha256=4a35f6b1ba618fc8604bb6430421c801e718abc93a2430593fa8d8e936bf53ee  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8544 sha256=7738074df7a383bb1906af49c4add0485532f1edf89df81b4c5c431fe1c7f1d8  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=15141 sha256=9ff9b0fb3843323f65d9697d68f0dd6d12a611c119f5346d3ebb1fd75c3fc803  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6310 sha256=01804843a897720f72f3d3ad40da9613990f703f242a2440bddaac4584f3a35e  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_defines.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1441 sha256=ee7b52a08add7d2bddc40caf3d9913a58eab9244cb62ba2833333d433694b1c0  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9922 sha256=594aa1b2bdbde7a87c043710f6bd4a789617aa56f25b96406b1718fc41ee82e4  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9687 sha256=72c8c9357a62e358eb21b9716a4c4b9e0ce335b6221e19ea549c8bfc27e7237e  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30651 sha256=145207df44784a3ad61c00cbb12bc116a02e4c30fb86d0cfd6cdcd130b748f1a  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions_f16.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=7937 sha256=48631b92b3377a49728af6b927d1bd8304374ca9c56e6c22f53b7ee4d5256968  projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/utils.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6048 sha256=2f199a4ef53eacb6dc36b9b1329f5514676d374466bd84284a645d553bf71deb  projects/01_baseline/Middlewares/CMSIS-DSP/LICENSE.txt | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=11357 sha256=b40930bbcf80744c86c46a12bc9da056641d722716c378f5659b9e555ef833e1  projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_sorting.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6640 sha256=0abf0114a2f2d0feae3508c7c184c60227a29b036374c17fbc1794b9be18712f  projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_fft.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=11426 sha256=e04a9a590355df232178853ec121e4903d9feccb185c86191844b9d4215be548  projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_filtering.h | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=123649 sha256=d1657c0e9c743727833e4c4c0b22160f37c66137d4e0a3280795ec2d109cb501  projects/01_baseline/Middlewares/CMSIS-DSP/Source/CommonTables/arm_common_tables.c | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4843505 sha256=c54cce284a74c2b02d12d9db2f7ea48f6b0eb09f07bd4de8e86baaf18ecd339a  projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_f32.c | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3567 sha256=12c6b38fa31af8137cdd48b831b22fd54f49b1d98bb6edb82f5c3b8208d5abac  projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_q31.c | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2573 sha256=5b997b15b674be9f53d8b28eef434aedbf9d869f933431ec00c536ebe7d948ea  projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_f32.c | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3517 sha256=a795df2c0fe63409b0839bc82ab886071b1d3918be1ca8a7e093930639e97abf  projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_q31.c | omitted rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2498 sha256=20f87e68f53afc74d625a404506410de007452c9007d516698a2da46f32abdef
- diffSha256: a6d7df1b91feba5b44a0c9cabe230ca338aeb426bf9afce717366a288637c17e
- diffIncluded: projects/01_baseline/User/arm_2d_cfg.h, projects/01_baseline/User/d601_arm2d_demo.c, projects/01_baseline/User/d601_arm2d_demo.h
- diffOmitted: projects/01_baseline/Middlewares/Arm-2D/Library/Include/README.md (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_direct.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_horizontal_line_mask.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_mask_and_mirroring.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_vertical_line_mask.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_iir_blur.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_reverse_colour.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_impl.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math_helium.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving_helium.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_2xssaa_transform.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_copy_with_source_mask_and_opacity.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_opacity.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_source_mask_and_opacity.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_utils_helium.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_alpha_blending.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_conversion.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_features.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_filter.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_op.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_transform.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_utils.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_aci.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_arch_port.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_alpha_blending_wrapper.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ccca8888_transform_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_conversion_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_mirror_wrapper.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_colour_keying_and_mirror_wrapper.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_mask_and_mirror_wrapper.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_core.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_blending.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_colour_filling_with_alpha.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_ccca8888_trans.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_and_fill.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform_helium.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_colour_keying_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_des_mask_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_masks_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_src_mask_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_colour_keying_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_des_mask_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_masks_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_src_mask_and_mirror.inc (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_2xssaa_transform.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_4xssaa_transform_src_mask_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_transform_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_alpha_blending.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_async.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_conversion.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_draw.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_filter.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_helium.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_transform.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/README.md (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_ccca8888_transform_helium.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_helium.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity_helium.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.h.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c.jinja (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/template/README.md (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.c (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.h (Middlewares/Arm-2D/**), projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.pdsc (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.sha1 (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_helium_utils.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_memory.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/debug.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_utils.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/none.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/quaternion_math_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_defines.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions_f16.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/utils.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/LICENSE.txt (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_sorting.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_fft.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_filtering.h (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Source/CommonTables/arm_common_tables.c (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_f32.c (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_q31.c (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_f32.c (Middlewares/CMSIS-DSP/**), projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_q31.c (Middlewares/CMSIS-DSP/**)
- sourceRootChangedAfterPrepare: false
- sourceRootChangedAfterAgent: false
| Class | Path | Rule | Reason | Bytes | SHA-256 |
|---|---|---|---|---:|---|
| included | projects/01_baseline/User/arm_2d_cfg.h | default-include-untracked | included by default because untracked files are part of the agent diff | 1026 | bafec1a9b47c020d9acf418196124f3aa96f5e8de17fa437d2ca41b629b4d3d1 |
| included | projects/01_baseline/User/d601_arm2d_demo.c | default-include-untracked | included by default because untracked files are part of the agent diff | 4462 | 6210496d3fcccb2ac1b6ecfe68af35297cedf77c90ce49de4dfb4c75bb002b4e |
| included | projects/01_baseline/User/d601_arm2d_demo.h | default-include-untracked | included by default because untracked files are part of the agent diff | 415 | 2452e4358eecacbf70c00b2426371d164b54ebba180e4c66815f6514c8387f86 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/README.md | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6093 | c1103b647525c121c384ca07bb5c33abeba1f282e35796eaf1f1e8a6c3e77cd7 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_direct.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 702618 | 4e20aefa89552cf17d4167964c28b75978ca675eeeef912ee89561e566ec83cc |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 50196 | 571d66e07011770d9ff35b2c99d8e55653b81d4b3f36246dd8ad64e9d1d4466c |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 57001 | 09e2987ce098ba23a60fdc52d901f26532c5ab7af8b2d8ad8883804e4a766aae |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_horizontal_line_mask.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 14191 | 91413cec7defbb011d83afac4a6547d0d3cefd7c0cac78e9af177bd94c834c26 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_mask_and_mirroring.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 28581 | b0d1d412829aa14bc8c8fa832bda96177c44268472212cf15487f977cf285238 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_vertical_line_mask.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 14191 | 53fe886bab2694ecaf70be3e7ad50a655bacda579fa9f9389fbf998b0bb2df01 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_iir_blur.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 7810 | ee9de1c0f211a245733db2efc8144947d500c72d98dcb99dd0a58b44b350b4b6 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_reverse_colour.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 5828 | 093682917e626d3d1793ddc6e21dc42d4b5d6d2d10d6a08cc3572f54b39f5f6b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_impl.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 81634 | f7d1b55a3fcd923b485c6fc3207314897d74df1bb855b6daf8b4b8bc2beda946 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 7921 | 7031dd6c77345aa39c0728fe29f1f54b5041e400981cbe2fbbcdee25aa9029df |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math_helium.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11770 | 86c8e6880e65347a49b0fdb025ef47844fb4ee4783b5a982204e3f43f25d7fed |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 55371 | 2ee3f92219e30716c4bdabbd6bf06a4077faf432df22a5470be8d6fd56810d8e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving_helium.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 50584 | 398648b0a658c8443b650015a3a20bf76ed1617aad8a917c34f03be386ba4f3a |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_2xssaa_transform.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2620 | 1d227751fcd1e66c2df4dc89672616aac43466b868dd9109e26fe9897801e28b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_copy_with_source_mask_and_opacity.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 8531 | 390031f297aead07b7da04ae17354dcefbbf45326e47567ed7cebdf6848abdb5 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_opacity.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 7589 | a8ca41e621d5cedfcab31e473be3f9ce1340d825bf7c222bd99c516e0129de88 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_source_mask_and_opacity.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 8623 | 78e2fec4e1b21ed81ffdcca18ff7e7ee78f97a528da02648a4af00644fac041e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_utils_helium.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 12753 | aeae45284792a62ba243ed91fd3370d5ed653813bcf68f6b1c7daf825e09cf74 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11976 | a06b06c74e188a86ef93deb4966e054d0e538e54b7b5295a2a28e7da5e0a1d46 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_alpha_blending.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 253192 | dc6f4a6d55c7eaf06b2899e42e54774a253632fd5f20f59949151b9aa9958b1d |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_conversion.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 15531 | ec44d01e4ceb742ea286d26a25f71a01d8fd9eef1eae59331e793db331d4b1c3 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 27029 | 037cf3d5e060f0a58fe6ed3523e1342ede8510d84b89396fd7cfa3c3cc4b9229 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_features.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 13037 | eb09cfab1f453ecf7cb56c5ea4f3bd66afbee4c9df1b5439164de814b274e253 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_filter.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 1837 | cd38c6905643b15057b6dbf6de1418531808fff21b606e289d7950adafb7c2ea |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_op.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 27045 | f2d5e9cbcfc510f13b29978c291f6ba7aec1072bfa6d19d85954b08e68f6c314 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 118097 | 1c67b99565384ae4f58f5f5c69de937c6417ba0487ddf60b35df10d42c22c020 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_transform.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 358855 | 27938bc95927626756846813cb73a039c398f8b72971d3c70434dcce9829f271 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 54562 | c0448752cc11ac9a3d33eec3275466e52498ba1c64cf8f0c78d053b54b65706b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_utils.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 55570 | 5d1732205efecb5382fcee2a74de13b0af99cac7a2385e410184dfe5354717fa |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 13958 | ba5b164c3fead82b80cbae486db77b17255f1f8d807f781b942d85442079dd25 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_aci.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2613 | 07296a23296ed813b89b8e4c8a293dac27722aabc2c7917c463bd801536b047e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_arch_port.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2858 | f6d404214925c9c1f563c24c2d4d22ebd0d8475bbc9a9f4efce83f52456963c3 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_alpha_blending_wrapper.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 70380 | 96eafd5446c2a2bb114800027cc20c21ba33ee57966c7e12c1317a62ef17c345 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ccca8888_transform_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 136817 | 24c3cb360a05c161620b3034d194378360c606a6cdaeac4734b54647bd7a09a6 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_conversion_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 34238 | db7d67d0a201bb64084e21d67436c7f3663ab90596d194cce51ba9e779bb553f |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_mirror_wrapper.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 9568 | 4aa096a4198c1a81b31ee31cc2fd166261075e0a45e04ffb77af03bf7d56be4b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_colour_keying_and_mirror_wrapper.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 10363 | ae62006da3bc01d2a0f8962e1d3ba270333e2c32be8ab9c85957aabb13c8a397 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_mask_and_mirror_wrapper.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 23195 | da3a6f1766e500550550d57491c5a98021dc6080abede54c0b709db04942e6e6 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_core.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 100762 | 948f3d1f3737cb0a0e5a77e053b839091779d66310e9e22c2d16de676b57cce5 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 97922 | 6eab5de88bedcbe9c5a005d8a6234f7fb585d878caffe860cb48f8b375712ae4 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 104134 | b620e7012b068caeb7a6989cd66a712324c50766ca9cead2157a353714f3c4d8 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 183449 | a164bed9e178a8435bb3381d6dcecd20f90c8e608c9fae9e8c8bc25fd8d8ec69 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 152465 | 26d2f264c4e7e212ea3a100086f92847f365fb1000ddbc4befbffbefa83a5393 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 76970 | 61730b7041df584da415f16eda0342fdb1f3de39cd2ae32d1b34fd98298f4c68 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 50957 | 1799828853efdaa363d1d0f4363aaa3bd6d75668006b78b836056006fbef8f71 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 130438 | bd47cdd0d3df50899dcecd163bfc79a307d4f0102f31555490da25c5024034fc |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 71956 | 09a9e89b8eb2e170062eea08304c85b1bace01053abc2ba1821b25f596e8abc2 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 76968 | 62bfbde4d3ec137a884350d50a6eb3a74b5853dc9fbf88e47c1f6ce7c65e7194 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 45204 | 6af6230181a59c977f907b0496d3bb6eea3594df7b410a4e4cbc32cac229a65c |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 42298 | 1dbfc97b512c1044cae73b0f204bb799432e4ed6046b1c0de28a9a2dad9ef922 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 54159 | f824215089bee1c3d14942a83400fdfae4176a981afc05478345c2986817bcb2 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11111 | f9d8184be89c2150e2af15b3fffcd0900e292b13c528fc2e74f720fbe4ae4e82 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6637 | 4a5d71f44889541fcdb45ce18a90a33ebc4ef02bcbc539b74bd97a15267eba78 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_blending.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 5248 | 11534b17595c0c00ce38ccb338534e57409df971f894de43fc35d3468c4439ae |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 74606 | 53fe1dc126180933ce16b29264ec87fd80530f8770d81ccfc0905ca6150dc44d |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 108098 | f0428f549cee7aa264ba5bc36e2cafb84760ce0a3fa29c6704aaed6449270098 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_colour_filling_with_alpha.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 20477 | 8df01e017dfc8ef4b76084c7fe82ed0ccd6498b5ff79bf08c011aefeac7abed3 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 64862 | 78a0aa55765ff6604143824e3a9890b5a7a7802dbee9943dbc98d47a0b96093e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 38848 | 16cadadd6f5cd4f0ed38245dfacf2db51dea925d46e059ce77bf64374294485a |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 12762 | af15b40f04a3e83bffcfab4779cb2fadb88297bba5d04bc3d55981b9ac8db1fd |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 51156 | 06e1741561780bbe2423f8abec7e1da5e797dd161b2ceb19dc393f2c0aa2a2b1 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2170 | bb0e0324a589feb9d62ce7477d7eb282ca16401dd3df54ef2fecb14caca21ce9 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 3426 | 6e3cccedb16720d369ed952be66598be0c6a1330f6d86e9d519970ef06d08707 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_ccca8888_trans.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 13107 | 2beafd5ac640dd9702e6fc9719685ab0aa7cbfb61d8a52c9149c4d77ae9f72a5 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_and_fill.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 49718 | 35fc31bbb8b18b8521c4c84047f842d3ef85cdba4122c8c21a1fb6c06e85d460 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 46340 | 28fd08359b39767476a5e339aecc400df4b94979ee0252f57ffd0862880885b9 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 82248 | e45a6c791eb0684391a8b8338a75a3a364cf4e1f632f4aae67b69fc62ea86d22 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 18366 | f29ce6723d359b4355c04796029c1e022da7dbddf7a817affc857a5a6be47094 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 107916 | 1ca067d5b157189a54c6b215c4a646cbbd2a422b4c421bf6b758c97797ec326f |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 51650 | 87d0592eaa700f0182cdcd7d8c0f7b2acd5ec6b8a1bedd8100b827800a25d883 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform_helium.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 41246 | 444632d9b5e04be8e4694d0dbba86aba5fa948e47eca4ba6f4ad891972db185e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11163 | 327a1f5ce3d71287c96fb2a2b50cbedf25fbd13c67edb90d0f0ea00934cb5388 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_colour_keying_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6734 | bd0b6af4dda0122db30ac8a298cfc11b0dbe54f6215470ea790faae76c506124 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_des_mask_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 10109 | 4e61835e2bdab7cf9e044dd1e3ee78a3700cd9a47d844f7a6b23b771e37d9a4a |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_masks_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 15308 | 1a5e49f73f6212c501a4e8052f52d380a42fff8c3e15d848522ec109bb9e135d |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_src_mask_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 15826 | 503f67c175906572dfe9b63cdbdeab718b53ed99198ac83ed242fcffb6c266b1 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 10571 | 56d73f69562bffc97bd2de302894ae805ca6e6a8f445e465da8a6266d667786b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_colour_keying_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 7041 | 41dd731a7afb53759cbff698471e2dc07cc5fed4478c6d19beccb3022ebc7523 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_des_mask_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11031 | d349f5dcad6ac37ff2b329a66dfc0c5c86bb59990b5d5f3804bb30044e9c2443 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_masks_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 16938 | 3ab18f22338f89f7c8e385a3c6d4202c93b58a2283843ebec9e16b466e7a5fc2 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_src_mask_and_mirror.inc | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 17510 | bd4472fde44960d3cdb95369c98f5de68a93ffe5fa84ad9bc86a990a2e16b638 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 111546 | f253e065b11dfd1d065655989c80c053982e0af37feba18b9018dbc9c26dea33 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_2xssaa_transform.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 23051 | 747c4ca6b4d155af6c70298a56a1b608a543a88b17cab06d3705bd0fa330c4ea |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_4xssaa_transform_src_mask_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 76949 | 12b95d57fcb8636662778c9c6e6612865fd0d847a5c2b47782541f8f86b683da |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 67437 | fd442a5e5577a856c52ed3f830fc57ce143eeecd486b84188cf762c34390f3a4 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 39322 | 87d9612eac3a6aa1775403025d02146d6fb9745fe2991e48d8fa1e380038f379 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 32869 | 95ed9ad437bb751dc25f68cedbf9f683fc09867940bc060f238de15763c24bff |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 18451 | 56f7fb92a51c0ea8eee14d84fb04d90465f44c04bf98258c0a1ac6fec0dabd59 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 81227 | d2b9f0054b2bd743a58bbfc260031f9e1d7275b666baa683c8572997838c4e9a |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 38388 | 1e9e745ff6d7e03cff18ecafd3d4ffbb38b539cc8afbf800a87a5d8a654b087e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_transform_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 243351 | b085ff0f85e0f92212f62eabf7fe299be75be9d07df4e7bd90eaa0e3b0683b1f |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 9808 | 0370fd1488df05a9e218e0036eab844e1f01bef5cc3057fe989a3d209c38c078 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_alpha_blending.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 136285 | 7f8364dea0153d6bf9194c47638f99562975d4a0ee8ef3233d3375add49499f7 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_async.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 34851 | d7c091545e4e2242113aa7ec71275161d0654307beb40f9d59a08b5e5ec6ad45 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_conversion.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 31315 | e83327e0f1483ceceb0b453e01cbce973ae93c6942943bce5391161ae1994d3b |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_draw.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 31582 | b111fa20a6320e3f8633b55a8e4517258f3e03300301e47e20d2417f7bb461c9 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_filter.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2207 | e49d7f612cbdcd0e232a97377b53215dd2ebe7db35fcb7b877f101c452028d35 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_helium.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 294963 | 8324403b8444ca2ac3f74898f9cd167a0c4fdddfb39d8b2e7ec42abb5bcff7e0 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_transform.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 119824 | 654dcca2d2ccfcd0e1b887ef4bdba69321b5e538919db78b525b3052ae011626 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/README.md | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 3604 | 39acedfeaeabae00467aefa6355edb2655be2b8668907aef79198099bfba62e3 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_ccca8888_transform_helium.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 56416 | 7a899f8935c04202aca0ef1bdc1899dd64db5144710df1188e6943eac13c4f91 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 39798 | 2e6ce0b5a43e2bd8555a09978b020b87ed0d942db6fab2dc59d35312b33483b6 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 20524 | 364da896fa52143b36a90b228b9d986d5ca1696618cf2f9db436fffb18f70284 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 67165 | adce8457736cf45d4f5ef612937fe6d7356627b817e3fb6ebbc466dc60c6872d |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 22879 | 9fb13e43e930e960a22d550ac71e63a1371f7af1407f6ea1d6dbbd0b923b713f |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_helium.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 46567 | 441f817722ee740b8b5b01ca61b9e2429bf710051484b0b455d7bb25b2112d36 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 22508 | 28ed944956bb492d25faa2e51af79e03355350311a5030b36ad916b78922504c |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6530 | 497212c90423800c7e29455f488a33111e17b52a8aae40263c6b03b52e6d943c |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 20541 | 07e0006857215128e227dbe87ede4bfb5cc2f0bebc2fd7a6efe15c71edf7e994 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6105 | 3f0466cbf7f7aaa81076823bf9803307aa0f4074eccdac09cdf3a3a09bfef401 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 22483 | 042d0fcdcbe07118a7404397007601a821d906d4f82a9ba9a07a33be307353a9 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6508 | d59600fe957247e043a5ca4bce1bf6cc2d32baf3fee0e329a7ec24715f4812d4 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 18566 | eba0ba7b609da36cacad23abfbd945c0355e3529c3b915667d6f87f4e4304c05 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6126 | 87e07d35b6d9200eed4153512e167921d7471bdae09e2214cd6b41b97d253856 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 6685 | 66766677fa7264852e71f80b6589d87a3198b03cc7019eee958153af733735a5 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 4198 | 99b3a42fc3b9af3be82dd0860b065a3efbe677156ffbcd4d706dbbed37c3c853 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11688 | b3b13cbd9c578e7a463a1d09029be3bcc7089f285e6ea61add7243da63efc4e4 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 2862 | bcafd2bcf36a7211e08d01e26bdb1e2a1bab4e81c617ac68369a6d2e873e3fdd |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 26662 | e58aab31766a39f685547a30220a29d5b88e4f7b6c73f68d81ac22fa79ef0294 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 5079 | bb334aee9b27cbd26982197bed2b34c5f264b83899da2e28b3f5c68210078ba4 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 14496 | 068e021697dff31c45f149f65d90b1b91dfd6ddf54dbe02f1134b4605be11bad |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 4741 | f6eb47dff38ff54ad6fb1ab14be251dbb3bad72b9823325f6aa298dc0b42e2ca |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity_helium.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 9389 | 36daffaf7430ffe55e4b49ce6a01aa83ab27b4310ecfbf1a8c7e96f7cf729fe5 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 31206 | 09433e31993cb64bfeafd892c95c025c1b06b346914904af9b86c41473624ffc |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.h.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 5107 | 39e38236c2660cdb705eb0dfa7cebc2c66a12df1e0fff8f5fe85da046fc7418e |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c.jinja | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 15024 | 6eaf353328204893ef29fed4ae48ed77a35bd2312d82fa90e7cc9cba9ea2da06 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/template/README.md | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 195 | 1ae00af09de532bd91de4155b0db79062e899b6ee1bf18ad755319b1dfa7445f |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11003 | ebe5631cdebba3589677c56baf57b5f4896c29d0681a40a15e38aec055b8a034 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 3140 | e28680e1fda3c85a4587e1486aec7eefc9d7a0671ff9d639bf3c313a60949119 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.c | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 11815 | 89b604f381b439b4f60297874d52d6b5ce6717c6fad94046aee9a10059a95784 |
| omitted | projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.h | Middlewares/Arm-2D/** | large real Arm-2D upstream source is represented by provenance/hash; patch body omitted | 3302 | 47ac75bbf4804726bc49abc3c45f1727a4317b9e0843211c69da648c9990df4e |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.pdsc | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 14303 | 72cea3f0d75fecd7b6d1ebd93235ae395f026d8352c48c58d3a2baffcbf333ef |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.sha1 | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 257602 | 9a3b0f714580ba1d53195d751e0743febb4202fca1088972f6e67920387bdc6d |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 30043 | dc36e5c463aee1beea88844c48661a2201a045717bd68ddad6c5ba3cff6cafc6 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 5563 | c0f326ab182e922fbd700c2cb6164ea998679e058721e91ec0bea0ad4b19c9a6 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3637 | 0e19ec8edc49a897eed2b02acfbb36da98da1199931765d5a5269857afeb50a5 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3552 | f173a3dace7642876073eef169a3b6201b7c77fe6dd7aebe8f41429ceb78ddce |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_helium_utils.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 21467 | b2908dda4945d1a3f99d29330cb5439e3b1852a06d84c6560d87d7822489f46d |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 8404 | f170e01c8f852f6fa50dff547c3c8e56facc6a2a1186ac409a54bbc93b32c8ed |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 1812 | 51599ec6c3f1840d148d76cdf728d17bcf5de31943b41ee8dbb07c407a45cfa0 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_memory.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 5184 | d5916539a16ad055c84a5bb5d5399fedd4a491e2c44a113dcce8ebb6dc7c089b |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 15011 | 4c8451b4da0085ef63ef23db08c8dcf13dc2cc96c6bc4d3c584762d4aa75be5b |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3813 | 3b9028e261096c695af06e39ca7793543286c5382899f8f35ea746effecdd61d |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 10367 | cbf227724f370e5aaa5b15baaea48638f0e00b19baba1ad8e29ea6fd23636500 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 4433 | f1834a5927205692d747151ffbdb9771089291b398611b83ea5c0fa9e52ee143 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 9807 | 7193f27bfdd6db7dc91a8aca9ba38c9af38ead6305940672e121312a6f7e171b |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 8343 | 55d4102cbb7ef14412452b28dcbab332f2e6d8ef6950be121e7295b1c2d20d4b |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 26199 | 3fd31426a623339e2fa60d9aa2d67b880967a4edca420e3fd7ee3733fb65d072 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 5163 | 43f3935b4595ca51d5089b5ccd78e2689bbd1898616bec17b9e785e680fdf57b |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 2828 | f22b8c3ae42fd3cfdd154e1dd4fd0638985c1739ccb9472907a74f250d0e6b25 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 2629 | ce68b78ca4312607eb5e1e5a159eabc86e2f73af6199705e07a67e36e4aed9ee |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 10923 | 0e0123c33173162631186f4bd7c44ce796dbf1cdc2015ccd30d3ac745ae201ad |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 4082 | 743c1337cef2cd59a920affa8032a2e0596052853e95ab2bba5b59e81aa31637 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 29222 | f753aea94700e87e43f66b7e5814c9d55c06bcf3606bfac3a369a1c10744f9e5 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 1299 | ddc9e1bba2a990a5bc32c0c853c32108bee85791cac9e3cb1911c8eb611a61de |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/debug.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 4971 | 55e7557a5e9985bebe4b24341339962a970f5dfa84d5fb474a49a6a0577f45ca |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 10040 | 936242bb7a79eb0a7454636144fc95bf7e62b34d39d3b6c1fca30a350fe80344 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 5322 | 540125b782f58935eb6f9c03a7e3dd49f9941de0df9a3b91b0561cd5bc5be3a8 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 10094 | 3e59abe1cf3fffe19ff0590c614109e7d445101cc67e301d94b10a8adcfb72ea |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3501 | dbc95d8026960350b6e9bfc48fe94ef7f7e860f91564e57ee5a2be8cdffee195 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 98240 | 3d079f167ce03e1cb83479913b2bfb14c78fe3a76ba969fa2579739f06dd2643 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 9196 | 4b002e4ba6abada63777975faf63cd0ba071130250c74394e9c2917504bc4d4f |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 9162 | 75550ce2565d3f1ecb5b41feac0cf268f80d473a36cb21ecdda205b248bf23ea |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 2987 | 92d107b03f05eabc8c4a82def3756e099e91572c54179a0598f90a455b923384 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 34628 | 1fa1d78a0205d9a3155121edcdddf7e5f6ed1c9292f2f0e2e9efcd3c7471ed40 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 10199 | 26a8e871f71889f70b4601cd0ad39b3460a8e03a01fb63b766d3b7ce8e8b4245 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_utils.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 25412 | 4d437c15ed00f988622db7e356a4cd721d50d53474f3edd304c533bffcfcbf44 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/none.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 14967 | ca27e36ba16457d2a9abc1f13e2e0f249ad6ba4642efc446aa2faeb5ace0a257 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/quaternion_math_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 5587 | 7bb1d91577b4c11d5d50fcf827ccb5ce38236c776c094fae9ad081489c7bca65 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 30076 | 4a35f6b1ba618fc8604bb6430421c801e718abc93a2430593fa8d8e936bf53ee |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 8544 | 7738074df7a383bb1906af49c4add0485532f1edf89df81b4c5c431fe1c7f1d8 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 15141 | 9ff9b0fb3843323f65d9697d68f0dd6d12a611c119f5346d3ebb1fd75c3fc803 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 6310 | 01804843a897720f72f3d3ad40da9613990f703f242a2440bddaac4584f3a35e |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_defines.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 1441 | ee7b52a08add7d2bddc40caf3d9913a58eab9244cb62ba2833333d433694b1c0 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 9922 | 594aa1b2bdbde7a87c043710f6bd4a789617aa56f25b96406b1718fc41ee82e4 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 9687 | 72c8c9357a62e358eb21b9716a4c4b9e0ce335b6221e19ea549c8bfc27e7237e |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 30651 | 145207df44784a3ad61c00cbb12bc116a02e4c30fb86d0cfd6cdcd130b748f1a |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions_f16.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 7937 | 48631b92b3377a49728af6b927d1bd8304374ca9c56e6c22f53b7ee4d5256968 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/utils.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 6048 | 2f199a4ef53eacb6dc36b9b1329f5514676d374466bd84284a645d553bf71deb |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/LICENSE.txt | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 11357 | b40930bbcf80744c86c46a12bc9da056641d722716c378f5659b9e555ef833e1 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_sorting.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 6640 | 0abf0114a2f2d0feae3508c7c184c60227a29b036374c17fbc1794b9be18712f |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_fft.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 11426 | e04a9a590355df232178853ec121e4903d9feccb185c86191844b9d4215be548 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_filtering.h | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 123649 | d1657c0e9c743727833e4c4c0b22160f37c66137d4e0a3280795ec2d109cb501 |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Source/CommonTables/arm_common_tables.c | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 4843505 | c54cce284a74c2b02d12d9db2f7ea48f6b0eb09f07bd4de8e86baaf18ecd339a |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_f32.c | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3567 | 12c6b38fa31af8137cdd48b831b22fd54f49b1d98bb6edb82f5c3b8208d5abac |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_q31.c | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 2573 | 5b997b15b674be9f53d8b28eef434aedbf9d869f933431ec00c536ebe7d948ea |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_f32.c | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 3517 | a795df2c0fe63409b0839bc82ab886071b1d3918be1ca8a7e093930639e97abf |
| omitted | projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_q31.c | Middlewares/CMSIS-DSP/** | large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted | 2498 | 20f87e68f53afc74d625a404506410de007452c9007d516698a2da46f32abdef |
```diff
diff --git a/projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx b/projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
index fadb5e0..21ef26e 100644
--- a/projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
+++ b/projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
@@ -335,9 +335,9 @@
             <v6Rtti>0</v6Rtti>
             <VariousControls>
               <MiscControls></MiscControls>
-              <Define>USE_HAL_DRIVER,STM32F103xE</Define>
+              <Define>USE_HAL_DRIVER,STM32F103xE,ARM_MATH_CM3,ARM_DSP_CONFIG_TABLES,ARM_FAST_ALLOW_TABLES,ARM_TABLE_SIN_F32,ARM_TABLE_SIN_Q31</Define>
               <Undefine></Undefine>
-              <IncludePath>..\..\Drivers\CMSIS\Device\ST\STM32F1xx\Include;..\..\Drivers\STM32F1xx_HAL_Driver\Inc;..\..\Drivers\CMSIS\Include;..\..\Drivers\;..\..\User;..\..\Middlewares</IncludePath>
+              <IncludePath>..\..\Drivers\CMSIS\Device\ST\STM32F1xx\Include;..\..\Drivers\STM32F1xx_HAL_Driver\Inc;..\..\Drivers\CMSIS\Include;..\..\Drivers\;..\..\User;..\..\Middlewares;..\..\Middlewares\Arm-2D\Library\Include;..\..\Middlewares\CMSIS-DSP\Include;..\..\Middlewares\CMSIS-DSP\PrivateInclude</IncludePath>
             </VariousControls>
           </Cads>
           <Aads>
@@ -436,6 +436,30 @@
               <FileType>1</FileType>
               <FilePath>..\..\User\d601_gpio.c</FilePath>
             </File>
+            <File>
+              <FileName>d601_arm2d_demo.c</FileName>
+              <FileType>1</FileType>
+              <FilePath>..\..\User\d601_arm2d_demo.c</FilePath>
+            </File>
+          </Files>
+        </Group>
+        <Group>
+          <GroupName>Middlewares/Arm-2D</GroupName>
+          <Files>
+            <File><FileName>arm_2d.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\Arm-2D\Library\Source\arm_2d.c</FilePath></File>
+            <File><FileName>arm_2d_draw.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\Arm-2D\Library\Source\arm_2d_draw.c</FilePath></File>
+            <File><FileName>__arm_2d_tile.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\Arm-2D\Library\Source\__arm_2d_tile.c</FilePath></File>
+            <File><FileName>__arm_2d_core.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\Arm-2D\Library\Source\__arm_2d_core.c</FilePath></File>
+          </Files>
+        </Group>
+        <Group>
+          <GroupName>Middlewares/CMSIS-DSP</GroupName>
+          <Files>
+            <File><FileName>arm_sin_f32.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_sin_f32.c</FilePath></File>
+            <File><FileName>arm_sin_q31.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_sin_q31.c</FilePath></File>
+            <File><FileName>arm_cos_f32.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_cos_f32.c</FilePath></File>
+            <File><FileName>arm_cos_q31.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_cos_q31.c</FilePath></File>
+            <File><FileName>arm_common_tables.c</FileName><FileType>1</FileType><FilePath>..\..\Middlewares\CMSIS-DSP\Source\CommonTables\arm_common_tables.c</FilePath></File>
           </Files>
         </Group>
         <Group>
@@ -555,4 +579,4 @@
       </Layer>
     </Layers>
   </LayerInfo>
-</Project>
\ No newline at end of file
+</Project>
diff --git a/projects/01_baseline/User/main.c b/projects/01_baseline/User/main.c
index 7467c9a..68ac313 100644
--- a/projects/01_baseline/User/main.c
+++ b/projects/01_baseline/User/main.c
@@ -5,6 +5,7 @@
 #include "jsonrpc_handler.h"
 #include "d601_lcd.h"
 #include "d601_gpio.h"
+#include "d601_arm2d_demo.h"
 
 int main(void)
 {
@@ -18,10 +19,12 @@ int main(void)
     d601_lcd_init();
     d601_gpio_init();
     printf("[D601-F103] LCD ID=0x%04X\r\n", (unsigned int)d601_lcd_get_id());
+    d601_arm2d_demo_init();
     printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");
 
     while (1)
     {
         jsonrpc_process();
+        d601_arm2d_demo_task();
     }
 }
diff --git a/projects/01_baseline/User/arm_2d_cfg.h b/projects/01_baseline/User/arm_2d_cfg.h
new file mode 100644
index 0000000..93b2c4e
--- /dev/null
+++ b/projects/01_baseline/User/arm_2d_cfg.h
@@ -0,0 +1,19 @@
+#ifndef __ARM_2D_USER_CFG_H__
+#define __ARM_2D_USER_CFG_H__
+
+#define __ARM_2D_HAS_ASYNC__                                      0
+#define __ARM_2D_HAS_HELIUM__                                     0
+#define __ARM_2D_HAS_FPU__                                        0
+#define __ARM_2D_HAS_ANTI_ALIAS_TRANSFORM__                       0
+#define __ARM_2D_CFG_FORCED_FIXED_POINT_TRANSFORM__               1
+#define __ARM_2D_CFG_SUPPORT_COLOUR_CHANNEL_ACCESS__              0
+#define __ARM_2D_CFG_SUPPORT_CCCA8888_IMPLICIT_CONVERSION__       0
+#define __ARM_2D_CFG_USE_IIR_BLUR_REVERSE_PATH__                  0
+#define __ARM_2D_CFG_SUPPORT_TRANSFORM_FOR_NON_A8_FONTS__         0
+#define __ARM_2D_CFG_ENABLE_LOG__                                 0
+#define __ARM_2D_CFG_LOG_OUTPUT_SUPPORT_COLOUR__                  0
+#define __GLCD_CFG_COLOUR_DEPTH__                                 16
+#define __GLCD_CFG_SCEEN_WIDTH__                                  240
+#define __GLCD_CFG_SCEEN_HEIGHT__                                 320
+
+#endif
diff --git a/projects/01_baseline/User/d601_arm2d_demo.c b/projects/01_baseline/User/d601_arm2d_demo.c
new file mode 100644
index 0000000..6aa748d
--- /dev/null
+++ b/projects/01_baseline/User/d601_arm2d_demo.c
@@ -0,0 +1,152 @@
+#include "d601_arm2d_demo.h"
+
+#include <stdio.h>
+#include <string.h>
+#include "arm_2d.h"
+#include "arm_math.h"
+#include "d601_lcd.h"
+
+#define D601_ARM2D_TILE_W 120
+#define D601_ARM2D_TILE_H 80
+#define D601_ARM2D_TILE_X 60
+#define D601_ARM2D_TILE_Y 92
+
+static uint16_t s_tile_pixels[D601_ARM2D_TILE_W * D601_ARM2D_TILE_H];
+static arm_2d_tile_t s_tile;
+static uint32_t s_frame;
+static uint32_t s_last_sum;
+static uint32_t s_loop;
+
+static uint16_t rgb565(uint8_t r, uint8_t g, uint8_t b)
+{
+    return (uint16_t)((((uint16_t)r & 0xF8U) << 8) |
+                      (((uint16_t)g & 0xFCU) << 3) |
+                      (((uint16_t)b) >> 3));
+}
+
+static void tile_fill_region(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colour)
+{
+    arm_2d_region_t region;
+
+    region.tLocation.iX = x;
+    region.tLocation.iY = y;
+    region.tSize.iWidth = w;
+    region.tSize.iHeight = h;
+    (void)arm_2d_rgb16_fill_colour(&s_tile, &region, colour);
+}
+
+static void tile_draw_point(int16_t x, int16_t y, uint16_t colour)
+{
+    arm_2d_location_t point;
+
+    if ((x < 0) || (x >= D601_ARM2D_TILE_W) || (y < 0) || (y >= D601_ARM2D_TILE_H)) {
+        return;
+    }
+
+    point.iX = x;
+    point.iY = y;
+    (void)arm_2d_rgb16_draw_point(&s_tile, point, colour);
+}
+
+static uint32_t tile_checksum(void)
+{
+    uint32_t sum = 0x6012D09UL;
+    uint32_t i;
+
+    for (i = 0; i < (uint32_t)(D601_ARM2D_TILE_W * D601_ARM2D_TILE_H); ++i) {
+        sum = (sum << 5) ^ (sum >> 2) ^ s_tile_pixels[i] ^ i;
+    }
+
+    return sum;
+}
+
+static void render_frame(uint32_t frame)
+{
+    uint16_t x;
+    int32_t sin_q1000;
+    int32_t cos_q1000;
+    float32_t phase = (float32_t)(frame & 0x3FU) * 0.09817477f;
+    float32_t s = arm_sin_f32(phase);
+    float32_t c = arm_cos_f32(phase);
+
+    sin_q1000 = (int32_t)(s * 1000.0f);
+    cos_q1000 = (int32_t)(c * 1000.0f);
+
+    tile_fill_region(0, 0, D601_ARM2D_TILE_W, D601_ARM2D_TILE_H, rgb565(5, 16, 42));
+    tile_fill_region(0, 0, D601_ARM2D_TILE_W, 18, rgb565(18, 86, 132));
+    tile_fill_region(0, 54, D601_ARM2D_TILE_W, 26, rgb565(36, 96, 42));
+    tile_fill_region(6, 6, 108, 4, rgb565(252, 214, 62));
+    tile_fill_region(8, 66, 104, 5, rgb565(210, 54, 46));
+
+    for (x = 0; x < D601_ARM2D_TILE_W; ++x) {
+        float32_t a = ((float32_t)x * 0.10471976f) + phase;
+        int16_t y = (int16_t)(38 + (int32_t)(arm_sin_f32(a) * 24.0f));
+        uint16_t colour = (arm_cos_f32(a) > 0.0f) ? rgb565(255, 255, 255) : rgb565(45, 210, 255);
+        tile_draw_point((int16_t)x, y, colour);
+        if (y > 0) {
+            tile_draw_point((int16_t)x, (int16_t)(y - 1), colour);
+        }
+    }
+
+    tile_draw_point((int16_t)(60 + (int32_t)(c * 42.0f)),
+                    (int16_t)(38 + (int32_t)(s * 26.0f)),
+                    rgb565(255, 96, 32));
+
+    s_last_sum = tile_checksum();
+    d601_lcd_draw_bitmap(D601_ARM2D_TILE_X, D601_ARM2D_TILE_Y,
+                         D601_ARM2D_TILE_W, D601_ARM2D_TILE_H,
+                         s_tile_pixels);
+
+    printf("[ARM2D-RUN9] heartbeat=%lu frame=%lu tile=%ux%u sum=0x%08lX\r\n",
+           (unsigned long)s_loop,
+           (unsigned long)frame,
+           (unsigned int)D601_ARM2D_TILE_W,
+           (unsigned int)D601_ARM2D_TILE_H,
+           (unsigned long)s_last_sum);
+    printf("[ARM2D-RUN9] trig sin_q1000=%ld cos_q1000=%ld\r\n",
+           (long)sin_q1000,
+           (long)cos_q1000);
+}
+
+void d601_arm2d_demo_init(void)
+{
+    memset(&s_tile, 0, sizeof(s_tile));
+    s_tile.tInfo.bIsRoot = 1;
+    s_tile.tInfo.bHasEnforcedColour = 1;
+    s_tile.tInfo.tColourInfo.chScheme = ARM_2D_COLOUR_RGB565;
+    s_tile.tRegion.tLocation.iX = 0;
+    s_tile.tRegion.tLocation.iY = 0;
+    s_tile.tRegion.tSize.iWidth = D601_ARM2D_TILE_W;
+    s_tile.tRegion.tSize.iHeight = D601_ARM2D_TILE_H;
+    s_tile.phwBuffer = s_tile_pixels;
+
+    arm_2d_init();
+
+    printf("[ARM2D-RUN9] start runId=%s\r\n", D601_ARM2D_RUN_ID);
+    printf("[ARM2D-RUN9] arm2d=ARM-software/Arm-2D tag=%s commit=%s\r\n",
+           D601_ARM2D_TAG,
+           D601_ARM2D_COMMIT);
+    printf("[ARM2D-RUN9] cmsisdsp=ARM.CMSIS-DSP Pack 1.14.2\r\n");
+
+    d601_lcd_show_string(12, 58, "ARM2D-RUN9", D601_LCD_YELLOW, D601_LCD_BLACK, 2);
+    render_frame(0);
+}
+
+void d601_arm2d_demo_task(void)
+{
+    ++s_loop;
+    if ((s_loop & 0x00FFUL) == 0UL) {
+        ++s_frame;
+        render_frame(s_frame);
+    }
+}
+
+uint32_t d601_arm2d_demo_frame_count(void)
+{
+    return s_frame;
+}
+
+uint32_t d601_arm2d_demo_last_sum(void)
+{
+    return s_last_sum;
+}
diff --git a/projects/01_baseline/User/d601_arm2d_demo.h b/projects/01_baseline/User/d601_arm2d_demo.h
new file mode 100644
index 0000000..88f915f
--- /dev/null
+++ b/projects/01_baseline/User/d601_arm2d_demo.h
@@ -0,0 +1,15 @@
+#ifndef D601_ARM2D_DEMO_H
+#define D601_ARM2D_DEMO_H
+
+#include <stdint.h>
+
+#define D601_ARM2D_RUN_ID "issue1082-real-arm2d-cmsisdsp-run9-20260609-1821"
+#define D601_ARM2D_TAG    "v1.2.4"
+#define D601_ARM2D_COMMIT "b73ec43b6567feffe57642861e8b5eb083788011"
+
+void d601_arm2d_demo_init(void);
+void d601_arm2d_demo_task(void);
+uint32_t d601_arm2d_demo_frame_count(void);
+uint32_t d601_arm2d_demo_last_sum(void);
+
+#endif
# CaseRun diffCollection omitted files from patch body:
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/README.md rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6093 sha256=c1103b647525c121c384ca07bb5c33abeba1f282e35796eaf1f1e8a6c3e77cd7
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_direct.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=702618 sha256=4e20aefa89552cf17d4167964c28b75978ca675eeeef912ee89561e566ec83cc
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50196 sha256=571d66e07011770d9ff35b2c99d8e55653b81d4b3f36246dd8ad64e9d1d4466c
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=57001 sha256=09e2987ce098ba23a60fdc52d901f26532c5ab7af8b2d8ad8883804e4a766aae
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_horizontal_line_mask.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14191 sha256=91413cec7defbb011d83afac4a6547d0d3cefd7c0cac78e9af177bd94c834c26
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_mask_and_mirroring.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=28581 sha256=b0d1d412829aa14bc8c8fa832bda96177c44268472212cf15487f977cf285238
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_fill_colour_with_vertical_line_mask.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14191 sha256=53fe886bab2694ecaf70be3e7ad50a655bacda579fa9f9389fbf998b0bb2df01
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_iir_blur.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7810 sha256=ee9de1c0f211a245733db2efc8144947d500c72d98dcb99dd0a58b44b350b4b6
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_filter_reverse_colour.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5828 sha256=093682917e626d3d1793ddc6e21dc42d4b5d6d2d10d6a08cc3572f54b39f5f6b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_impl.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=81634 sha256=f7d1b55a3fcd923b485c6fc3207314897d74df1bb855b6daf8b4b8bc2beda946
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7921 sha256=7031dd6c77345aa39c0728fe29f1f54b5041e400981cbe2fbbcdee25aa9029df
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_math_helium.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11770 sha256=86c8e6880e65347a49b0fdb025ef47844fb4ee4783b5a982204e3f43f25d7fed
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=55371 sha256=2ee3f92219e30716c4bdabbd6bf06a4077faf432df22a5470be8d6fd56810d8e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_paving_helium.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50584 sha256=398648b0a658c8443b650015a3a20bf76ed1617aad8a917c34f03be386ba4f3a
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_2xssaa_transform.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2620 sha256=1d227751fcd1e66c2df4dc89672616aac43466b868dd9109e26fe9897801e28b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_copy_with_source_mask_and_opacity.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=8531 sha256=390031f297aead07b7da04ae17354dcefbbf45326e47567ed7cebdf6848abdb5
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_opacity.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7589 sha256=a8ca41e621d5cedfcab31e473be3f9ce1340d825bf7c222bd99c516e0129de88
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_tile_fill_with_source_mask_and_opacity.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=8623 sha256=78e2fec4e1b21ed81ffdcca18ff7e7ee78f97a528da02648a4af00644fac041e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/__arm_2d_utils_helium.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=12753 sha256=aeae45284792a62ba243ed91fd3370d5ed653813bcf68f6b1c7daf825e09cf74
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11976 sha256=a06b06c74e188a86ef93deb4966e054d0e538e54b7b5295a2a28e7da5e0a1d46
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_alpha_blending.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=253192 sha256=dc6f4a6d55c7eaf06b2899e42e54774a253632fd5f20f59949151b9aa9958b1d
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_conversion.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15531 sha256=ec44d01e4ceb742ea286d26a25f71a01d8fd9eef1eae59331e793db331d4b1c3
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=27029 sha256=037cf3d5e060f0a58fe6ed3523e1342ede8510d84b89396fd7cfa3c3cc4b9229
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_features.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13037 sha256=eb09cfab1f453ecf7cb56c5ea4f3bd66afbee4c9df1b5439164de814b274e253
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_filter.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=1837 sha256=cd38c6905643b15057b6dbf6de1418531808fff21b606e289d7950adafb7c2ea
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_op.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=27045 sha256=f2d5e9cbcfc510f13b29978c291f6ba7aec1072bfa6d19d85954b08e68f6c314
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=118097 sha256=1c67b99565384ae4f58f5f5c69de937c6417ba0487ddf60b35df10d42c22c020
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_transform.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=358855 sha256=27938bc95927626756846813cb73a039c398f8b72971d3c70434dcce9829f271
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=54562 sha256=c0448752cc11ac9a3d33eec3275466e52498ba1c64cf8f0c78d053b54b65706b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_utils.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=55570 sha256=5d1732205efecb5382fcee2a74de13b0af99cac7a2385e410184dfe5354717fa
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13958 sha256=ba5b164c3fead82b80cbae486db77b17255f1f8d807f781b942d85442079dd25
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_aci.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2613 sha256=07296a23296ed813b89b8e4c8a293dac27722aabc2c7917c463bd801536b047e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_user_arch_port.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2858 sha256=f6d404214925c9c1f563c24c2d4d22ebd0d8475bbc9a9f4efce83f52456963c3
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_alpha_blending_wrapper.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=70380 sha256=96eafd5446c2a2bb114800027cc20c21ba33ee57966c7e12c1317a62ef17c345
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ccca8888_transform_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=136817 sha256=24c3cb360a05c161620b3034d194378360c606a6cdaeac4734b54647bd7a09a6
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_conversion_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=34238 sha256=db7d67d0a201bb64084e21d67436c7f3663ab90596d194cce51ba9e779bb553f
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_mirror_wrapper.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9568 sha256=4aa096a4198c1a81b31ee31cc2fd166261075e0a45e04ffb77af03bf7d56be4b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_colour_keying_and_mirror_wrapper.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10363 sha256=ae62006da3bc01d2a0f8962e1d3ba270333e2c32be8ab9c85957aabb13c8a397
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_copy_with_mask_and_mirror_wrapper.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=23195 sha256=da3a6f1766e500550550d57491c5a98021dc6080abede54c0b709db04942e6e6
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_core.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=100762 sha256=948f3d1f3737cb0a0e5a77e053b839091779d66310e9e22c2d16de676b57cce5
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=97922 sha256=6eab5de88bedcbe9c5a005d8a6234f7fb585d878caffe860cb48f8b375712ae4
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=104134 sha256=b620e7012b068caeb7a6989cd66a712324c50766ca9cead2157a353714f3c4d8
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=183449 sha256=a164bed9e178a8435bb3381d6dcecd20f90c8e608c9fae9e8c8bc25fd8d8ec69
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_alpha_gradient_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=152465 sha256=26d2f264c4e7e212ea3a100086f92847f365fb1000ddbc4befbffbefa83a5393
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76970 sha256=61730b7041df584da415f16eda0342fdb1f3de39cd2ae32d1b34fd98298f4c68
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_horizontal_line_mask_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=50957 sha256=1799828853efdaa363d1d0f4363aaa3bd6d75668006b78b836056006fbef8f71
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=130438 sha256=bd47cdd0d3df50899dcecd163bfc79a307d4f0102f31555490da25c5024034fc
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_mask_and_mirroring_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=71956 sha256=09a9e89b8eb2e170062eea08304c85b1bace01053abc2ba1821b25f596e8abc2
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76968 sha256=62bfbde4d3ec137a884350d50a6eb3a74b5853dc9fbf88e47c1f6ce7c65e7194
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_fill_colour_with_vertical_line_mask_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=45204 sha256=6af6230181a59c977f907b0496d3bb6eea3594df7b410a4e4cbc32cac229a65c
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=42298 sha256=1dbfc97b512c1044cae73b0f204bb799432e4ed6046b1c0de28a9a2dad9ef922
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_iir_blur_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=54159 sha256=f824215089bee1c3d14942a83400fdfae4176a981afc05478345c2986817bcb2
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11111 sha256=f9d8184be89c2150e2af15b3fffcd0900e292b13c528fc2e74f720fbe4ae4e82
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_filter_reverse_colour_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6637 sha256=4a5d71f44889541fcdb45ce18a90a33ebc4ef02bcbc539b74bd97a15267eba78
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_blending.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5248 sha256=11534b17595c0c00ce38ccb338534e57409df971f894de43fc35d3468c4439ae
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=74606 sha256=53fe1dc126180933ce16b29264ec87fd80530f8770d81ccfc0905ca6150dc44d
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_alpha_mask_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=108098 sha256=f0428f549cee7aa264ba5bc36e2cafb84760ce0a3fa29c6704aaed6449270098
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_colour_filling_with_alpha.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20477 sha256=8df01e017dfc8ef4b76084c7fe82ed0ccd6498b5ff79bf08c011aefeac7abed3
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=64862 sha256=78a0aa55765ff6604143824e3a9890b5a7a7802dbee9943dbc98d47a0b96093e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_copy_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=38848 sha256=16cadadd6f5cd4f0ed38245dfacf2db51dea925d46e059ce77bf64374294485a
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=12762 sha256=af15b40f04a3e83bffcfab4779cb2fadb88297bba5d04bc3d55981b9ac8db1fd
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_draw_pattern_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=51156 sha256=06e1741561780bbe2423f8abec7e1da5e797dd161b2ceb19dc393f2c0aa2a2b1
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2170 sha256=bb0e0324a589feb9d62ce7477d7eb282ca16401dd3df54ef2fecb14caca21ce9
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_fill_colour_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3426 sha256=6e3cccedb16720d369ed952be66598be0c6a1330f6d86e9d519970ef06d08707
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_ccca8888_trans.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=13107 sha256=2beafd5ac640dd9702e6fc9719685ab0aa7cbfb61d8a52c9149c4d77ae9f72a5
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_and_fill.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=49718 sha256=35fc31bbb8b18b8521c4c84047f842d3ef85cdba4122c8c21a1fb6c06e85d460
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=46340 sha256=28fd08359b39767476a5e339aecc400df4b94979ee0252f57ffd0862880885b9
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_copy_with_masks_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=82248 sha256=e45a6c791eb0684391a8b8338a75a3a364cf4e1f632f4aae67b69fc62ea86d22
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18366 sha256=f29ce6723d359b4355c04796029c1e022da7dbddf7a817affc857a5a6be47094
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_meta_trans_with_masks_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=107916 sha256=1ca067d5b157189a54c6b215c4a646cbbd2a422b4c421bf6b758c97797ec326f
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=51650 sha256=87d0592eaa700f0182cdcd7d8c0f7b2acd5ec6b8a1bedd8100b827800a25d883
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_ll_transform_helium.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=41246 sha256=444632d9b5e04be8e4694d0dbba86aba5fa948e47eca4ba6f4ad891972db185e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11163 sha256=327a1f5ce3d71287c96fb2a2b50cbedf25fbd13c67edb90d0f0ea00934cb5388
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_colour_keying_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6734 sha256=bd0b6af4dda0122db30ac8a298cfc11b0dbe54f6215470ea790faae76c506124
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_des_mask_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10109 sha256=4e61835e2bdab7cf9e044dd1e3ee78a3700cd9a47d844f7a6b23b771e37d9a4a
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_masks_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15308 sha256=1a5e49f73f6212c501a4e8052f52d380a42fff8c3e15d848522ec109bb9e135d
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_copy_with_src_mask_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15826 sha256=503f67c175906572dfe9b63cdbdeab718b53ed99198ac83ed242fcffb6c266b1
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=10571 sha256=56d73f69562bffc97bd2de302894ae805ca6e6a8f445e465da8a6266d667786b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_colour_keying_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=7041 sha256=41dd731a7afb53759cbff698471e2dc07cc5fed4478c6d19beccb3022ebc7523
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_des_mask_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11031 sha256=d349f5dcad6ac37ff2b329a66dfc0c5c86bb59990b5d5f3804bb30044e9c2443
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_masks_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=16938 sha256=3ab18f22338f89f7c8e385a3c6d4202c93b58a2283843ebec9e16b466e7a5fc2
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_meta_fill_with_src_mask_and_mirror.inc rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=17510 sha256=bd4472fde44960d3cdb95369c98f5de68a93ffe5fa84ad9bc86a990a2e16b638
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=111546 sha256=f253e065b11dfd1d065655989c80c053982e0af37feba18b9018dbc9c26dea33
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_2xssaa_transform.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=23051 sha256=747c4ca6b4d155af6c70298a56a1b608a543a88b17cab06d3705bd0fa330c4ea
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_4xssaa_transform_src_mask_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=76949 sha256=12b95d57fcb8636662778c9c6e6612865fd0d847a5c2b47782541f8f86b683da
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=67437 sha256=fd442a5e5577a856c52ed3f830fc57ce143eeecd486b84188cf762c34390f3a4
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_copy_with_source_mask_and_opacity_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=39322 sha256=87d9612eac3a6aa1775403025d02146d6fb9745fe2991e48d8fa1e380038f379
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=32869 sha256=95ed9ad437bb751dc25f68cedbf9f683fc09867940bc060f238de15763c24bff
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_opacity_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18451 sha256=56f7fb92a51c0ea8eee14d84fb04d90465f44c04bf98258c0a1ac6fec0dabd59
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=81227 sha256=d2b9f0054b2bd743a58bbfc260031f9e1d7275b666baa683c8572997838c4e9a
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=38388 sha256=1e9e745ff6d7e03cff18ecafd3d4ffbb38b539cc8afbf800a87a5d8a654b087e
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/__arm_2d_transform_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=243351 sha256=b085ff0f85e0f92212f62eabf7fe299be75be9d07df4e7bd90eaa0e3b0683b1f
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9808 sha256=0370fd1488df05a9e218e0036eab844e1f01bef5cc3057fe989a3d209c38c078
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_alpha_blending.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=136285 sha256=7f8364dea0153d6bf9194c47638f99562975d4a0ee8ef3233d3375add49499f7
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_async.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=34851 sha256=d7c091545e4e2242113aa7ec71275161d0654307beb40f9d59a08b5e5ec6ad45
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_conversion.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31315 sha256=e83327e0f1483ceceb0b453e01cbce973ae93c6942943bce5391161ae1994d3b
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_draw.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31582 sha256=b111fa20a6320e3f8633b55a8e4517258f3e03300301e47e20d2417f7bb461c9
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_filter.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2207 sha256=e49d7f612cbdcd0e232a97377b53215dd2ebe7db35fcb7b877f101c452028d35
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_helium.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=294963 sha256=8324403b8444ca2ac3f74898f9cd167a0c4fdddfb39d8b2e7ec42abb5bcff7e0
# - projects/01_baseline/Middlewares/Arm-2D/Library/Source/arm_2d_transform.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=119824 sha256=654dcca2d2ccfcd0e1b887ef4bdba69321b5e538919db78b525b3052ae011626
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/README.md rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3604 sha256=39acedfeaeabae00467aefa6355edb2655be2b8668907aef79198099bfba62e3
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_ccca8888_transform_helium.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=56416 sha256=7a899f8935c04202aca0ef1bdc1899dd64db5144710df1188e6943eac13c4f91
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=39798 sha256=2e6ce0b5a43e2bd8555a09978b020b87ed0d942db6fab2dc59d35312b33483b6
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20524 sha256=364da896fa52143b36a90b228b9d986d5ca1696618cf2f9db436fffb18f70284
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=67165 sha256=adce8457736cf45d4f5ef612937fe6d7356627b817e3fb6ebbc466dc60c6872d
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_and_mask.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22879 sha256=9fb13e43e930e960a22d550ac71e63a1371f7af1407f6ea1d6dbbd0b923b713f
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_alpha_gradient_helium.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=46567 sha256=441f817722ee740b8b5b01ca61b9e2429bf710051484b0b455d7bb25b2112d36
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22508 sha256=28ed944956bb492d25faa2e51af79e03355350311a5030b36ad916b78922504c
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_horizontal_line_mask.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6530 sha256=497212c90423800c7e29455f488a33111e17b52a8aae40263c6b03b52e6d943c
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=20541 sha256=07e0006857215128e227dbe87ede4bfb5cc2f0bebc2fd7a6efe15c71edf7e994
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_mask_and_mirroring.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6105 sha256=3f0466cbf7f7aaa81076823bf9803307aa0f4074eccdac09cdf3a3a09bfef401
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=22483 sha256=042d0fcdcbe07118a7404397007601a821d906d4f82a9ba9a07a33be307353a9
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_fill_colour_with_vertical_line_mask.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6508 sha256=d59600fe957247e043a5ca4bce1bf6cc2d32baf3fee0e329a7ec24715f4812d4
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=18566 sha256=eba0ba7b609da36cacad23abfbd945c0355e3529c3b915667d6f87f4e4304c05
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_iir_blur.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6126 sha256=87e07d35b6d9200eed4153512e167921d7471bdae09e2214cd6b41b97d253856
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=6685 sha256=66766677fa7264852e71f80b6589d87a3198b03cc7019eee958153af733735a5
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_filter_reverse_colour.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=4198 sha256=99b3a42fc3b9af3be82dd0860b065a3efbe677156ffbcd4d706dbbed37c3c853
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11688 sha256=b3b13cbd9c578e7a463a1d09029be3bcc7089f285e6ea61add7243da63efc4e4
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_2xssaa_transform.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=2862 sha256=bcafd2bcf36a7211e08d01e26bdb1e2a1bab4e81c617ac68369a6d2e873e3fdd
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=26662 sha256=e58aab31766a39f685547a30220a29d5b88e4f7b6c73f68d81ac22fa79ef0294
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_copy_with_source_mask_and_opacity.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5079 sha256=bb334aee9b27cbd26982197bed2b34c5f264b83899da2e28b3f5c68210078ba4
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=14496 sha256=068e021697dff31c45f149f65d90b1b91dfd6ddf54dbe02f1134b4605be11bad
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=4741 sha256=f6eb47dff38ff54ad6fb1ab14be251dbb3bad72b9823325f6aa298dc0b42e2ca
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_opacity_helium.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=9389 sha256=36daffaf7430ffe55e4b49ce6a01aa83ab27b4310ecfbf1a8c7e96f7cf729fe5
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=31206 sha256=09433e31993cb64bfeafd892c95c025c1b06b346914904af9b86c41473624ffc
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity.h.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=5107 sha256=39e38236c2660cdb705eb0dfa7cebc2c66a12df1e0fff8f5fe85da046fc7418e
# - projects/01_baseline/Middlewares/Arm-2D/Library/jinja/__arm_2d_tile_fill_with_source_mask_and_opacity_helium.c.jinja rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=15024 sha256=6eaf353328204893ef29fed4ae48ed77a35bd2312d82fa90e7cc9cba9ea2da06
# - projects/01_baseline/Middlewares/Arm-2D/Library/template/README.md rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=195 sha256=1ae00af09de532bd91de4155b0db79062e899b6ee1bf18ad755319b1dfa7445f
# - projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11003 sha256=ebe5631cdebba3589677c56baf57b5f4896c29d0681a40a15e38aec055b8a034
# - projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_cp_src.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3140 sha256=e28680e1fda3c85a4587e1486aec7eefc9d7a0671ff9d639bf3c313a60949119
# - projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.c rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=11815 sha256=89b604f381b439b4f60297874d52d6b5ce6717c6fad94046aee9a10059a95784
# - projects/01_baseline/Middlewares/Arm-2D/Library/template/arm_2d_user_opcode_template_i_draw.h rule=Middlewares/Arm-2D/** reason=large real Arm-2D upstream source is represented by provenance/hash; patch body omitted bytes=3302 sha256=47ac75bbf4804726bc49abc3c45f1727a4317b9e0843211c69da648c9990df4e
# - projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.pdsc rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=14303 sha256=72cea3f0d75fecd7b6d1ebd93235ae395f026d8352c48c58d3a2baffcbf333ef
# - projects/01_baseline/Middlewares/CMSIS-DSP/ARM.CMSIS-DSP.sha1 rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=257602 sha256=9a3b0f714580ba1d53195d751e0743febb4202fca1088972f6e67920387bdc6d
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30043 sha256=dc36e5c463aee1beea88844c48661a2201a045717bd68ddad6c5ba3cff6cafc6
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_common_tables_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5563 sha256=c0f326ab182e922fbd700c2cb6164ea998679e058721e91ec0bea0ad4b19c9a6
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3637 sha256=0e19ec8edc49a897eed2b02acfbb36da98da1199931765d5a5269857afeb50a5
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_const_structs_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3552 sha256=f173a3dace7642876073eef169a3b6201b7c77fe6dd7aebe8f41429ceb78ddce
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_helium_utils.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=21467 sha256=b2908dda4945d1a3f99d29330cb5439e3b1852a06d84c6560d87d7822489f46d
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8404 sha256=f170e01c8f852f6fa50dff547c3c8e56facc6a2a1186ac409a54bbc93b32c8ed
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1812 sha256=51599ec6c3f1840d148d76cdf728d17bcf5de31943b41ee8dbb07c407a45cfa0
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_memory.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5184 sha256=d5916539a16ad055c84a5bb5d5399fedd4a491e2c44a113dcce8ebb6dc7c089b
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=15011 sha256=4c8451b4da0085ef63ef23db08c8dcf13dc2cc96c6bc4d3c584762d4aa75be5b
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_math_types_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3813 sha256=3b9028e261096c695af06e39ca7793543286c5382899f8f35ea746effecdd61d
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10367 sha256=cbf227724f370e5aaa5b15baaea48638f0e00b19baba1ad8e29ea6fd23636500
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_mve_tables_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4433 sha256=f1834a5927205692d747151ffbdb9771089291b398611b83ea5c0fa9e52ee143
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9807 sha256=7193f27bfdd6db7dc91a8aca9ba38c9af38ead6305940672e121312a6f7e171b
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/arm_vec_math_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8343 sha256=55d4102cbb7ef14412452b28dcbab332f2e6d8ef6950be121e7295b1c2d20d4b
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=26199 sha256=3fd31426a623339e2fa60d9aa2d67b880967a4edca420e3fd7ee3733fb65d072
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/basic_math_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5163 sha256=43f3935b4595ca51d5089b5ccd78e2689bbd1898616bec17b9e785e680fdf57b
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2828 sha256=f22b8c3ae42fd3cfdd154e1dd4fd0638985c1739ccb9472907a74f250d0e6b25
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/bayes_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2629 sha256=ce68b78ca4312607eb5e1e5a159eabc86e2f73af6199705e07a67e36e4aed9ee
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10923 sha256=0e0123c33173162631186f4bd7c44ce796dbf1cdc2015ccd30d3ac745ae201ad
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/complex_math_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4082 sha256=743c1337cef2cd59a920affa8032a2e0596052853e95ab2bba5b59e81aa31637
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=29222 sha256=f753aea94700e87e43f66b7e5814c9d55c06bcf3606bfac3a369a1c10744f9e5
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/controller_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1299 sha256=ddc9e1bba2a990a5bc32c0c853c32108bee85791cac9e3cb1911c8eb611a61de
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/debug.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4971 sha256=55e7557a5e9985bebe4b24341339962a970f5dfa84d5fb474a49a6a0577f45ca
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10040 sha256=936242bb7a79eb0a7454636144fc95bf7e62b34d39d3b6c1fca30a350fe80344
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/distance_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5322 sha256=540125b782f58935eb6f9c03a7e3dd49f9941de0df9a3b91b0561cd5bc5be3a8
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10094 sha256=3e59abe1cf3fffe19ff0590c614109e7d445101cc67e301d94b10a8adcfb72ea
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/fast_math_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3501 sha256=dbc95d8026960350b6e9bfc48fe94ef7f7e860f91564e57ee5a2be8cdffee195
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=98240 sha256=3d079f167ce03e1cb83479913b2bfb14c78fe3a76ba969fa2579739f06dd2643
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/filtering_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9196 sha256=4b002e4ba6abada63777975faf63cd0ba071130250c74394e9c2917504bc4d4f
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9162 sha256=75550ce2565d3f1ecb5b41feac0cf268f80d473a36cb21ecdda205b248bf23ea
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/interpolation_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2987 sha256=92d107b03f05eabc8c4a82def3756e099e91572c54179a0598f90a455b923384
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=34628 sha256=1fa1d78a0205d9a3155121edcdddf7e5f6ed1c9292f2f0e2e9efcd3c7471ed40
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=10199 sha256=26a8e871f71889f70b4601cd0ad39b3460a8e03a01fb63b766d3b7ce8e8b4245
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/matrix_utils.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=25412 sha256=4d437c15ed00f988622db7e356a4cd721d50d53474f3edd304c533bffcfcbf44
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/none.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=14967 sha256=ca27e36ba16457d2a9abc1f13e2e0f249ad6ba4642efc446aa2faeb5ace0a257
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/quaternion_math_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=5587 sha256=7bb1d91577b4c11d5d50fcf827ccb5ce38236c776c094fae9ad081489c7bca65
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30076 sha256=4a35f6b1ba618fc8604bb6430421c801e718abc93a2430593fa8d8e936bf53ee
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/statistics_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=8544 sha256=7738074df7a383bb1906af49c4add0485532f1edf89df81b4c5c431fe1c7f1d8
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=15141 sha256=9ff9b0fb3843323f65d9697d68f0dd6d12a611c119f5346d3ebb1fd75c3fc803
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/support_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6310 sha256=01804843a897720f72f3d3ad40da9613990f703f242a2440bddaac4584f3a35e
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_defines.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=1441 sha256=ee7b52a08add7d2bddc40caf3d9913a58eab9244cb62ba2833333d433694b1c0
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9922 sha256=594aa1b2bdbde7a87c043710f6bd4a789617aa56f25b96406b1718fc41ee82e4
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/svm_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=9687 sha256=72c8c9357a62e358eb21b9716a4c4b9e0ce335b6221e19ea549c8bfc27e7237e
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=30651 sha256=145207df44784a3ad61c00cbb12bc116a02e4c30fb86d0cfd6cdcd130b748f1a
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/transform_functions_f16.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=7937 sha256=48631b92b3377a49728af6b927d1bd8304374ca9c56e6c22f53b7ee4d5256968
# - projects/01_baseline/Middlewares/CMSIS-DSP/Include/dsp/utils.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6048 sha256=2f199a4ef53eacb6dc36b9b1329f5514676d374466bd84284a645d553bf71deb
# - projects/01_baseline/Middlewares/CMSIS-DSP/LICENSE.txt rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=11357 sha256=b40930bbcf80744c86c46a12bc9da056641d722716c378f5659b9e555ef833e1
# - projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_sorting.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=6640 sha256=0abf0114a2f2d0feae3508c7c184c60227a29b036374c17fbc1794b9be18712f
# - projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_fft.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=11426 sha256=e04a9a590355df232178853ec121e4903d9feccb185c86191844b9d4215be548
# - projects/01_baseline/Middlewares/CMSIS-DSP/PrivateInclude/arm_vec_filtering.h rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=123649 sha256=d1657c0e9c743727833e4c4c0b22160f37c66137d4e0a3280795ec2d109cb501
# - projects/01_baseline/Middlewares/CMSIS-DSP/Source/CommonTables/arm_common_tables.c rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=4843505 sha256=c54cce284a74c2b02d12d9db2f7ea48f6b0eb09f07bd4de8e86baaf18ecd339a
# - projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_f32.c rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3567 sha256=12c6b38fa31af8137cdd48b831b22fd54f49b1d98bb6edb82f5c3b8208d5abac
# - projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_cos_q31.c rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2573 sha256=5b997b15b674be9f53d8b28eef434aedbf9d869f933431ec00c536ebe7d948ea
# - projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_f32.c rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=3517 sha256=a795df2c0fe63409b0839bc82ab886071b1d3918be1ca8a7e093930639e97abf
# - projects/01_baseline/Middlewares/CMSIS-DSP/Source/FastMathFunctions/arm_sin_q31.c rule=Middlewares/CMSIS-DSP/** reason=large real CMSIS-DSP upstream dependency is represented by provenance/hash; patch body omitted bytes=2498 sha256=20f87e68f53afc74d625a404506410de007452c9007d516698a2da46f32abdef
```

## 原始产物索引

| Path | Bytes | SHA-256 |
|---|---:|---|
| evidence.json | 239293 | dfa5968832741030877c3df7810d1cb4f3bcbb16c97739d7152201c732ed13a4 |
| summary.md | 13116 | c3ca60e2811f4a7475842f34c2483e83445d9b427cfcb496ddd5a41703d28059 |
| aggregate.md | self-referential | self-referential |
| agent-messages.json | 144707 | af6533e466b5dffe1557b6654450a24d417d690ae0783b714448a9485d3bb4ea |
| agent-trace.md | 200589 | 935bc5deb51d9aaf60d695e3443e56e2ccac1b983e05048b7b3087ec01fba894 |
| agent-transcript.md | 200589 | 935bc5deb51d9aaf60d695e3443e56e2ccac1b983e05048b7b3087ec01fba894 |
| final-response.md | 1717 | 985846ccc5010ce50ea3148c6f5c32fc3a6cd75e7ae6a65de334d2906d7df9ff |
| run.json | 258336 | b0181baca551148c4ca0a34d2cbc108ce0184fd671a8ce6551d6f075fa304b50 |
| result.json | 45704 | 1e647dfd6a8f9fda0a6ff6f827329a1d1bf5f6cf55e835ef497a800adffd285b |
| agent-trace.json | 286369 | 9e03feaff427a411fa3a76ed3d8816c0c15fa1c5dd7c3d51abe8cbd3400a24ef |
| agent-prompt.md | 11429 | 0f3e5a860e5d4698048fa10c508cb06a641e7e9776bf1dc547ea45447f163e48 |
| agent-diff.patch | 67510 | a6d7df1b91feba5b44a0c9cabe230ca338aeb426bf9afce717366a288637c17e |
| .hwlab/hwpod-spec.yaml | 757 | 143440270254bfa79375abf4f9d6f30c8d1707d740034e8368c1708092675612 |
| worker.stdout.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |
| worker.stderr.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |

## 说明

本文件只做已完成 CaseRun registry 产物的二次整理聚合，不新增自动结论、门禁或等级。
