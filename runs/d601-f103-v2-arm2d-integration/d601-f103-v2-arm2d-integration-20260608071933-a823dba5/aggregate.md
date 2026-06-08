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
- completedAt: 2026-06-08T07:28:43.780Z
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
- traceSource: caserun-identity
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
- sourceEventCount: 0
- renderedRowCount: 0
- hwpodCommandCount: 0
- hwpodBuildCommandCount: 0

**# CaseRun Agent Transcript**

**- caseId: d601-f103-v2-arm2d-integration**
**- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5**
**- traceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64**
**- conversationId: cnv_case_d601-f103-v2-arm2d-integration_d601-f103-v2-arm2d-integration-20260608071933-a823dba5**
**- sessionId: ses_c7e66642-bdd6-4b06-9a85-99041d6ce2ef**
**- threadId: **
**- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows**
**- traceLookupStrategy: id_plus_existing_cli**
**- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64 --render web**
**- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64**
**- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64**
**- lookupOnly: true**
**- finalResponse: null**
**- autoEvaluation: false**

**## Messages**
**_No rendered trace rows were returned._**

**## Final Response**
**finalResponse=null**
**reason: finalResponse=null; no authoritative final assistant response was returned by the trace/result payload**

**## Subject Diff**

**statusShort:**
**```text**
**M projects/01_baseline/User/d601_arm2d_demo.c**
** M projects/01_baseline/User/main.c**
**```**

**diffStat:**
**```text**
**projects/01_baseline/User/d601_arm2d_demo.c | 248 ++++++++++++++++++++++++++--**
** projects/01_baseline/User/main.c            |   3 +**
** 2 files changed, 233 insertions(+), 18 deletions(-)**
**```**

**patch:**
**```diff**
**diff --git a/projects/01_baseline/User/d601_arm2d_demo.c b/projects/01_baseline/User/d601_arm2d_demo.c**
**index f4400f9..00555e8 100644**
**--- a/projects/01_baseline/User/d601_arm2d_demo.c**
**+++ b/projects/01_baseline/User/d601_arm2d_demo.c**
**@@ -1,4 +1,4 @@**
**-﻿#include "d601_arm2d_demo.h"**
**+#include "d601_arm2d_demo.h"**
** #include "d601_lcd.h"**
** #include "stm32f1xx_hal.h"**
** #include "arm_2d.h"**
**@@ -8,6 +8,7 @@**

** #define D601_ARM2D_PFB_WIDTH 240U**
** #define D601_ARM2D_PFB_LINES 32U**
**+#define D601_ARM2D_REFRESH_MS 250U**
** #define D601_RGB565(__R, __G, __B) \\**
**     (uint16_t)((((uint16_t)(__R) &amp; 0xF8U) &lt;&lt; 8) | (((uint16_t)(__G) &amp; 0xFCU) &lt;&lt; 3) | ((uint16_t)(__B) &gt;&gt; 3))**

**@@ -26,12 +27,28 @@ static uint8_t s_arm2d_ready;**
** static uint32_t s_fps_window_ms;**
** static uint32_t s_fps_frame_count;**
** static uint32_t s_fps_value;**
**+static uint32_t s_last_show_ms;**

** static void arm2d_wait(void)**
**-{ }**
**+{**
**+    while (!ARM_2D_OP_WAIT_ASYNC()) {**
**+    }**
**+}**

** static void arm2d_tile_bind(arm_2d_tile_t \*ptTile, uint16_t width, uint16_t height)**
**-{ }**
**+{**
**+    if (ptTile == NULL) {**
**+        return;**
**+    }**
**+**
**+    memset(ptTile, 0, sizeof(\*ptTile));**
**+    ptTile-&gt;tInfo.bIsRoot = 1U;**
**+    ptTile-&gt;tRegion.tLocation.iX = 0;**
**+    ptTile-&gt;tRegion.tLocation.iY = 0;**
**+    ptTile-&gt;tRegion.tSize.iWidth = (int16_t)width;**
**+    ptTile-&gt;tRegion.tSize.iHeight = (int16_t)height;**
**+    ptTile-&gt;phwBuffer = &amp;s_pfb[0][0];**
**+}**

** static void arm2d_fill_local(arm_2d_tile_t \*ptTile,**
**                              int16_t x,**
**@@ -39,7 +56,50 @@ static void arm2d_fill_local(arm_2d_tile_t \*ptTile,**
**                              int16_t width,**
**                              int16_t height,**
**                              uint16_t colour)**
**-{ }**
**+{**
**+    arm_2d_region_t tRegion;**
**+    int16_t tile_w;**
**+    int16_t tile_h;**
**+**
**+    if ((ptTile == NULL) || (width &lt;= 0) || (height &lt;= 0)) {**
**+        return;**
**+    }**
**+**
**+    tile_w = ptTile-&gt;tRegion.tSize.iWidth;**
**+    tile_h = ptTile-&gt;tRegion.tSize.iHeight;**
**+    if ((tile_w &lt;= 0) || (tile_h &lt;= 0)) {**
**+        return;**
**+    }**
**+**
**+    if (x &lt; 0) {**
**+        width = (int16_t)(width + x);**
**+        x = 0;**
**+    }**
**+    if (y &lt; 0) {**
**+        height = (int16_t)(height + y);**
**+        y = 0;**
**+    }**
**+    if ((x &gt;= tile_w) || (y &gt;= tile_h) || (width &lt;= 0) || (height &lt;= 0)) {**
**+        return;**
**+    }**
**+    if (((int32_t)x + width) &gt; tile_w) {**
**+        width = (int16_t)(tile_w - x);**
**+    }**
**+    if (((int32_t)y + height) &gt; tile_h) {**
**+        height = (int16_t)(tile_h - y);**
**+    }**
**+    if ((width &lt;= 0) || (height &lt;= 0)) {**
**+        return;**
**+    }**
**+**
**+    tRegion.tLocation.iX = x;**
**+    tRegion.tLocation.iY = y;**
**+    tRegion.tSize.iWidth = width;**
**+    tRegion.tSize.iHeight = height;**
**+**
**+    arm_2d_rgb16_fill_colour(ptTile, &amp;tRegion, colour);**
**+    arm2d_wait();**
**+}**

** static void arm2d_fill_global(arm_2d_tile_t \*ptTile,**
**                               uint16_t stripe_y,**
**@@ -49,44 +109,196 @@ static void arm2d_fill_global(arm_2d_tile_t \*ptTile,**
**                               uint16_t width,**
**                               uint16_t height,**
**                               uint16_t colour)**
**-{ }**
**+{**
**+    uint32_t stripe_bottom;**
**+    uint32_t rect_bottom;**
**+    uint32_t rect_right;**
**+    uint32_t tile_w;**
**+    uint32_t start_y;**
**+    uint32_t end_y;**
**+**
**+    if ((ptTile == NULL) || (stripe_h == 0U) || (width == 0U) || (height == 0U)) {**
**+        return;**
**+    }**
**+**
**+    stripe_bottom = (uint32_t)stripe_y + stripe_h;**
**+    rect_bottom = (uint32_t)y + height;**
**+    if ((rect_bottom &lt;= stripe_y) || ((uint32_t)y &gt;= stripe_bottom)) {**
**+        return;**
**+    }**
**+**
**+    tile_w = (uint32_t)ptTile-&gt;tRegion.tSize.iWidth;**
**+    rect_right = (uint32_t)x + width;**
**+    if (((uint32_t)x &gt;= tile_w) || (rect_right == (uint32_t)x)) {**
**+        return;**
**+    }**
**+    if (rect_right &gt; tile_w) {**
**+        rect_right = tile_w;**
**+    }**
**+**
**+    start_y = ((uint32_t)y &gt; (uint32_t)stripe_y) ? (uint32_t)y : (uint32_t)stripe_y;**
**+    end_y = (rect_bottom &lt; stripe_bottom) ? rect_bottom : stripe_bottom;**
**+    if ((end_y &lt;= start_y) || (rect_right &lt;= (uint32_t)x)) {**
**+        return;**
**+    }**
**+**
**+    arm2d_fill_local(ptTile,**
**+                     (int16_t)x,**
**+                     (int16_t)(start_y - stripe_y),**
**+                     (int16_t)(rect_right - x),**
**+                     (int16_t)(end_y - start_y),**
**+                     colour);**
**+}**

** static void arm2d_render_stripe(uint16_t y, uint16_t stripe_h, uint16_t width, uint16_t height)**
**-{ }**
**+{**
**+    arm_2d_tile_t tTile;**
**+    uint16_t card_w;**
**+    uint16_t accent_x;**
**+    uint16_t foot_y;**
**+**
**+    if ((width == 0U) || (stripe_h == 0U)) {**
**+        return;**
**+    }**
**+**
**+    card_w = (width &gt; 24U) ? (uint16_t)(width - 24U) : width;**
**+    accent_x = (width &gt; 26U) ? (uint16_t)(width - 26U) : 0U;**
**+    foot_y = (height &gt; 34U) ? (uint16_t)(height - 34U) : 0U;**
**+**
**+    arm2d_tile_bind(&amp;tTile, width, stripe_h);**
**+    arm2d_fill_local(&amp;tTile, 0, 0, (int16_t)width, (int16_t)stripe_h, D601_C_BG);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 0U, 0U, width, 64U, D601_C_BANNER);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 12U, 84U, card_w, 76U, D601_C_CARD);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 12U, 176U, card_w, 52U, D601_C_PANEL);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 0U, foot_y, width, 34U, D601_C_FOOT);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 20U, 72U, card_w, 4U, D601_C_CYAN);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 22U, 150U, 78U, 6U, D601_C_AMBER);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 110U, 150U, 42U, 6U, D601_C_GREEN);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 162U, 150U, 38U, 6U, D601_C_ORANGE);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, accent_x, 92U, 6U, 58U, D601_C_CYAN);**
**+    arm2d_fill_global(&amp;tTile, y, stripe_h, 18U, 234U, card_w, 2U, D601_C_GREEN);**
**+**
**+    d601_lcd_draw_bitmap(0U, y, width, stripe_h, &amp;s_pfb[0][0]);**
**+}**

** static void arm2d_fps_text(char \*text, uint32_t fps)**
**-{ }**
**+{**
**+    char digits[10];**
**+    uint8_t count;**
**+    uint8_t i;**
**+    uint32_t value;**
**+**
**+    if (text == NULL) {**
**+        return;**
**+    }**
**+**
**+    text[0] = "F"[0];**
**+    text[1] = "P"[0];**
**+    text[2] = "S"[0];**
**+    text[3] = ":"[0];**
**+**
**+    value = (fps &gt; 9999U) ? 9999U : fps;**
**+    count = 0U;**
**+    do {**
**+        digits[count] = (char)((uint8_t)"0"[0] + (uint8_t)(value % 10U));**
**+        ++count;**
**+        value /= 10U;**
**+    } while ((value != 0U) &amp;&amp; (count &lt; sizeof(digits)));**
**+**
**+    for (i = 0U; i &lt; count; ++i) {**
**+        text[4U + i] = digits[(uint8_t)(count - 1U - i)];**
**+    }**
**+    text[4U + count] = 0;**
**+}**

** static void arm2d_draw_fps(uint16_t height)**
**-{ }**
**+{**
**+    char text[12];**
**+    uint32_t now;**
**+    uint32_t elapsed;**
**+**
**+    now = HAL_GetTick();**
**+    if (s_fps_window_ms == 0U) {**
**+        s_fps_window_ms = now;**
**+    }**
**+**
**+    elapsed = now - s_fps_window_ms;**
**+    if (elapsed &gt;= 1000U) {**
**+        s_fps_value = (s_fps_frame_count \* 1000U) / elapsed;**
**+        s_fps_frame_count = 0U;**
**+        s_fps_window_ms = now;**
**+    }**
**+**
**+    arm2d_fps_text(text, s_fps_value);**
**+    if (height &gt; 28U) {**
**+        d601_lcd_show_string(12U,**
**+                             (uint16_t)(height - 26U),**
**+                             text,**
**+                             D601_C_GREEN,**
**+                             D601_C_FOOT,**
**+                             2U);**
**+    }**
**+}**

** void d601_arm2d_demo_show(void)**
**-{ }**
**+{**
**+    uint16_t width;**
**+    uint16_t height;**
**+    uint16_t y;**
**+**
**+    if (!s_arm2d_ready) {**
**+        arm_2d_init();**
**+        s_arm2d_ready = 1U;**
**+        s_fps_window_ms = HAL_GetTick();**
**+        s_last_show_ms = s_fps_window_ms;**
**+    }**

**     width = d601_lcd_get_width();**
**     height = d601_lcd_get_height();**
**     if (width &gt; D601_ARM2D_PFB_WIDTH) {**
**         width = D601_ARM2D_PFB_WIDTH;**
**     }**
**+    if ((width == 0U) || (height == 0U)) {**
**+        return;**
**+    }**

**-    for (y = 0; y &lt; height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {**
**-        uint16_t stripe_h = D601_ARM2D_PFB_LINES;**
**+    for (y = 0U; y &lt; height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {**
**+        uint16_t stripe_h;**
**+**
**+        stripe_h = D601_ARM2D_PFB_LINES;**
**         if ((uint32_t)y + stripe_h &gt; height) {**
**             stripe_h = (uint16_t)(height - y);**
**         }**
**         arm2d_render_stripe(y, stripe_h, width, height);**
**     }**

**-    d601_lcd_show_string(20, 22, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3);**
**-    d601_lcd_show_string(25, 102, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2);**
**-    d601_lcd_show_string(25, 128, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2);**
**-    d601_lcd_show_string(25, 198, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2);**
**+    if (height &gt; 60U) {**
**+        d601_lcd_show_string(20U, 22U, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3U);**
**+    }**
**+    if (height &gt; 150U) {**
**+        d601_lcd_show_string(25U, 102U, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2U);**
**+        d601_lcd_show_string(25U, 128U, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2U);**
**+    }**
**+    if (height &gt; 220U) {**
**+        d601_lcd_show_string(25U, 198U, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2U);**
**+    }**
**     arm2d_draw_fps(height);**
** }**

** void d601_arm2d_demo_task(void)**
**-{ }**
**+{**
**+    uint32_t now;**

**-    d601_arm2d_demo_show();**
**-    ++s_fps_frame_count;**
**+    if (!s_arm2d_ready) {**
**+        d601_arm2d_demo_show();**
**+        ++s_fps_frame_count;**
**+        return;**
**+    }**
**+**
**+    now = HAL_GetTick();**
**+    if ((now - s_last_show_ms) &gt;= D601_ARM2D_REFRESH_MS) {**
**+        s_last_show_ms = now;**
**+        d601_arm2d_demo_show();**
**+        ++s_fps_frame_count;**
**+    }**
** }**
**diff --git a/projects/01_baseline/User/main.c b/projects/01_baseline/User/main.c**
**index 7467c9a..df8bf9a 100644**
**--- a/projects/01_baseline/User/main.c**
**+++ b/projects/01_baseline/User/main.c**
**@@ -4,6 +4,7 @@**
** #include "./BSP/LED/led.h"**
** #include "jsonrpc_handler.h"**
** #include "d601_lcd.h"**
**+#include "d601_arm2d_demo.h"**
** #include "d601_gpio.h"**

** int main(void)**
**@@ -17,11 +18,13 @@ int main(void)**

**     d601_lcd_init();**
**     d601_gpio_init();**
**+    d601_arm2d_demo_show();**
**     printf("[D601-F103] LCD ID=0x%04X\\r\\n", (unsigned int)d601_lcd_get_id());**
**     printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\\r\\n");**

**     while (1)**
**     {**
**         jsonrpc_process();**
**+        d601_arm2d_demo_task();**
**     }**
** }**
**```**

## Final Response

# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- traceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- present: false

finalResponse=null

reasonCode: final_response_missing
status: completed
terminalStatus: completed
naturalEnd: true
timedOut: false
agentResultStatus: completed
agentRunStatus: claimed
commandState: completed

reason: finalResponse=null; no authoritative final assistant response was returned by the trace/result payload

## Terminal/Error Rows
_No terminal/error rows were rendered._

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
| evidence.json | 24410 | 609152b610c5e21b3633538ca64c1eee1ecf68d50f4d983bea9c0350539acb28 |
| summary.md | 1412 | 6b1e7e46c870d92a2a47611e8e2fa4d7c9ac235a4781e75c77969c7006877220 |
| agent-messages.json | 2795 | ccbf7be70b7f803b7425f01cf36332f81f83e1a6d86004e2eaa84e1c9d4919a4 |
| agent-trace.md | 11566 | c0ab388e8bc18a3c05dd6dc9a9327d660c0cf7d00e11b98fe8ddadd8f89c89cc |
| agent-transcript.md | 11566 | c0ab388e8bc18a3c05dd6dc9a9327d660c0cf7d00e11b98fe8ddadd8f89c89cc |
| final-response.md | 618 | 3f915589fc2195b3221c1b99f3834f3d86e6d35d138e16a84a3670d14ea368eb |
| run.json | 35454 | 0b375c9ded0bd8ab8825db99b12d6fe429b4cec5311f234ba88d3c9ff9e1a6b2 |
| result.json | 10621 | 7e1348bfd51caa8001198308b275b16281cf4cf4a44befd194beb2fc67d19526 |
| agent-trace.json | 1991 | 42f9dc0ab3dd7d3fa30bba0d920e7690f4d4889a2456f90cdf3d583974a0c47c |
| agent-prompt.md | 7744 | cd80b774ebeaef1f63e9b631c0b0d623398cb1d0631b8ae91690ec9a923d5ba7 |
| agent-diff.patch | 10056 | dd77ce77663def3291520d3088ed6eaf543b03843e411736ad8e885c57b4dc01 |
| .hwlab/hwpod-spec.yaml | 763 | 9b09bcad2d955971343a10f0873144a0fbf7c3296535fefb8f037b0bc6a0b931 |
| worker.stdout.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |
| worker.stderr.log | 0 | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |

## 说明

本文件只做已完成 CaseRun registry 产物的二次整理聚合，不新增自动结论、门禁或等级。
