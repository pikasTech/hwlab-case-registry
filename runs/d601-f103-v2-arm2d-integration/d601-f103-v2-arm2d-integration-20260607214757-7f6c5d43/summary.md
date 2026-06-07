# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260607214757-7f6c5d43
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260607214757-7f6c5d43
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_a98c8100669a47cbbb5d600573a48146
- agentSessionId: ses_c3078467-08d5-4f47-86b9-f72dd6e378e7
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_a98c8100669a47cbbb5d600573a48146 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_a98c8100669a47cbbb5d600573a48146
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_a98c8100669a47cbbb5d600573a48146
- agentTraceCommandCount: 60
- agentTraceHwpodCommandCount: 43
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 21
- agentStageKinds: spec-validate, inspect, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260607214757-7f6c5d43/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260608_055304_e5d717ae
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", " ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod inspect --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace replace --path projects/01_baseline/User/main.c --find '#include "d601_lcd.h"' --replace '#include "d601_lcd.h"\n#include "d601_arm2d_demo.h"' - ... clipped ...` | hwpod workspace replace --path projects/01_baseline/User/main.c --find '#include "d601_lcd.h"' --replace '#include "d601_lcd.h"\n#include "d601_arm2d_demo.h"' --spec .hwlab/hwpod-s ... clipped ... |
| build |  | 0 | `hwpod build --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod build --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "debug.bui ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_utils.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_utils.json && node - ... clipped ...` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_utils.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_utils.json && node -e ' const d=JSON.par ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/__arm_2d_math.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_math.json && node - ... clipped ...` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/__arm_2d_math.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_math.json && node -e ' const d=JSON.par ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_tile.json && node -e  ... clipped ...` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_tile.json && node -e " const d=JSON.parse ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_tile.json && node -e  ... clipped ...` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_tile.json && node -e ' const d=JSON.parse ... clipped ... |
| hwpod-other |  |  | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_types.json && node - ... clipped ...` | ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_op.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_op.json && node -e ' co ... clipped ...` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_op.h --spec .hwlab/hwpod-spec.yaml 2>&1 > /tmp/arm_2d_op.json && node -e ' const d=JSON.parse(req ... clipped ... |
| workspace-edit |  |  | `hwpod workspace write --path projects/01_baseline/User/d601_arm2d_demo.c --content '#include "d601_arm2d_demo.h" #include "d601_lcd.h" #include "stm32f1xx_hal.h ... clipped ...` | ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260608_055235_71f4d7d3 --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod job status 20260608_055235_71f4d7d3 --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod-ctl --help 2>&1 \|\| hwpod-ctl -h 2>&1` | hwpod-ctl --help 2>&1 \|\| hwpod-ctl -h 2>&1 stdout: { "ok": true, "action": "hwpod-ctl.help", "status": "succeeded", "contractVersion": "hwpod-ctl-v1", "usage": [ "bun tools/hwpod-c ... clipped ... |
| hwpod-other |  | 0 | `hwpod --help 2>&1 \|\| hwpod -h 2>&1` | hwpod --help 2>&1 \|\| hwpod -h 2>&1 stdout: { "ok": true, "action": "hwpod-cli.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "usage": [ "bun tools/hwpod-cli. ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/main.c --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwl ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.h --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specP ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_arm2d_demo.c --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specP ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/d601_lcd.h --spec .hwlab/hwpod-spec.yaml 2>&1` | hwpod workspace cat projects/01_baseline/User/d601_lcd.h --spec .hwlab/hwpod-spec.yaml 2>&1 stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": " ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -200 stdout: { "ok": true, "action": "hwpod-cli.invok ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -300` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -300 stdout: { "ok": true, "action": "hwpod-cli ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -150` | hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_draw.h --spec .hwlab/hwpod-spec.yaml 2>&1 \| head -150 stdout: { "ok": true, "action": "hwpod-cli. ... clipped ... |
