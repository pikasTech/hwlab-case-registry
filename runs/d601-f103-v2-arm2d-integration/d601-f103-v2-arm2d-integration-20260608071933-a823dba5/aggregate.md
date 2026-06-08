# HWPOD CaseRun Aggregate: d601-f103-v2-arm2d-integration

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- generatedFrom: case registry artifacts
- aggregationOnly: true
- autoEvaluation: false
- primaryEntry: aggregate.md

## 运行环境信息

- apiUrl: http://74.48.78.17:19667
- compileOnly: true
- caseRepoRunDir: /root/hwlab-case-registry/runs/d601-f103-v2-arm2d-integration/d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- sourceRunDir: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- createdAt: 2026-06-08T07:19:33.668Z
- completedAt: 2026-06-08T07:28:50.517Z
- runnerPostAgentCompileCheck: recorded

## HWPOD 信息

- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectSubdir: projects/01_baseline
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- sourceRootBaselineStatus: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
- sourceRootAfterPrepareStatus: M projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx
- keilJobId: 20260608_152837_982edb8f
- keilStatus: completed
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
    path: "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5"
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

- providerProfile: hy
- projectId: prj_hwpod_workbench
- conversationId: cnv_case_d601-f103-v2-arm2d-integration_d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- sessionId: ses_c7e66642-bdd6-4b06-9a85-99041d6ce2ef
- traceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- traceSource: hwlab-cli.client.agent.trace
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64

## 输入 Prompt

```markdown
# HWPOD CaseRun 代码代理任务

案例ID: d601-f103-v2-arm2d-integration
运行ID: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
主体仓库本地路径: F:\Work\HWLAB-CASE-F103
主体提交ID: 14a414da470013914b2a19229c36f2e9f8e2da4f
主体隔离工作区路径: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5
hwpodId: d601-f103-v2
hwpodWorkspaceArgs: --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'
验证模式: 仅执行编译构建检查；除非案例明确要求，否则不下载、不做运行态冒烟验证。

## 运行时装配
AgentRun 通过 ResourceBundleRef kind=gitbundle 装配 HWLAB 运行时资源：仓库子路径 `tools` 会复制到工作区 `tools`，仓库子路径 `skills` 会复制到工作区 `.agents/skills`。CaseRun 不再发送临时 workspaceFiles 或 seed-file 载荷。

## HWPOD 运行时
通过运行时服务按 ID 使用 HWPOD，不要求 runner 本地存在 `.hwlab/hwpod-spec.yaml`。
每个 hwpod/hwpod-ctl 命令都必须携带这些参数：`--hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`。
本任务的标准冒烟步骤：
- `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- 工作区读取、搜索和编辑：`hwpod workspace ... --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`
- 编译检查：`hwpod build --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'`

## 任务
主体工作区根目录就是仓库根目录，包含 projects/、docs/、tools/ 和 .agents/。编辑前先读取 `.agents/skills/arm2d-skill/SKILL.md`，并遵循其中的 ARM-2D 标准集成方法。如果该文件缺失，停止并报告 AgentRun gitbundle/skill 挂载阻塞；不要自行编造替代内容，也不要移除这个依赖。每个 `hwpod` 和 `hwpod-ctl` 命令都必须使用 CaseRun 提供的 `hwpodWorkspaceArgs`。不要使用 runner 本地 `.hwlab/hwpod-spec.yaml`；如果旧帮助文本提到它，把它转换为本任务提供的 `--hwpod-id` / `--workspace-path` 参数。符号查找优先用 `hwpod workspace rg` / `hwpod workspace search`，只有需要完整文件正文时才用 `hwpod workspace cat`。

工作区中已有 LCD 驱动 d601_lcd、GPIO，以及位于 projects/01_baseline/Middlewares/Arm-2D/ 的 ARM-2D 库。ARM-2D 头文件 arm_2d.h、arm_2d_types.h 等位于 projects/01_baseline/Middlewares/Arm-2D/Library/include/。d601_lcd.h 位于 projects/01_baseline/User/d601_lcd.h。ARM-2D demo 文件已经存在，但函数体为空。

你的任务：

1. 编辑 main.c 集成 ARM-2D：在 d601_lcd.h 之后加入 #include "d601_arm2d_demo.h"，在 d601_gpio_init() 之后调用 d601_arm2d_demo_show()，并在 while(1) 循环中 jsonrpc_process() 之后调用 d601_arm2d_demo_task()。

2. 实现 d601_arm2d_demo.c 的函数体。先阅读 d601_arm2d_demo.h 了解公开 API；使用带 hwpodWorkspaceArgs 的 `hwpod workspace rg` / `hwpod workspace search` 检查 Middlewares/Arm-2D/Library/include/ 下的 ARM-2D 头文件，重点确认 arm_2d_init、arm_2d_op_wait_async、arm_2d_rgb16_fill_colour 和 arm_2d_rgb565_t 结构；阅读 d601_lcd.h 了解 d601_lcd_get_width/height、d601_lcd_draw_bitmap、d601_lcd_fill_rect、d601_lcd_show_string。至少实现 arm2d_wait()、arm2d_tile_bind()、arm2d_fill_local()、d601_arm2d_demo_show()（初始化 ARM-2D 并渲染一次全屏填充）和 d601_arm2d_demo_task()（周期性调用 show）。复用已有 #define（D601_ARM2D_PFB_WIDTH/LINES、D601_RGB565、D601_C_*）和静态变量（s_pfb、s_arm2d_ready）。

3. 编辑完成后，使用 CaseRun 提供的 hwpodWorkspaceArgs 运行 `hwpod-ctl spec validate`、`hwpod inspect` 和 `hwpod build`。回报 diff 摘要和构建结果。不要下载，也不要运行 UART。

## 约束
- 思维过程和输出消息一律使用中文
- 可以修改 projects/01_baseline/User/main.c 和 projects/01_baseline/User/d601_arm2d_demo.c
- main.c 只加3行：include + show() + task()
- d601_arm2d_demo.c 需要重新实现函数体，不能只恢复原来的代码
- 必须通过 HWPOD workspace/node 链路修改，并在每个 hwpod/hwpod-ctl 命令中使用 CaseRun 提供的 hwpodWorkspaceArgs
- 不要创建、复制或修补 runner-local .hwlab/hwpod-spec.yaml
- 只做 compile-only build check
- ARM-2D 库已在 Middlewares/Arm-2D/，d601_lcd 已实现
- 只能修改 isolated subject worktree，不得修改 case registry repo。
- 不得修改原 subject repo checkout；所有源码修改必须落在 subjectWorktreePath。
- AgentRun 通过 kind=gitbundle 装配当前 v0.2 的 tools/ 与 .agents/skills；若标准 hwpod 命令能力缺失，报告 gitbundle runtime assembly 问题，不要改走旁路。
- 不要依赖 workspaceFiles、seed files、hostPath skill 目录、ConfigMap 或 runner 本地 .hwlab/hwpod-spec.yaml 作为工具/skill/HWPOD 注入 fallback。
- 必须通过 HWPOD registry/service 引用 hwpodId=d601-f103-v2；所有 hwpod/hwpod-ctl 命令都携带 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'。
- 如果 case prompt 或旧帮助文本提到 .hwlab/hwpod-spec.yaml，把它视为过时写法并替换为本任务给出的 --hwpod-id/--workspace-path 参数；不要创建、复制或修补本地 spec 文件。
- 若 case prompt 要求源码修改，必须只改 subjectWorktreePath；若 prompt 未要求源码修改，则保持 subject 源码不变。
- 不要运行 CaseRun 答案执行器；你本人必须通过 hwpod/hwpod-ctl 标准入口触发编译验证。
- hwpod build/download 是长任务短连接入口；不要再用 shell sleep/&&/timeout/watch/head/pipe 或 shell loop 包住它们。记录返回 JSON 里的 jobId/job_id，再用独立的 hwpod job status <jobId> --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5' 短命令做有限轮询。

## 执行流程
- 先确认标准 `hwpod`、`hwpod-ctl` 和 `hwpod-compiler` 命令可从 gitbundle 工具目录调用。
- 使用标准 hwpod/hwpod-ctl 命令并携带 `--hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` 完成案例任务。只有案例明确要求时才运行 build/download/UART 步骤，并回报返回的 JSON、job、artifact 或串口摘要。
- 对 hwpod build/download，保持 HWPOD 命令本身不被包装，让它返回异步 JSON；随后用独立短命令 `hwpod job status <jobId> --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'` 对返回的 job id 做有限轮询。不要用 shell sleep、&&、timeout、watch、head、pipe 或 shell loop 包裹状态轮询。
- 你的回合结束后，CaseRun 会检查 subjectWorktreePath 下的 git diff，并可能把 runner 后置编译作为单独证据记录。
- CaseRun 只记录 trace、session、conversation、agent 命令执行、workspace diff 和 Keil 构建证据，不做自动评分或门禁判断。
```

## 低噪声 Trace

- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows
- sourceEventCount: 6000
- renderedRowCount: 66
- hwpodCommandCount: 0
- hwpodBuildCommandCount: 0

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_init|arm_2d_op_wait_async|arm_2d_rg...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_init|arm_2d_op_wait_async|arm_2d_rgb16_fill_colour|arm_2d_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include --context 3 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_dfa0e274-023...
  exitCode=0
  rowId: tool:call_Hg0mxhGpJqmmEVFXiOLB3vuZ
  ```

  </details>

**ARM-2D 头文件搜索还在 HWPOD 节点侧执行，我会等它返回后再动代码。**

**初次 API 搜索返回很大，但关键点已经看到：`arm_2d_init(void)`、`arm_2d_op_wait_async(arm_2d_op_core_t \*)` 和无参宏 `ARM_2D_OP_WAIT_ASYNC()` 存在。我要进一步窄化到 RGB565 填充宏和 tile 结构字段。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "typedef.*arm_2d_rgb565_t|arm_2d_rgb565_t" ...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "typedef.*arm_2d_rgb565_t|arm_2d_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 8 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_3b0ec8ef-16f...
  exitCode=0
  rowId: tool:call_8QKJJ1uZ7WLyD6KpN4N9On2N
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_base...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_baseline/Middlewares/Arm-2D/Library/include --context 5 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_a98941fc-83c...
  exitCode=0
  rowId: tool:call_bnSu0UsGNdtZ44QsQ2Wv1vjx
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_rgb16_fill_colour'"\(" projects/01_...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_rgb16_fill_colour'"\(" projects/01_baseline --context 4 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_f0423acd-f68...
  exitCode=0
  rowId: tool:call_NZcm9Lgh6LLDZgbpj3SSYvKO
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_tile_t|tRegion|pchBuffer|phwBuffer"...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_tile_t|tRegion|pchBuffer|phwBuffer" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 4 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_a5db4f90-6fe...
  exitCode=0
  rowId: tool:call_hxg3Gyc5S9nUJqWWKX1k5jnW
  ```

  </details>

**这些窄范围搜索在节点侧并行执行，等它们结束后会基于实际头文件字段写补丁。**

**RGB565 的 fill 宏确认是 `arm_2d_rgb16_fill_colour(tile, region, colour)`，tile 结构里可用 `tInfo.bIsRoot`、`tRegion.tSize.iWidth/iHeight` 和 `phwBuffer`。`arm_2d_rgb565_t` 在 `arm_2d_types.h` 没命中，我会再全 include 查一次，必要时改用 16-bit RGB565 原始 `uint16_t` 色值。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "rgb565_t|arm_2d_rgb565_t|__arm_2d_color_fa...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "rgb565_t|arm_2d_rgb565_t|__arm_2d_color_fast_rgb_t|arm_2d_color" projects/01_baseline/Middlewares/Arm-2D/Library/include --context 5 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_6cbd951c-c7b...
  exitCode=0
  rowId: tool:call_zDT3pM2JNcCIe01lsOlG9xLc
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "d601_arm2d_demo|D601_ARM2D|arm2d_render_st...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "d601_arm2d_demo|D601_ARM2D|arm2d_render_stripe|arm2d_fill_local" projects/01_baseline --context 3 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_0895bca1-485...
  exitCode=0
  rowId: tool:call_oMwR5MWCqnFZDoaLkbqYZijf
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "ARM_2D_OP_WAIT_ASYNC'"\(|arm_2d_op_wait_as...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "ARM_2D_OP_WAIT_ASYNC'"\(|arm_2d_op_wait_async\(" projects/01_baseline --context 4 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_e01d6033-db2...
  exitCode=0
  rowId: tool:call_gsAq0of1ny2QXNcI9AM0ntLx
  ```

  </details>

**全 include 没有 `arm_2d_rgb565_t` 这个类型名；实际公开类型看起来是 `arm_2d_color_rgb565_t`，且 `arm_2d_conversion.h` 用它打包 16-bit RGB565。实现里可以直接传现有 `uint16_t` RGB565 色值给 `arm_2d_rgb16_fill_colour`，不绑定不存在的类型名。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_color_rgb565_t" projects/01_baselin...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_color_rgb565_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 8 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_1ac3b9e7-9c4...
  exitCode=0
  rowId: tool:call_twHEgPDvcQqjzRunpRZwClY1
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_region_t|arm_2d_size_t|arm_2d_locat...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_region_t|arm_2d_size_t|arm_2d_location_t" projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --context 4 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_ce312f12-255...
  exitCode=0
  rowId: tool:call_Xm0WZnEEGHhORJnE9S6XuUZ6
  ```

  </details>

**我还在补齐 region/size 的字段确认，这会影响 `arm2d_fill_local()` 里区域对象的初始化方式。**

**我准备通过 `hwpod workspace apply-patch` 写补丁。先看该子命令支持的补丁传入参数，避免用废弃的写文件命令。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace apply-patch --help --hwpod-id d601-f103-v2 --w...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace apply-patch --help --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": "apply-patch", "usage": [ "hwpod workspace ls [path] --hwpod-id d601-f103-v2 --workspace-path <run-worktree>", "hwpod workspace cat <path> --hwpod-id d601-f103-v2 --workspace-path <run-worktree>", "hwpod workspace read <path> --hwpod-id d601-f103-v2 --workspace-path <run-worktree>", "hwpod workspace rg <pattern> [path] --context 3 --max-matches 20 --hwpod-id d601-f103-v2 --workspace-path <run-worktree>", "hwpod workspace write --path <path>...
  exitCode=0
  rowId: tool:call_CnvCkvudjuXOBPsBlKZQ4LDb
  ```

  </details>

**现在开始写补丁：`main.c` 只加 3 行；`d601_arm2d_demo.c` 会重写为基于 ARM-2D RGB565 tile/PFB 的分条渲染，并保留 LCD 字符叠加和周期刷新逻辑。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace apply-patch --hwpod-id d601-f103-v2 --workspac...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace apply-patch --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5' --patch-content '*** Begin Patch *** Update File: projects/01_baseline/User/main.c @@ #include "jsonrpc_handler.h" #include "d601_lcd.h" +#include "d601_arm2d_demo.h" #include "d601_gpio.h" @@ d601_lcd_init(); d601_gpio_init(); + d601_arm2d_demo_show(); printf("[D601-F103] LCD ID=0x%04X\r\n", (unsigned int)d601_lcd_get_id()); @@ { jsonrpc_process(); + d601_arm2d_demo_task(); } } *** Delete File: projects/01_baseline/User/d601_arm2d_demo.c *** Add File: projects/01_baseline/User/d601_arm2d_demo.c +#include "d601_arm2d_demo.h" +#include "d601_lcd.h" +#include "stm32f1xx_hal.h" +#include "arm_2d.h" + +#include <stdint.h> +#include <string.h> + +#define D601_ARM...
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.apply-patch", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.apply-patch", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod...
  exitCode=0
  rowId: tool:call_Py5uT6DTTCKBjv9ROL2AyTTK
  ```

  </details>

**补丁已提交给 HWPOD 节点执行，正在等待 apply-patch 返回结果。**

**补丁应用成功：`main.c` 三个替换点已应用，demo 源文件被重新生成。接下来用 workspace 搜索确认关键调用落点，然后进入 validate/inspect/build。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "d601_arm2d_demo.h|d601_arm2d_demo_show'"\(...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "d601_arm2d_demo.h|d601_arm2d_demo_show'"\(\)|d601_arm2d_demo_task\(\)" projects/01_baseline/User/main.c --context 2 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_80c0bc57-472...
  exitCode=0
  rowId: tool:call_TQpxJq76ctRlv3JK6QCDTLz4
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_init|ARM_2D_OP_WAIT_ASYNC|arm_2d_rg...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace rg "arm_2d_init|ARM_2D_OP_WAIT_ASYNC|arm_2d_rgb16_fill_colour|d601_lcd_draw_bitmap|d601_lcd_show_string" projects/01_baseline/User/d601_arm2d_demo.c --context 2 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.rg", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.rg", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_51a8580b-9cf...
  exitCode=0
  rowId: tool:call_DG10MF7KUePmNjBLQT0lBWfw
  ```

  </details>

**关键调用确认在位。现在按任务要求运行编辑后的 `hwpod-ctl spec validate`、`hwpod inspect`，然后只做 compile-only 的 `hwpod build`。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-pa...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "document": { "apiVersion": "hwlab.dev/v0alpha1", "kind": "Hwpod", "metadata": { "uid": "D601-F103-V2", "name": "d601-f103-v2" }, "spec": { "targetDevice": { "board": "D601-F103-V2", "mcu": "STM32F103" }, "workspace": { "path": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5", "toolchain": "keil-mdk", "keilProject": "projects/01_baseline/Projects/MDK-ARM/at...
  exitCode=0
  rowId: tool:call_jNzDPnpQZq5Yj43xfYBZDVad
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod inspect --hwpod-id d601-f103-v2 --workspace-path '"'F:\W...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod inspect --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "inspect", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "inspect", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_165a0854-9c7c-4fe9-ba5...
  exitCode=0
  rowId: tool:call_Pbnwad1qxMOHxEwXI4kdEqdL
  ```

  </details>

**validate 和 inspect 都通过；现在启动 `hwpod build`，不会下载或跑 UART。若返回异步 job，我会用独立 `hwpod job status` 短命令有限轮询。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod build --hwpod-id d601-f103-v2 --workspace-path '"'F:\Wor...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod build --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "debug.build", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "debug.build", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_05adba6a-7464-...
  exitCode=0
  rowId: tool:call_TYxDgf9lchr5NPazbYNRWHsa
  ```

  </details>

**`hwpod build` 已发起，当前命令还在等待节点返回。**

**run-claimed**

**resource-bundle-materialized**

**backend-turn-started**

**07:19:50  会话就绪**

**codex-rollout-storage-mounted**

**initial-prompt-assembly**

**我会先读取仓库挂载的 ARM-2D skill，再按任务指定的 HWPOD 参数读取和修改隔离工作区源码；所有 hwpod/hwpod-ctl 命令都会带上这组 `--hwpod-id` 和 `--workspace-path`。**

- <details>
  <summary>已运行 sed -n '1,220p' .agents/skills/arm2d-skill/SKILL.md</summary>

  ```text
  sed -n '1,220p' .agents/skills/arm2d-skill/SKILL.md
  stdout:
  --- name: arm2d-skyer description: 用于 ARM-2D 嵌入式 UI 开发工作：scene/PFB/generic loader/dirty region/RGB565 资源、GIF 精灵图与动画资源链路、Keil MDK/RTE/显示适配器集成、SRAM/Flash/帧率权衡，以及在 MCU 上实现伪 shader/demo-scene 特效。 --- # ARM-2D 嵌入式 UI 工作流 这是一个通用 ARM-2D 嵌入式 UI 技能。核心目标不是写通用教程，而是让助手按可移植、可维护、贴合硬件约束的方式处理 ARM-2D 工程。 ## 默认背景 - 常用语言：C。 - 常用图形栈：ARM-2D、PFB、Scene Player、Generic Loader。 - 常见工程环境：Keil MDK、CMSIS-Pack/RTE、RTOS 或裸机工程。 - 常见显示链路：LCD/OLED/RGB/MIPI/Framebuffer、SPI/QSPI/8080/LTDC 等显示接口。 - 常见像素格式：RGB565、RGB888、ARGB8888。 - 常见任务：动态 UI、GIF/动画素材、局部刷新、低 RAM 渲染、伪 shader 特效。 ## 总原则 - 优先写能在目标 MCU 上稳定跑起来的代码，不追求理论优雅。 - 每次涉及动画/特...
  exitCode=0
  rowId: tool:call_7pki8TJNd5MwjuvjBwMHFxRU
  ```

  </details>

**已确认 ARM-2D skill 要求先查工程和 API 示例再改；我接下来确认 HWPOD 工具入口和 workspace 子命令能力，避免绕过标准链路。**

- <details>
  <summary>已运行 sed -n '1,220p' .agents/skills/hwpod-cli/SKILL.md</summary>

  ````text
  sed -n '1,220p' .agents/skills/hwpod-cli/SKILL.md
  stdout:
  --- name: hwpod-cli description: Use HWLAB HWPOD from a code agent runner for hardware-development tasks. The hwpod-cli skill resolves an HWPOD by hwpod-id through the HWLAB runtime service, submits hwpod-node-ops through hwlab-api, and waits for hwpod-node results. --- # hwpod-cli This skill follows Skill(cli-spec). It is the standard task entry for operating an HWPOD from the HWLAB v0.2 Code Agent workspace. ## Standard Path ```text hwpod from PATH -> tools/hwpod-cli.ts -> runtime HWPOD registry by hwpod-id -> compiler-backed hwpod-node-ops plan -> /v1/hwpod-node-ops on hwlab-api -> hwpod...
  exitCode=0
  rowId: tool:call_ilhMPjBalFSdfaykc5862e8h
  ````

  </details>

- <details>
  <summary>已运行 sed -n '1,200p' .agents/skills/hwpod-ctl/SKILL.md</summary>

  ```text
  sed -n '1,200p' .agents/skills/hwpod-ctl/SKILL.md
  stdout:
  --- name: hwpod-ctl description: Manage and validate HWLAB HWPOD runtime bindings from a code agent runner. The hwpod-ctl skill is separate from hwpod-cli and is used for hwpod-id validation, smoke checks, and explicit local spec import/export maintenance. --- # hwpod-ctl This skill follows Skill(cli-spec). It is the standard management entry for runtime-resolved HWPOD identity and node binding checks. ## Scope `hwpod-ctl` is a peer of `hwpod-cli`, not a fallback task path. Use it to validate a service-resolved `hwpod-id`, inspect the four HWPOD elements, check node binding, and run smoke o...
  exitCode=0
  rowId: tool:call_5pieyJ3eaJmjtw1EaBH9RN2a
  ```

  </details>

- <details>
  <summary>已运行 command -v hwpod; command -v hwpod-ctl; command -v hwpod-compiler</summary>

  ```text
  command -v hwpod; command -v hwpod-ctl; command -v hwpod-compiler
  stdout:
  commandExecution failed: /bin/sh -lc 'command -v hwpod; command -v hwpod-ctl; command -v hwpod-compiler' exit=127 durationMs=0
  exitCode=127
  rowId: tool:call_O4Ts0QaJ8wvpPBYzh6oC7oZm
  ```

  </details>

**`hwpod-cli`/`hwpod-ctl` skill 已确认：源码读写应走 `hwpod workspace rg/cat/apply-patch`，多行修改用 HWPOD 的 apply-patch 包络。我发现这些命令当前不在 PATH，正在检查 gitbundle 的 `tools/` 入口。**

- <details>
  <summary>已运行 ls -la tools</summary>

  ```text
  ls -la tools
  stdout:
  total 180 drwxr-xr-x 5 root root 4096 Jun 8 07:19 . drwxr-xr-x 4 root root 4096 Jun 8 07:19 .. -rwxr-xr-x 1 root root 6284 Jun 8 07:19 capture-issue-803-noise.mjs -rw-r--r-- 1 root root 4585 Jun 8 07:19 hwlab-caserun.test.ts drwxr-xr-x 3 root root 4096 Jun 8 07:19 hwlab-cli -rwxr-xr-x 1 root root 74 Jun 8 07:19 hwlab-code-agent -rwxr-xr-x 1 root root 234 Jun 8 07:19 hwlab-code-agent-cli.ts -rwxr-xr-x 1 root root 10592 Jun 8 07:19 hwlab-gateway-shell.mjs -rwxr-xr-x 1 root root 20611 Jun 8 07:19 hwlab-gateway-tran.mjs -rwxr-xr-x 1 root root 63 Jun 8 07:19 hwpod -rwxr-xr-x 1 root root 101 Jun ...
  exitCode=0
  rowId: tool:call_5uixQpQN4hXWkNZUSDpgWj69
  ```

  </details>

- <details>
  <summary>已运行 find tools -maxdepth 2 -type f -o -type l</summary>

  ```text
  find tools -maxdepth 2 -type f -o -type l
  stdout:
  tools/hwpod-cli.ts tools/hwlab-gateway-tran.mjs tools/hwlab-code-agent-cli.ts tools/unidesk-ssh.mjs tools/hwpod-ctl tools/hwpod-compiler tools/hwpod-node-runtime.test.ts tools/hwpod-node.test.ts tools/hwlab-caserun.test.ts tools/hwpod-compiler-cli.ts tools/hwlab-cli/hwpod.test.ts tools/hwlab-cli/package.json tools/hwlab-cli/caserun.test.ts tools/hwlab-cli/client.test.ts tools/tran.mjs tools/hwpod-node.ts tools/src/hwpod-node-lib.ts tools/src/runtime-durable-readiness.ts tools/src/hwpod-node-ops-contract.ts tools/src/hwpod-harness-lib.ts tools/src/runtime-endpoint-resolver.ts tools/src/hwlab...
  exitCode=0
  rowId: tool:call_XFEOlXDZg5DtYXpkvAOY18Lc
  ```

  </details>

- <details>
  <summary>已运行 "printf '%s\n' ""'$PATH"'</summary>

  ```text
  "printf '%s\n' ""'$PATH"'
  stdout:
  /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
  exitCode=0
  rowId: tool:call_4kSVqs1YO39HC3zjRKPTlM8L
  ```

  </details>

**`tools/` 中有标准包装器，但当前 PATH 没包含该目录。我会在每条 HWPOD 命令前临时加入 `tools` 到 PATH，然后仍以 `hwpod` / `hwpod-ctl` 标准入口执行。**

- <details>
  <summary>已运行 PATH="$PWD/tools:$PATH" command -v hwpod</summary>

  ```text
  PATH="$PWD/tools:$PATH" command -v hwpod
  stdout:
  /home/agentrun/workspaces/gitbundle-837a9bd14b0c1406/workspace/tools/hwpod
  exitCode=0
  rowId: tool:call_i0OMAzme4eZ4wSGJXKY5b1JQ
  ```

  </details>

- <details>
  <summary>已运行 PATH="$PWD/tools:$PATH" command -v hwpod-ctl</summary>

  ```text
  PATH="$PWD/tools:$PATH" command -v hwpod-ctl
  stdout:
  /home/agentrun/workspaces/gitbundle-837a9bd14b0c1406/workspace/tools/hwpod-ctl
  exitCode=0
  rowId: tool:call_smIFvNP9z4e1l8Cj0MwAXm5T
  ```

  </details>

- <details>
  <summary>已运行 PATH="$PWD/tools:$PATH" command -v hwpod-compiler</summary>

  ```text
  PATH="$PWD/tools:$PATH" command -v hwpod-compiler
  stdout:
  /home/agentrun/workspaces/gitbundle-837a9bd14b0c1406/workspace/tools/hwpod-compiler
  exitCode=0
  rowId: tool:call_MZVC9UqoqZjQo8ky8Zp1uK8z
  ```

  </details>

- <details>
  <summary>已运行 sed -n '1,80p' tools/hwpod; sed -n '1,80p' tools/hwpod-ctl; sed -n '1,80p' tools/hwpod-...</summary>

  ```text
  sed -n '1,80p' tools/hwpod; sed -n '1,80p' tools/hwpod-ctl; sed -n '1,80p' tools/hwpod-compiler
  stdout:
  #!/usr/bin/env sh exec bun "$(dirname "$0")/hwpod-cli.ts" "$@" #!/usr/bin/env sh exec bun "$(dirname "$0")/hwpod-ctl.ts" "$@" #!/usr/bin/env sh exec bun "$(dirname "$0")/hwpod-compiler-cli.ts" "$@"
  exitCode=0
  rowId: tool:call_6VIV1ogagoHQFcPWOTXfQqCK
  ```

  </details>

**工具入口已确认可从 gitbundle 的 `tools/` 调用。现在先跑一次 HWPOD 解析/检查，随后用 workspace rg/cat 读取目标文件和 ARM-2D 头文件。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-pa...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "document": { "apiVersion": "hwlab.dev/v0alpha1", "kind": "Hwpod", "metadata": { "uid": "D601-F103-V2", "name": "d601-f103-v2" }, "spec": { "targetDevice": { "board": "D601-F103-V2", "mcu": "STM32F103" }, "workspace": { "path": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5", "toolchain": "keil-mdk", "keilProject": "projects/01_baseline/Projects/MDK-ARM/at...
  exitCode=0
  rowId: tool:call_2zc16e1yMWpbRsQobsVIM9U6
  ```

  </details>

**HWPOD spec 校验通过，解析到 `STM32F103`、Keil 工程和目标隔离 worktree。接下来读取工程文件和 ARM-2D API 声明，按现有类型签名实现。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod inspect --hwpod-id d601-f103-v2 --workspace-path '"'F:\W...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod inspect --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "inspect", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "inspect", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_2d7c0337-c092-4252-ba1...
  exitCode=0
  rowId: tool:call_bP60jdXp8q35I4DqUIxcbNn9
  ```

  </details>

**现在进入源码读取阶段：目标是只读完整正文用于改动定位，同时用 `workspace rg` 查 ARM-2D 公开 API 和现有调用方式。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo....</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.cat", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.cat", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_75ef5e94-f...
  exitCode=0
  rowId: tool:call_nWtbGqrnk64J64XXrSkm2HxN
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/main.c --hwpod-i...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.cat", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.cat", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_62d0aaa1-f...
  exitCode=0
  rowId: tool:call_m9GURByWdluzXR2Vux0G5xn2
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo....</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.cat", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.cat", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_7c6316a1-7...
  exitCode=0
  rowId: tool:call_XzfoZkBkboCkPLLlEazSHloO
  ```

  </details>

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwp...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "workspace.cat", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "workspace.cat", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_536f10b2-6...
  exitCode=0
  rowId: tool:call_PGuBiK8IcUPs5CJChszcNdEG
  ```

  </details>

**`main.c` 很小，demo 源文件目前确实有空函数体和遗留代码断在函数外，后面需要整体重写函数体。先确认 ARM-2D 的 tile、RGB565 和 async wait 签名。**

**build 返回异步 job：`20260608_152738_76fe5f06`，状态 queued。我现在用独立的 `hwpod job status` 查询构建结果。**

- <details>
  <summary>已运行 'PATH="$PWD/tools:$PATH" hwpod job status 20260608_152738_76fe5f06 --hwpod-id d601-f103...</summary>

  ```text
  'PATH="$PWD/tools:$PATH" hwpod job status 20260608_152738_76fe5f06 --hwpod-id d601-f103-v2 --workspace-path '"'F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608071933-a823dba5'"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "intent": "debug.job-status", "contractVersion": "hwpod-node-ops-v1", "compilerInvocation": { "compiler": "hwpod-compiler-cli", "mode": "in-process", "entrypoint": "tools/src/hwpod-harness-lib.ts", "argv": [ "compile", "--hwpod-id", "d601-f103-v2", "--intent", "debug.job-status", "--args", "<json>" ], "exitCode": 0, "action": "hwpod-compiler.compile", "contractVersion": "hwpod-node-ops-v1", "planId": "hwpod_plan_6386...
  exitCode=0
  rowId: tool:call_rVTLnDbFw83bFpZbNTYddXGb
  ```

  </details>

**已完成。 修改摘要： - `projects/01_baseline/User/main.c` 只加了 3 行： - `#include "d601_arm2d_demo.h"` - `d601_arm2d_demo_show();` - `d601_arm2d_demo_task();` - `projects/01_baseline/User/d601_arm2d_demo.c` 已重新实现： - `arm2d_wait()` - `arm2d_tile_bind()` - `arm2d_fill_local()` - `arm2d_fill_global()` - stripe/PFB 渲染、FPS 文本、`show()` 初始化并渲染、`task()` 周期刷新 - 使用 `arm_2d_init()`、`ARM_2D_OP_WAIT_ASYNC()`、`arm_2d_rgb16_fill_colour()` 和 LCD bitmap/string API - 头文件中确认实际 RGB565 类型名是 `arm_2d_color_rgb**

**565_t`，不是 `arm_2d_rgb565_t` 验证结果： - `hwpod-ctl spec validate`：通过 - `hwpod inspect`：通过，workspace 存在 - `hwpod build`：异步 job `20260608_152738_76fe5f06` - `hwpod job status`：构建完成成功，`return_code: 0` - Keil 构建产物： - `projects/01_baseline/Output/atk_f103.hex` - `projects/01_baseline/Output/atk_f103.axf` - warning 数：`26` - 未执行下载，未运行 UART。**

**已完成。**

**修改摘要：**
**- `projects/01_baseline/User/main.c` 只加了 3 行：**
**  - `#include "d601_arm2d_demo.h"`**
**  - `d601_arm2d_demo_show();`**
**  - `d601_arm2d_demo_task();`**
**- `projects/01_baseline/User/d601_arm2d_demo.c` 已重新实现：**
**  - `arm2d_wait()`**
**  - `arm2d_tile_bind()`**
**  - `arm2d_fill_local()`**
**  - `arm2d_fill_global()`**
**  - stripe/PFB 渲染、FPS 文本、`show()` 初始化并渲染、`task()` 周期刷新**
**  - 使用 `arm_2d_init()`、`ARM_2D_OP_WAIT_ASYNC()`、`arm_2d_rgb16_fill_colour()` 和 LCD bitmap/string API**
**  - 头文件中确认实际 RGB565 类型名是 `arm_2d_color_rgb565_t`，不是 `arm_2d_rgb565_t`**

**验证结果：**
**- `hwpod-ctl spec validate`：通过**
**- `hwpod inspect`：通过，workspace 存在**
**- `hwpod build`：异步 job `20260608_152738_76fe5f06`**
**- `hwpod job status`：构建完成成功，`return_code: 0`**
**- Keil 构建产物：**
**  - `projects/01_baseline/Output/atk_f103.hex`**
**  - `projects/01_baseline/Output/atk_f103.axf`**
**- warning 数：`26`**
**- 未执行下载，未运行 UART。**

## Final Response

# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- traceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- present: true

已完成。

修改摘要：
- `projects/01_baseline/User/main.c` 只加了 3 行：
  - `#include "d601_arm2d_demo.h"`
  - `d601_arm2d_demo_show();`
  - `d601_arm2d_demo_task();`
- `projects/01_baseline/User/d601_arm2d_demo.c` 已重新实现：
  - `arm2d_wait()`
  - `arm2d_tile_bind()`
  - `arm2d_fill_local()`
  - `arm2d_fill_global()`
  - stripe/PFB 渲染、FPS 文本、`show()` 初始化并渲染、`task()` 周期刷新
  - 使用 `arm_2d_init()`、`ARM_2D_OP_WAIT_ASYNC()`、`arm_2d_rgb16_fill_colour()` 和 LCD bitmap/string API
  - 头文件中确认实际 RGB565 类型名是 `arm_2d_color_rgb565_t`，不是 `arm_2d_rgb565_t`

验证结果：
- `hwpod-ctl spec validate`：通过
- `hwpod inspect`：通过，workspace 存在
- `hwpod build`：异步 job `20260608_152738_76fe5f06`
- `hwpod job status`：构建完成成功，`return_code: 0`
- Keil 构建产物：
  - `projects/01_baseline/Output/atk_f103.hex`
  - `projects/01_baseline/Output/atk_f103.axf`
- warning 数：`26`
- 未执行下载，未运行 UART。

## 最后 Diff

- statusShort: M projects/01_baseline/User/d601_arm2d_demo.c  M projects/01_baseline/User/main.c
- diffStat: projects/01_baseline/User/d601_arm2d_demo.c | 248 ++++++++++++++++++++++++++--  projects/01_baseline/User/main.c            |   3 +  2 files changed, 233 insertions(+), 18 deletions(-)
- diffSha256: dd77ce77663def3291520d3088ed6eaf543b03843e411736ad8e885c57b4dc01
- sourceRootChangedAfterPrepare: false
- sourceRootChangedAfterAgent: false
```diff
diff --git a/projects/01_baseline/User/d601_arm2d_demo.c b/projects/01_baseline/User/d601_arm2d_demo.c
index f4400f9..00555e8 100644
--- a/projects/01_baseline/User/d601_arm2d_demo.c
+++ b/projects/01_baseline/User/d601_arm2d_demo.c
@@ -1,4 +1,4 @@
-﻿#include "d601_arm2d_demo.h"
+#include "d601_arm2d_demo.h"
 #include "d601_lcd.h"
 #include "stm32f1xx_hal.h"
 #include "arm_2d.h"
@@ -8,6 +8,7 @@
 
 #define D601_ARM2D_PFB_WIDTH 240U
 #define D601_ARM2D_PFB_LINES 32U
+#define D601_ARM2D_REFRESH_MS 250U
 #define D601_RGB565(__R, __G, __B) \
     (uint16_t)((((uint16_t)(__R) & 0xF8U) << 8) | (((uint16_t)(__G) & 0xFCU) << 3) | ((uint16_t)(__B) >> 3))
 
@@ -26,12 +27,28 @@ static uint8_t s_arm2d_ready;
 static uint32_t s_fps_window_ms;
 static uint32_t s_fps_frame_count;
 static uint32_t s_fps_value;
+static uint32_t s_last_show_ms;
 
 static void arm2d_wait(void)
-{ }
+{
+    while (!ARM_2D_OP_WAIT_ASYNC()) {
+    }
+}
 
 static void arm2d_tile_bind(arm_2d_tile_t *ptTile, uint16_t width, uint16_t height)
-{ }
+{
+    if (ptTile == NULL) {
+        return;
+    }
+
+    memset(ptTile, 0, sizeof(*ptTile));
+    ptTile->tInfo.bIsRoot = 1U;
+    ptTile->tRegion.tLocation.iX = 0;
+    ptTile->tRegion.tLocation.iY = 0;
+    ptTile->tRegion.tSize.iWidth = (int16_t)width;
+    ptTile->tRegion.tSize.iHeight = (int16_t)height;
+    ptTile->phwBuffer = &s_pfb[0][0];
+}
 
 static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t x,
@@ -39,7 +56,50 @@ static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t width,
                              int16_t height,
                              uint16_t colour)
-{ }
+{
+    arm_2d_region_t tRegion;
+    int16_t tile_w;
+    int16_t tile_h;
+
+    if ((ptTile == NULL) || (width <= 0) || (height <= 0)) {
+        return;
+    }
+
+    tile_w = ptTile->tRegion.tSize.iWidth;
+    tile_h = ptTile->tRegion.tSize.iHeight;
+    if ((tile_w <= 0) || (tile_h <= 0)) {
+        return;
+    }
+
+    if (x < 0) {
+        width = (int16_t)(width + x);
+        x = 0;
+    }
+    if (y < 0) {
+        height = (int16_t)(height + y);
+        y = 0;
+    }
+    if ((x >= tile_w) || (y >= tile_h) || (width <= 0) || (height <= 0)) {
+        return;
+    }
+    if (((int32_t)x + width) > tile_w) {
+        width = (int16_t)(tile_w - x);
+    }
+    if (((int32_t)y + height) > tile_h) {
+        height = (int16_t)(tile_h - y);
+    }
+    if ((width <= 0) || (height <= 0)) {
+        return;
+    }
+
+    tRegion.tLocation.iX = x;
+    tRegion.tLocation.iY = y;
+    tRegion.tSize.iWidth = width;
+    tRegion.tSize.iHeight = height;
+
+    arm_2d_rgb16_fill_colour(ptTile, &tRegion, colour);
+    arm2d_wait();
+}
 
 static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t stripe_y,
@@ -49,44 +109,196 @@ static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t width,
                               uint16_t height,
                               uint16_t colour)
-{ }
+{
+    uint32_t stripe_bottom;
+    uint32_t rect_bottom;
+    uint32_t rect_right;
+    uint32_t tile_w;
+    uint32_t start_y;
+    uint32_t end_y;
+
+    if ((ptTile == NULL) || (stripe_h == 0U) || (width == 0U) || (height == 0U)) {
+        return;
+    }
+
+    stripe_bottom = (uint32_t)stripe_y + stripe_h;
+    rect_bottom = (uint32_t)y + height;
+    if ((rect_bottom <= stripe_y) || ((uint32_t)y >= stripe_bottom)) {
+        return;
+    }
+
+    tile_w = (uint32_t)ptTile->tRegion.tSize.iWidth;
+    rect_right = (uint32_t)x + width;
+    if (((uint32_t)x >= tile_w) || (rect_right == (uint32_t)x)) {
+        return;
+    }
+    if (rect_right > tile_w) {
+        rect_right = tile_w;
+    }
+
+    start_y = ((uint32_t)y > (uint32_t)stripe_y) ? (uint32_t)y : (uint32_t)stripe_y;
+    end_y = (rect_bottom < stripe_bottom) ? rect_bottom : stripe_bottom;
+    if ((end_y <= start_y) || (rect_right <= (uint32_t)x)) {
+        return;
+    }
+
+    arm2d_fill_local(ptTile,
+                     (int16_t)x,
+                     (int16_t)(start_y - stripe_y),
+                     (int16_t)(rect_right - x),
+                     (int16_t)(end_y - start_y),
+                     colour);
+}
 
 static void arm2d_render_stripe(uint16_t y, uint16_t stripe_h, uint16_t width, uint16_t height)
-{ }
+{
+    arm_2d_tile_t tTile;
+    uint16_t card_w;
+    uint16_t accent_x;
+    uint16_t foot_y;
+
+    if ((width == 0U) || (stripe_h == 0U)) {
+        return;
+    }
+
+    card_w = (width > 24U) ? (uint16_t)(width - 24U) : width;
+    accent_x = (width > 26U) ? (uint16_t)(width - 26U) : 0U;
+    foot_y = (height > 34U) ? (uint16_t)(height - 34U) : 0U;
+
+    arm2d_tile_bind(&tTile, width, stripe_h);
+    arm2d_fill_local(&tTile, 0, 0, (int16_t)width, (int16_t)stripe_h, D601_C_BG);
+    arm2d_fill_global(&tTile, y, stripe_h, 0U, 0U, width, 64U, D601_C_BANNER);
+    arm2d_fill_global(&tTile, y, stripe_h, 12U, 84U, card_w, 76U, D601_C_CARD);
+    arm2d_fill_global(&tTile, y, stripe_h, 12U, 176U, card_w, 52U, D601_C_PANEL);
+    arm2d_fill_global(&tTile, y, stripe_h, 0U, foot_y, width, 34U, D601_C_FOOT);
+    arm2d_fill_global(&tTile, y, stripe_h, 20U, 72U, card_w, 4U, D601_C_CYAN);
+    arm2d_fill_global(&tTile, y, stripe_h, 22U, 150U, 78U, 6U, D601_C_AMBER);
+    arm2d_fill_global(&tTile, y, stripe_h, 110U, 150U, 42U, 6U, D601_C_GREEN);
+    arm2d_fill_global(&tTile, y, stripe_h, 162U, 150U, 38U, 6U, D601_C_ORANGE);
+    arm2d_fill_global(&tTile, y, stripe_h, accent_x, 92U, 6U, 58U, D601_C_CYAN);
+    arm2d_fill_global(&tTile, y, stripe_h, 18U, 234U, card_w, 2U, D601_C_GREEN);
+
+    d601_lcd_draw_bitmap(0U, y, width, stripe_h, &s_pfb[0][0]);
+}
 
 static void arm2d_fps_text(char *text, uint32_t fps)
-{ }
+{
+    char digits[10];
+    uint8_t count;
+    uint8_t i;
+    uint32_t value;
+
+    if (text == NULL) {
+        return;
+    }
+
+    text[0] = "F"[0];
+    text[1] = "P"[0];
+    text[2] = "S"[0];
+    text[3] = ":"[0];
+
+    value = (fps > 9999U) ? 9999U : fps;
+    count = 0U;
+    do {
+        digits[count] = (char)((uint8_t)"0"[0] + (uint8_t)(value % 10U));
+        ++count;
+        value /= 10U;
+    } while ((value != 0U) && (count < sizeof(digits)));
+
+    for (i = 0U; i < count; ++i) {
+        text[4U + i] = digits[(uint8_t)(count - 1U - i)];
+    }
+    text[4U + count] = 0;
+}
 
 static void arm2d_draw_fps(uint16_t height)
-{ }
+{
+    char text[12];
+    uint32_t now;
+    uint32_t elapsed;
+
+    now = HAL_GetTick();
+    if (s_fps_window_ms == 0U) {
+        s_fps_window_ms = now;
+    }
+
+    elapsed = now - s_fps_window_ms;
+    if (elapsed >= 1000U) {
+        s_fps_value = (s_fps_frame_count * 1000U) / elapsed;
+        s_fps_frame_count = 0U;
+        s_fps_window_ms = now;
+    }
+
+    arm2d_fps_text(text, s_fps_value);
+    if (height > 28U) {
+        d601_lcd_show_string(12U,
+                             (uint16_t)(height - 26U),
+                             text,
+                             D601_C_GREEN,
+                             D601_C_FOOT,
+                             2U);
+    }
+}
 
 void d601_arm2d_demo_show(void)
-{ }
+{
+    uint16_t width;
+    uint16_t height;
+    uint16_t y;
+
+    if (!s_arm2d_ready) {
+        arm_2d_init();
+        s_arm2d_ready = 1U;
+        s_fps_window_ms = HAL_GetTick();
+        s_last_show_ms = s_fps_window_ms;
+    }
 
     width = d601_lcd_get_width();
     height = d601_lcd_get_height();
     if (width > D601_ARM2D_PFB_WIDTH) {
         width = D601_ARM2D_PFB_WIDTH;
     }
+    if ((width == 0U) || (height == 0U)) {
+        return;
+    }
 
-    for (y = 0; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
-        uint16_t stripe_h = D601_ARM2D_PFB_LINES;
+    for (y = 0U; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
+        uint16_t stripe_h;
+
+        stripe_h = D601_ARM2D_PFB_LINES;
         if ((uint32_t)y + stripe_h > height) {
             stripe_h = (uint16_t)(height - y);
         }
         arm2d_render_stripe(y, stripe_h, width, height);
     }
 
-    d601_lcd_show_string(20, 22, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3);
-    d601_lcd_show_string(25, 102, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 128, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 198, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2);
+    if (height > 60U) {
+        d601_lcd_show_string(20U, 22U, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3U);
+    }
+    if (height > 150U) {
+        d601_lcd_show_string(25U, 102U, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2U);
+        d601_lcd_show_string(25U, 128U, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2U);
+    }
+    if (height > 220U) {
+        d601_lcd_show_string(25U, 198U, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2U);
+    }
     arm2d_draw_fps(height);
 }
 
 void d601_arm2d_demo_task(void)
-{ }
+{
+    uint32_t now;
 
-    d601_arm2d_demo_show();
-    ++s_fps_frame_count;
+    if (!s_arm2d_ready) {
+        d601_arm2d_demo_show();
+        ++s_fps_frame_count;
+        return;
+    }
+
+    now = HAL_GetTick();
+    if ((now - s_last_show_ms) >= D601_ARM2D_REFRESH_MS) {
+        s_last_show_ms = now;
+        d601_arm2d_demo_show();
+        ++s_fps_frame_count;
+    }
 }
diff --git a/projects/01_baseline/User/main.c b/projects/01_baseline/User/main.c
index 7467c9a..df8bf9a 100644
--- a/projects/01_baseline/User/main.c
+++ b/projects/01_baseline/User/main.c
@@ -4,6 +4,7 @@
 #include "./BSP/LED/led.h"
 #include "jsonrpc_handler.h"
 #include "d601_lcd.h"
+#include "d601_arm2d_demo.h"
 #include "d601_gpio.h"
 
 int main(void)
@@ -17,11 +18,13 @@ int main(void)
 
     d601_lcd_init();
     d601_gpio_init();
+    d601_arm2d_demo_show();
     printf("[D601-F103] LCD ID=0x%04X\r\n", (unsigned int)d601_lcd_get_id());
     printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");
 
     while (1)
     {
         jsonrpc_process();
+        d601_arm2d_demo_task();
     }
 }
```

## 原始产物索引

| Path | Bytes | SHA-256 |
|---|---:|---|
| evidence.json | 57082 | cae26c2cc6b9d0f98546b71605d5f8cd8c4de93515be2b87a91565d6ba3c269d |
| summary.md | 1413 | 3a01772652e031361af6da0fe4c82b968b876cfcc7fb35a2cc0e828ef59e521b |
| aggregate.md | 36709 | e71a2206685f632ec34b51f836b03382916993d719ae190a493c711d17bf415a |
| agent-messages.json | 51012 | cf8dfbb3ac4a1166ed43aed6292ff2bf5fc46374c11a8ef1c64cc2d9cbcf6b67 |
| agent-trace.md | 50002 | 6d02256dad0474c936ca1c9e626e80239aa827698761b727d66300d8ce284d13 |
| agent-transcript.md | 50002 | 6d02256dad0474c936ca1c9e626e80239aa827698761b727d66300d8ce284d13 |
| final-response.md | 1267 | 383e800ee595b790c2442f4c5af3965bd5a82c69eaf435f99d8339298ee5be30 |
| run.json | 35473 | faa0722a4328e7744440127c72e6a482d900c539be219ade1ac7d314f2d7a73f |
| result.json | 46061 | 6dc6edf9f4bcd81632cdfa1cdf1a86c5b14ff604cbf9f3eb1fa0d6f42f9c1332 |
| agent-trace.json | 159208 | 3c2cb2926750a0cba15c6b046e8de7d5c9c51f6fef5b0f7ae4886cc4cb80c525 |
| agent-prompt.md | 7744 | cd80b774ebeaef1f63e9b631c0b0d623398cb1d0631b8ae91690ec9a923d5ba7 |
| agent-diff.patch | 10056 | dd77ce77663def3291520d3088ed6eaf543b03843e411736ad8e885c57b4dc01 |
| .hwlab/hwpod-spec.yaml | 763 | 9b09bcad2d955971343a10f0873144a0fbf7c3296535fefb8f037b0bc6a0b931 |
| worker.stdout.log | 46837 | c05c7e7c9b9bab038172d389dc035176af395370e0a7a1f3c4944408c4e575a7 |
| worker.stderr.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |

## 说明

本文件只做已完成 CaseRun registry 产物的二次整理聚合，不新增自动结论、门禁或等级。
