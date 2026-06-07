# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: d601-f103-v2-arm2d-integration-20260607071039-d917f378
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260607071039-d917f378
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_1a47a19bff2f4c24a4b3a363305ca9cd
- agentSessionId: ses_7ee67054-7b51-4abb-ba20-76cc355151cc
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_1a47a19bff2f4c24a4b3a363305ca9cd --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_1a47a19bff2f4c24a4b3a363305ca9cd
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_1a47a19bff2f4c24a4b3a363305ca9cd
- agentTraceCommandCount: 81
- agentTraceHwpodCommandCount: 50
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 23
- agentStageKinds: spec-validate, inspect, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/d601-f103-v2-arm2d-integration-20260607071039-d917f378/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- jobId: 20260607_151534_7cd7fd28
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml` | hwpod-ctl spec validate --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": ".hwlab/hwpod-spec.yaml", "docum ... clipped ... |
| inspect |  | 0 | `hwpod inspect --spec .hwlab/hwpod-spec.yaml` | hwpod inspect --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "inspect", "c ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace insert-after --spec .hwlab/hwpod-spec.yaml --path projects/01_baseline/User/main.c --anchor ' jsonrpc_process();' --line ' d601_arm2d_demo_task( ... clipped ...` | hwpod workspace insert-after --spec .hwlab/hwpod-spec.yaml --path projects/01_baseline/User/main.c --anchor ' jsonrpc_process();' --line ' d601_arm2d_demo_task();' stdout: { "ok":  ... clipped ... |
| build |  | 0 | `hwpod build --spec .hwlab/hwpod-spec.yaml` | hwpod build --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.yaml", "intent": "debug.build",  ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require('fs').readFileSync( ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require('fs').readFileSync( ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require('fs').readFileSync( ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require('fs').readFileSync( ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_types.h 2>/dev/null \| node -e " const d=require('fs').readFileSync( ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h 2>/dev/null \| node -e " const d=require( ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/Middlewares/Arm-2D/Library/include/arm_2d_tile.h 2>/dev/null \| node -e " const d=require('fs').readFileSync(' ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.c 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/s ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.c 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/stdin','utf8'); let r ... clipped ... |
| hwpod-other |  |  | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.c 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/s ... clipped ...` | ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/stdin','utf8 ... clipped ...` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/stdin','utf8'); let r; try{r=JSO ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml` | hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.ya ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml` | hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spec.ya ... clipped ... |
| hwpod-other |  |  | `hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/stdin','utf8'); let r;  ... clipped ...` | hwpod job status 20260607_151513_854babb8 --spec .hwlab/hwpod-spec.yaml 2>/dev/null \| node -e " const d=require('fs').readFileSync('/dev/stdin','utf8'); let r; try{r=JSON.parse(d)} ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/main.c stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hw ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/` | hwpod workspace ls --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/ stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwlab/hwpod-spe ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.h` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.h stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.c` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_arm2d_demo.c stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_lcd.h` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_lcd.h stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwla ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace ls --spec .hwlab/hwpod-spec.yaml Middlewares/Arm-2D/` | hwpod workspace ls --spec .hwlab/hwpod-spec.yaml Middlewares/Arm-2D/ stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": ".hwlab/hwpod-spec.yaml",  ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_gpio.h` | hwpod workspace cat --spec .hwlab/hwpod-spec.yaml projects/01_baseline/User/d601_gpio.h stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": ".hwl ... clipped ... |
