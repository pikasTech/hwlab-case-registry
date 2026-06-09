# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1082-real-arm2d-cmsisdsp-run8-20260609-1755
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run8-20260609-1755
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_71fdbd03752249e8bf3aea479fae4bb4
- agentSessionId: ses_329b55dd-e6e2-4af4-b019-1599693bf912
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_71fdbd03752249e8bf3aea479fae4bb4 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_71fdbd03752249e8bf3aea479fae4bb4
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_71fdbd03752249e8bf3aea479fae4bb4
- agentTraceCommandCount: 31
- agentTraceHwpodCommandCount: 27
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 27
- agentStageKinds: spec-validate, inspect, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-cmsisdsp-run8-20260609-1755/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260610_021521_0e41f79a
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260610_021521_0e41f79a
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run8-20260609-1755` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cmsisdsp-run8-20260609-1755` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "<TargetName>USART\|<Groups>\|<GroupName>\|<FileName>\|<IncludePath>\|<MiscControls>\|arm_math\|CMSIS\|ARM" projects/01_baseline/Projects/MDK-A ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace ls projects/01_baseline --recursive --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-cms ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "int main\|main\(\|printf\|USART\|uart\|LCD\|lcd\|d601_lcd\|delay\|while" projects/01_baseline --context 2 --hwpod-id d601-f103-v2 --workspace-p ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/User/main.c projects/01_baseline/User/d601_lcd.h projects/01_baseline/User/d601_lcd.c projects/01_baseline/User/d601_co ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git ls-remote https://github.com/ARM-software/Arm-2D.git refs/tags/v1.2.4 "refs/tags/v1.2.4''^{}" --hwpod-id d601-f103-v2 --workspace-path "F:'"\Work\ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-i ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "arm_2d_init\|arm_2d_fill\|arm_2d_rgb565\|ARM_2D_CFG\|arm_2d_tile_t\|arm_2d_canvas\|ARM_2D_COLOUR_RGB565\|arm_2d_op_wait" projects/01_baseline ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "typedef struct.*arm_2d_tile\|arm_2d_tile_t;\|tRegion\|tInfo\|pchBuffer\|phwBuffer\|tColourInfo\|ARM_2D_COLOUR_RGB565\|ARM_2D_TILE\|arm_2d_rgb56 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_draw.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d_tile.h  ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "ARM_MATH_CM3\|ARM_DSP_CONFIG\|ARM_MATH_LOOPUNROLL\|ARM_MATH_MATRIX_CHECK\|DISABLEFLOAT16\|ARM_FLOAT16_SUPPORTED\|__GNUC__\|__CC_ARM" projects ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$f='"'projects\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_types.h'; \"'$lines=Ge ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$f='"'projects\01_baseline\Middlewares\Arm-2D\Library\Include\arm_2d_draw.h'; \"'$lines=Get ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "ARM_2D_STATIC\|ARM_2D_DECLARE\|ARM_2D_TILE\|ARM_NOINIT\|pchBuffer\|phwBuffer\|arm_2d_tile_t [a-zA-Z_].*=\|tColourInfo.chScheme\|ARM_2D_COLOUR_ ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace rg -n -e "arm_math.h\|CMSIS\|ARM_MATH\|__ARM_2D_CFG.*DSP\|HAS_CMSIS\|SIN\|COS\|arm_sin\|arm_cos" projects/01_baseline/Middlewares/Arm-2D/Library/Include ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$files=@('"'projects\01_baseline\Middlewares\CMSIS-DSP\Source\FastMathFunctions\arm_sin_f32 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "$ErrorActionPreference='"'Stop'; "'$tmp=Join-Path $env:TEMP '"'arm2d-v1.2.4-hwlab'; if(Test-Pa ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd cmd /c 'if exist "%TEMP%\arm2d-v1.2.4-hwlab" rmdir /s /q "%TEMP%\arm2d-v1.2.4-hwlab" & git clone --depth 1 --branch v1.2.4 https://github.com/ARM-soft ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd cmd /c 'if exist Arm-2D rmdir /s /q Arm-2D' --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-c ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd cmd /c 'if exist "C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS-DSP\1.14.2\Include\arm_math.h" (echo CMSIS_DSP_1.14.2_FOUND) else (echo CMSIS_DSP_1 ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd cmd /c 'dir "%TEMP%\arm2d-v1.2.4-hwlab" & git -C "%TEMP%\arm2d-v1.2.4-hwlab" rev-parse HEAD & git -C "%TEMP%\arm2d-v1.2.4-hwlab" ls-tree -r --name-onl ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$ErrorActionPreference='"'Stop'; \"'$p='"'C:\Users\liang\AppData\Local\Arm\Packs\ARM\CMSIS- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$ErrorActionPreference='"'Stop'; \"'$tmp=Join-Path '"\"'$env:TEMP '"'arm2d-v1.2.4-hwlab'; i ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$ErrorActionPreference='"'Stop'; \"'$root=(Get-Location).Path; '"\"'$armSrc=Join-Path '"\"' ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/01_baseline/Middlewares/Arm-2D/Library/Include/arm_2d.h projects/01_baseline/Middlewares/Arm-2D/Library/Include/template/arm_2d_cfg ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd powershell -NoProfile -ExecutionPolicy Bypass -Command "\"'$root=(Get-Location).Path; '"\"'$src=Join-Path '"\"'$root '"'projects\01_baseline\Middlewar ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
