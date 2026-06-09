# CaseRun Agent Transcript

- caseId: d601-f103-v2-arm2d-integration
- runId: issue1075-sub2api-tools-only-20260609102340
- traceId: trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- conversationId: cnv_case_d601-f103-v2-arm2d-integration_issue1075-sub2api-tools-only-20260609102340
- sessionId: ses_f41b8c5e-8007-4180-886a-eb0b7ee46773
- threadId: 
- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- lookupOnly: false
- finalResponse: present
- autoEvaluation: false

## Messages
- **10:23:50  请求接受**

- **10:23:50 total=00:00:00 run agentrun:run:reuse-skipped**

```text
AgentRun run reuse was skipped because this request requires the CaseRun tools-only resource bundle.
```

- **10:23:50 total=00:00:00 run agentrun:run:created**

```text
AgentRun run run_b73f68dff2834d0e98e5585f0d9c1ab1 created through internal k3s Service DNS.
```

- **10:23:50 total=00:00:00 run agentrun:command:created**

```text
AgentRun command cmd_ed44e2e49b8043bdb731ef3d0d1deb3e created; hwlab-cloud-api will start a runner Job explicitly without relying on scheduler automation.
```

- **10:23:51 total=00:00:00 run agentrun:runner-job:created**

```text
AgentRun runner Job agentrun-v01-runner-f6c04513c399 created in namespace agentrun-v01.
```

- **10:23:55 total=00:00:05 run agentrun:backend:run-claimed**

```text
run-claimed
```

- **10:23:56 total=00:00:05 run agentrun:backend:resource-bundle-materialized**

```text
resource-bundle-materialized
```

- **10:23:56 total=00:00:05 run agentrun:backend:backend-turn-started**

```text
backend-turn-started
```

- **10:23:56  会话就绪**

- **10:23:56 total=00:00:05 run agentrun:backend:codex-rollout-storage-mounted**

```text
codex-rollout-storage-mounted
```

- **10:23:56 total=00:00:06 run agentrun:backend:initial-prompt-assembly**

```text
initial-prompt-assembly
```

- **10:24:03  助手消息**

我先按 CaseRun 要求走 HWPOD 入口做规格校验，然后只读取目标文件和必要 API 片段来形成最小可编译改动。

- <details>
  <summary>已运行 hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F1...</summary>

  ```text
  hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceN...
  exitCode=0
  rowId: tool:call_EDmxySMHwPv2mTxwdPpAjT2f
  ```

  </details>

- **10:24:14  助手消息**

规格校验通过。接下来读取 `main.c`、demo 头/源文件以及 LCD 头文件的相关片段，先确认现有函数声明和 LCD bitmap API。

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --hwpod-id d601-f103-v2...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_JKbydg8RdjkPCaNXTTiAnPtq
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspac...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_Ur0tDZooIKOQIhZY2bVIZW31
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --hwpod-id d601-f103-v2...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_WxwSitZiL12O2BSflbwOdvzU
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwpod-id d601-f103-v2 --work...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/d601_lcd.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_bDmcVled3CXGuPyfToL40hxc
  ```

  </details>

- **10:24:23  助手消息**

当前 `d601_arm2d_demo.c` 是明显的半截实现，`main.c` 还没接入 demo。为了避免猜 ARM-2D 调用签名，我只查 `arm_2d_rgb16_fill_colour` 的声明和一处用法。

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_rgb16_fill_colour" Middlewares/Arm-2D projects/01_baseline -...</summary>

  ```text
  hwpod workspace rg "arm_2d_rgb16_fill_colour" Middlewares/Arm-2D projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "HW...
  exitCode=1
  rowId: tool:call_dDuMoq3qAZAWgEl39lGZlDng
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_tile_t" projects/01_baseline/User Middlewares/Arm-2D/Library...</summary>

  ```text
  hwpod workspace rg "arm_2d_tile_t" projects/01_baseline/User Middlewares/Arm-2D/Library --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_1DLiOwckitIVsc86AD2QA9UE
  ```

  </details>

- **10:24:33  助手消息**

中间件不在仓库根 `Middlewares/Arm-2D`，我改为在 baseline 工程范围内查 ARM-2D 符号，避免继续扩大搜索面。

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_baseline --hwpod-id d601-f103...</summary>

  ```text
  hwpod workspace rg "arm_2d_rgb16_fill_colour" projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_gukMdaLLdiaeWWh5Tc0ELGfa
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "typedef.*arm_2d_tile_t|struct.*arm_2d_tile|arm_2d_tile_t" projects/...</summary>

  ```text
  hwpod workspace rg "typedef.*arm_2d_tile_t|struct.*arm_2d_tile|arm_2d_tile_t" projects/01_baseline --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_C2h3JrjwZCHViX36gfvKlSUb
  ```

  </details>

- **10:24:47  助手消息**

`arm_2d_rgb16_fill_colour` 在 `projects/01_baseline/Middlewares/Arm-2D` 下，接下来只打开声明所在头文件和 tile 类型所在头文件的相关文件。

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_45YwhLi0ZQO4jlR8B1L2awHM
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "typedef struct arm_2d_tile|typedef.*arm_2d_tile_t|struct arm_2d_til...</summary>

  ```text
  hwpod workspace rg "typedef struct arm_2d_tile|typedef.*arm_2d_tile_t|struct arm_2d_tile" projects/01_baseline/Middlewares/Arm-2D/Library/Include --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_R4fFENVSgVDNZmH8gaD6eqWx
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "tRegion|pchBuffer|phwBuffer|tSize|iWidth|iHeight|tLocation|iX|iY" p...</summary>

  ```text
  hwpod workspace rg "tRegion|pchBuffer|phwBuffer|tSize|iWidth|iHeight|tLocation|iX|iY" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_AIeTsG61IqCEslixYqWcSXFR
  ```

  </details>

- **10:24:57  助手消息**

我已经确认 fill API 是 `arm_2d_rgb16_fill_colour(tile, region, colour)`。现在还需要 tile/region 字段名，读取 `arm_2d_types.h` 这一段；如果工具只能整文件输出，我会限制返回量并只用相关字段。

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_type...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_u9mpDLD6tMY3Ceaqfn54uVLe
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "struct arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Libra...</summary>

  ```text
  hwpod workspace rg "struct arm_2d_tile_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h -A 45 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_6jf4bj8XnyM9PCW27G2yUfj6
  ```

  </details>

- **10:25:11  助手消息**

`rg -A` 可用，tile 字段已经够用：根 tile 需要 `tInfo.bIsRoot`、`tRegion.tSize` 和 `phwBuffer`。我再补一眼 region/location 类型，然后直接提交最小 patch。

- <details>
  <summary>已运行 hwpod workspace rg "typedef struct arm_2d_location_t|typedef struct arm_2d_size_t|typed...</summary>

  ```text
  hwpod workspace rg "typedef struct arm_2d_location_t|typedef struct arm_2d_size_t|typedef struct arm_2d_region_t" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_types.h -A 18 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_dcaDK0UEoffLVjUaZ3EV8RJv
  ```

  </details>

- **10:25:35  助手消息**

我准备把 demo 源文件重写成一个小的 stripe renderer：每 32 行绑定一次 RGB565 tile，用 ARM-2D 填背景和几个矩形，再把 `s_pfb` 交给 LCD bitmap API；文字由现有 LCD 字符串 API 叠加。

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_op_wait|arm_2d_wait|arm_2d_helper.*wait|arm_2d_task" project...</summary>

  ```text
  hwpod workspace rg "arm_2d_op_wait|arm_2d_wait|arm_2d_helper.*wait|arm_2d_task" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/Middlewares/Arm-2D/Helper/Include --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_sAhrEmlGAZwU5BVmVIjhWxpq
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_init" projects/01_baseline/Middlewares/Arm-2D/Library/Includ...</summary>

  ```text
  hwpod workspace rg "arm_2d_init" projects/01_baseline/Middlewares/Arm-2D/Library/Include projects/01_baseline/User --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_Udn0O4YdAQXgutUIy9r5yLqb
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "#define arm_2d_op_wait|arm_2d_op_wait_async|arm_2d_task\(" projects...</summary>

  ```text
  hwpod workspace rg "#define arm_2d_op_wait|arm_2d_op_wait_async|arm_2d_task\(" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h -A 18 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_Gy8SfKABqp5OfjbKLXRfl52f
  ```

  </details>

- **10:25:46  助手消息**

`arm_2d_init(void)` 和默认 OP 等待接口已经确认。为了保持实现窄，我会只调用初始化、fill、等待默认 OP、LCD 刷新，不引入 Scene/PFB Adapter。

- <details>
  <summary>已运行 hwpod workspace rg "arm_2d_op_wait_async" projects/01_baseline/Middlewares/Arm-2D/Libra...</summary>

  ```text
  hwpod workspace rg "arm_2d_op_wait_async" projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h -B 8 -A 4 --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_o9cBl6KNtFeaKEPIWXR0sYT0
  ```

  </details>

- **10:25:57  助手消息**

我会把等待封装成 `ARM_2D_OP_WAIT_ASYNC()` 的短循环，这样即使当前配置走同步软件路径也不会影响编译；后续若编译器提示该宏不可用，再按错误收窄修。

- **10:27:28  助手消息**

开始应用补丁：`main.c` 只加接入的三行，`d601_arm2d_demo.c` 用完整函数实现替换当前断裂的半实现。补丁会通过 HWPOD 的 `workspace apply-patch` 进入隔离工作区。

- **10:28:25 total=00:04:34 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- **10:28:25 total=00:04:35 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- **10:28:28  助手消息**

补丁文件已准备好，现在通过 HWPOD 应用到隔离工作区。

- **10:28:32 total=00:04:41 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- <details>
  <summary>已运行 cat patch.txt | hwpod workspace apply-patch --reason "integrate minimal ARM-2D stripe L...</summary>

  ```text
  cat patch.txt | hwpod workspace apply-patch --reason "integrate minimal ARM-2D stripe LCD demo" --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_4JbPUidESTYec8zQBJ6Xz6ec
  ```

  </details>

- **10:28:37  助手消息**

补丁已成功应用：`main.c` 三处接入，demo 源文件整文件替换。现在直接跑 compile-only `hwpod build`，按编译错误再做窄范围修复。

- **10:28:40 total=00:04:50 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- <details>
  <summary>已运行 hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree...</summary>

  ```text
  hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_osKzQwRYvAwtBATonrIj54Yw
  ```

  </details>

- **10:28:43  助手消息**

构建已排队，jobId 是 `20260609_182839_7d92796e`。我开始轮询状态，直到拿到终态输出。

- **10:28:46 total=00:04:55 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- <details>
  <summary>已运行 hwpod job status 20260609_182839_7d92796e --hwpod-id d601-f103-v2 --workspace-path "F:\...</summary>

  ```text
  hwpod job status 20260609_182839_7d92796e --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_qdoSLqCFl3x9yQPrI0pmuyFZ
  ```

  </details>

- **10:28:58  助手消息**

构建已完成且 return_code 为 0，产物 `.hex/.axf` 已生成。最后我快速查看工作区差异/改动确认，只用于汇总，不再扩大实现范围。

- <details>
  <summary>已运行 hwpod workspace diff --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\...</summary>

  ```text
  hwpod workspace diff --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": false, "action": "hwpod-cli", "status": "failed", "error": { "code": "unsupported_workspace_command", "message": "unsupported workspace command: diff", "details": {} }, "observedAt": "2026-06-09T10:28:58.447Z" }
  exitCode=1
  rowId: tool:call_zbrhU2IeNgYbtaKR1YEcQoPV
  ```

  </details>

- <details>
  <summary>已运行 hwpod workspace rg "d601_arm2d_demo|arm_2d_rgb16_fill_colour|d601_lcd_draw_bitmap|d601_...</summary>

  ```text
  hwpod workspace rg "d601_arm2d_demo|arm_2d_rgb16_fill_colour|d601_lcd_draw_bitmap|d601_lcd_show_string|static uint16_t s_pfb" projects/01_baseline/User/d601_arm2d_demo.c projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_sVzT5T7YMS76duf3JkQYJ4Jp
  ```

  </details>

- **10:28:59 total=00:05:09 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- <details>
  <summary>已运行 hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspac...</summary>

  ```text
  hwpod workspace cat projects/01_baseline/User/main.c --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340"
  stdout:
  { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "resolvedAuthority": { "hwpodId": "d601-f103-v2", "specPath": "hwpod://d601-f103-v2", "specAuthority": "preinstalled-verified-spec", "workspacePath": "F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1075-sub2api-tools-only-20260609102340", "nodeId": "node-d601-f103-v2", "runtimeEndpoint": { "kind": "api", "baseUrl": "http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667", "source": "runtime-env", "sourceName": "...
  exitCode=0
  rowId: tool:call_ZjgJZqbjqsKmra7DGiif5DQy
  ```

  </details>

- **10:29:02  助手消息**

`workspace diff` 不是可用子命令；我已用目标文件读取和符号检索确认了实际改动。编译终态已经足够，接下来清理本地临时补丁文件。

- **10:29:03 total=00:05:12 run agentrun:backend:turn/diff/updated**

```text
turn/diff/updated
```

- **10:29:16  助手最终消息，轮次完成（总耗时 00:05:26）**

已完成 D601-F103-V2 ARM-2D demo 最小集成，并通过 compile-only 构建。

**Diff 摘要**
- `projects/01_baseline/User/main.c`
  - 在 `d601_lcd.h` 后加入 `d601_arm2d_demo.h`
  - `d601_gpio_init()` 后调用 `d601_arm2d_demo_show()`
  - `jsonrpc_process()` 后调用 `d601_arm2d_demo_task()`
- `projects/01_baseline/User/d601_arm2d_demo.c`
  - 重写为直接 RGB565 stripe framebuffer demo
  - 使用 `s_pfb[32][240]`
  - 使用 `arm_2d_rgb16_fill_colour()` 绘制 stripe 区域
  - 使用 `d601_lcd_draw_bitmap()` 刷新 LCD
  - 使用 `d601_lcd_show_string()` 显示标题、状态和 FPS 文本
  - 未引入 Scene Player、PFB Display Adapter、图片资源或下载/运行态验证

**编译终态**
- jobId: `20260609_182839_7d92796e`
- status: `completed`
- success: `true`
- return_code: `0`
- warning_count: `26`

**Artifacts**
- `F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340\projects\01_baseline\Output\atk_f103.hex`
- `F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340\projects\01_baseline\Output\atk_f103.axf`

**仍需人工关注**
- 本次只做编译构建检查；未下载、未做 UART/运行态冒烟验证。
- 构建仍有 26 个 warning，但不阻断产物生成。

## Final Response
已完成 D601-F103-V2 ARM-2D demo 最小集成，并通过 compile-only 构建。

**Diff 摘要**
- `projects/01_baseline/User/main.c`
  - 在 `d601_lcd.h` 后加入 `d601_arm2d_demo.h`
  - `d601_gpio_init()` 后调用 `d601_arm2d_demo_show()`
  - `jsonrpc_process()` 后调用 `d601_arm2d_demo_task()`
- `projects/01_baseline/User/d601_arm2d_demo.c`
  - 重写为直接 RGB565 stripe framebuffer demo
  - 使用 `s_pfb[32][240]`
  - 使用 `arm_2d_rgb16_fill_colour()` 绘制 stripe 区域
  - 使用 `d601_lcd_draw_bitmap()` 刷新 LCD
  - 使用 `d601_lcd_show_string()` 显示标题、状态和 FPS 文本
  - 未引入 Scene Player、PFB Display Adapter、图片资源或下载/运行态验证

**编译终态**
- jobId: `20260609_182839_7d92796e`
- status: `completed`
- success: `true`
- return_code: `0`
- warning_count: `26`

**Artifacts**
- `F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340\projects\01_baseline\Output\atk_f103.hex`
- `F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1075-sub2api-tools-only-20260609102340\projects\01_baseline\Output\atk_f103.axf`

**仍需人工关注**
- 本次只做编译构建检查；未下载、未做 UART/运行态冒烟验证。
- 构建仍有 26 个 warning，但不阻断产物生成。

## Subject Diff

statusShort:
```text
M projects/01_baseline/User/d601_arm2d_demo.c
 M projects/01_baseline/User/main.c
```

diffStat:
```text
projects/01_baseline/User/d601_arm2d_demo.c | 225 +++++++++++++++++++++++++---
 projects/01_baseline/User/main.c            |   3 +
 2 files changed, 209 insertions(+), 19 deletions(-)
```

patch:
```diff
diff --git a/projects/01_baseline/User/d601_arm2d_demo.c b/projects/01_baseline/User/d601_arm2d_demo.c
index f4400f9..124b2e5 100644
--- a/projects/01_baseline/User/d601_arm2d_demo.c
+++ b/projects/01_baseline/User/d601_arm2d_demo.c
@@ -1,4 +1,4 @@
-﻿#include "d601_arm2d_demo.h"
+#include "d601_arm2d_demo.h"
 #include "d601_lcd.h"
 #include "stm32f1xx_hal.h"
 #include "arm_2d.h"
@@ -6,8 +6,9 @@
 #include <stdint.h>
 #include <string.h>
 
-#define D601_ARM2D_PFB_WIDTH 240U
-#define D601_ARM2D_PFB_LINES 32U
+#define D601_ARM2D_PFB_WIDTH      240U
+#define D601_ARM2D_PFB_LINES      32U
+#define D601_ARM2D_REFRESH_MS     80U
 #define D601_RGB565(__R, __G, __B) \
     (uint16_t)((((uint16_t)(__R) & 0xF8U) << 8) | (((uint16_t)(__G) & 0xFCU) << 3) | ((uint16_t)(__B) >> 3))
 
@@ -23,15 +24,39 @@
 
 static uint16_t s_pfb[D601_ARM2D_PFB_LINES][D601_ARM2D_PFB_WIDTH];
 static uint8_t s_arm2d_ready;
+static uint32_t s_last_refresh_ms;
 static uint32_t s_fps_window_ms;
 static uint32_t s_fps_frame_count;
 static uint32_t s_fps_value;
+static uint32_t s_frame;
 
 static void arm2d_wait(void)
-{ }
+{
+    while (!arm_2d_op_wait_async(NULL)) {
+    }
+}
+
+static void arm2d_ready(void)
+{
+    uint32_t now;
+
+    if (s_arm2d_ready == 0U) {
+        arm_2d_init();
+        now = HAL_GetTick();
+        s_last_refresh_ms = now;
+        s_fps_window_ms = now;
+        s_arm2d_ready = 1U;
+    }
+}
 
 static void arm2d_tile_bind(arm_2d_tile_t *ptTile, uint16_t width, uint16_t height)
-{ }
+{
+    memset(ptTile, 0, sizeof(*ptTile));
+    ptTile->tInfo.bIsRoot = 1U;
+    ptTile->tRegion.tSize.iWidth = (int16_t)width;
+    ptTile->tRegion.tSize.iHeight = (int16_t)height;
+    ptTile->phwBuffer = &s_pfb[0][0];
+}
 
 static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t x,
@@ -39,7 +64,50 @@ static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t width,
                              int16_t height,
                              uint16_t colour)
-{ }
+{
+    arm_2d_region_t region;
+    int16_t tile_w;
+    int16_t tile_h;
+    int32_t right;
+    int32_t bottom;
+
+    if ((width <= 0) || (height <= 0)) {
+        return;
+    }
+
+    tile_w = ptTile->tRegion.tSize.iWidth;
+    tile_h = ptTile->tRegion.tSize.iHeight;
+
+    if (x < 0) {
+        width = (int16_t)(width + x);
+        x = 0;
+    }
+    if (y < 0) {
+        height = (int16_t)(height + y);
+        y = 0;
+    }
+    if ((width <= 0) || (height <= 0) || (x >= tile_w) || (y >= tile_h)) {
+        return;
+    }
+
+    right = (int32_t)x + width;
+    bottom = (int32_t)y + height;
+    if (right > tile_w) {
+        width = (int16_t)(tile_w - x);
+    }
+    if (bottom > tile_h) {
+        height = (int16_t)(tile_h - y);
+    }
+
+    memset(&region, 0, sizeof(region));
+    region.tLocation.iX = x;
+    region.tLocation.iY = y;
+    region.tSize.iWidth = width;
+    region.tSize.iHeight = height;
+
+    (void)arm_2d_rgb16_fill_colour(ptTile, &region, colour);
+    arm2d_wait();
+}
 
 static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t stripe_y,
@@ -49,44 +117,163 @@ static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t width,
                               uint16_t height,
                               uint16_t colour)
-{ }
+{
+    uint32_t stripe_top;
+    uint32_t stripe_bottom;
+    uint32_t rect_top;
+    uint32_t rect_bottom;
+    uint32_t draw_top;
+    uint32_t draw_bottom;
+
+    stripe_top = stripe_y;
+    stripe_bottom = (uint32_t)stripe_y + stripe_h;
+    rect_top = y;
+    rect_bottom = (uint32_t)y + height;
+
+    if ((rect_bottom <= stripe_top) || (rect_top >= stripe_bottom)) {
+        return;
+    }
+
+    draw_top = (rect_top > stripe_top) ? rect_top : stripe_top;
+    draw_bottom = (rect_bottom < stripe_bottom) ? rect_bottom : stripe_bottom;
+
+    arm2d_fill_local(ptTile,
+                     (int16_t)x,
+                     (int16_t)(draw_top - stripe_top),
+                     (int16_t)width,
+                     (int16_t)(draw_bottom - draw_top),
+                     colour);
+}
 
 static void arm2d_render_stripe(uint16_t y, uint16_t stripe_h, uint16_t width, uint16_t height)
-{ }
+{
+    arm_2d_tile_t tile;
+    uint16_t i;
+    uint16_t phase;
+    uint16_t travel;
+    uint16_t bar_x;
+    uint16_t meter_w;
+
+    (void)height;
+    arm2d_tile_bind(&tile, width, stripe_h);
+
+    arm2d_fill_local(&tile, 0, 0, (int16_t)width, (int16_t)stripe_h, D601_C_BG);
+    arm2d_fill_global(&tile, y, stripe_h, 0, 0, width, 72U, D601_C_BANNER);
+    arm2d_fill_global(&tile, y, stripe_h, 0, 72U, width, 8U, D601_C_CYAN);
+    arm2d_fill_global(&tile, y, stripe_h, 14U, 90U, 212U, 72U, D601_C_CARD);
+    arm2d_fill_global(&tile, y, stripe_h, 14U, 178U, 212U, 72U, D601_C_PANEL);
+    arm2d_fill_global(&tile, y, stripe_h, 0, 276U, width, 44U, D601_C_FOOT);
+
+    travel = (uint16_t)(width + 48U);
+    phase = (uint16_t)((s_frame * 9U) % travel);
+    for (i = 0U; i < 4U; ++i) {
+        bar_x = (uint16_t)((phase + (i * 72U)) % travel);
+        if (bar_x < width) {
+            arm2d_fill_global(&tile,
+                              y,
+                              stripe_h,
+                              bar_x,
+                              (uint16_t)(86U + (i * 36U)),
+                              38U,
+                              10U,
+                              (i & 1U) ? D601_C_AMBER : D601_C_GREEN);
+        }
+    }
+
+    meter_w = (uint16_t)(24U + ((s_frame * 5U) % 164U));
+    arm2d_fill_global(&tile, y, stripe_h, 26U, 224U, 188U, 12U, D601_C_FOOT);
+    arm2d_fill_global(&tile, y, stripe_h, 28U, 226U, meter_w, 8U, D601_C_ORANGE);
+    arm2d_fill_global(&tile, y, stripe_h, 28U, 238U, 92U, 4U, D601_C_CYAN);
+
+    d601_lcd_draw_bitmap(0U, y, width, stripe_h, &s_pfb[0][0]);
+}
 
 static void arm2d_fps_text(char *text, uint32_t fps)
-{ }
+{
+    if (fps > 999U) {
+        fps = 999U;
+    }
+
+    text[0] = 'F';
+    text[1] = 'P';
+    text[2] = 'S';
+    text[3] = ':';
+    text[4] = (char)('0' + ((fps / 100U) % 10U));
+    text[5] = (char)('0' + ((fps / 10U) % 10U));
+    text[6] = (char)('0' + (fps % 10U));
+    text[7] = '\0';
+}
 
 static void arm2d_draw_fps(uint16_t height)
-{ }
+{
+    char text[8];
+    uint16_t y;
+
+    y = 286U;
+    if (height > 34U) {
+        y = (uint16_t)(height - 34U);
+    }
+
+    arm2d_fps_text(text, s_fps_value);
+    d601_lcd_show_string(18U, y, text, D601_LCD_WHITE, D601_C_FOOT, 2U);
+}
 
 void d601_arm2d_demo_show(void)
-{ }
+{
+    uint16_t width;
+    uint16_t height;
+    uint16_t y;
+
+    arm2d_ready();
 
     width = d601_lcd_get_width();
     height = d601_lcd_get_height();
+    if ((width == 0U) || (height == 0U)) {
+        return;
+    }
     if (width > D601_ARM2D_PFB_WIDTH) {
         width = D601_ARM2D_PFB_WIDTH;
     }
 
-    for (y = 0; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
-        uint16_t stripe_h = D601_ARM2D_PFB_LINES;
-        if ((uint32_t)y + stripe_h > height) {
+    for (y = 0U; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
+        uint16_t stripe_h;
+
+        stripe_h = D601_ARM2D_PFB_LINES;
+        if (((uint32_t)y + stripe_h) > height) {
             stripe_h = (uint16_t)(height - y);
         }
         arm2d_render_stripe(y, stripe_h, width, height);
     }
 
-    d601_lcd_show_string(20, 22, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3);
-    d601_lcd_show_string(25, 102, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 128, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 198, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2);
+    d601_lcd_show_string(20U, 22U, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3U);
+    d601_lcd_show_string(16U, 104U, "RGB565 STRIPE", D601_LCD_YELLOW, D601_C_CARD, 2U);
+    d601_lcd_show_string(24U, 130U, "LCD BITMAP", D601_LCD_WHITE, D601_C_CARD, 2U);
+    d601_lcd_show_string(24U, 190U, "D601 F103 V2", D601_LCD_CYAN, D601_C_PANEL, 2U);
+    d601_lcd_show_string(24U, 246U, "ARM-2D FILL", D601_LCD_WHITE, D601_C_BG, 2U);
     arm2d_draw_fps(height);
+
+    ++s_frame;
+    s_last_refresh_ms = HAL_GetTick();
 }
 
 void d601_arm2d_demo_task(void)
-{ }
+{
+    uint32_t now;
+    uint32_t elapsed;
+
+    now = HAL_GetTick();
+    if ((s_arm2d_ready != 0U) && ((uint32_t)(now - s_last_refresh_ms) < D601_ARM2D_REFRESH_MS)) {
+        return;
+    }
 
     d601_arm2d_demo_show();
     ++s_fps_frame_count;
+
+    now = HAL_GetTick();
+    elapsed = (uint32_t)(now - s_fps_window_ms);
+    if (elapsed >= 1000U) {
+        s_fps_value = (s_fps_frame_count * 1000U) / elapsed;
+        s_fps_frame_count = 0U;
+        s_fps_window_ms = now;
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
