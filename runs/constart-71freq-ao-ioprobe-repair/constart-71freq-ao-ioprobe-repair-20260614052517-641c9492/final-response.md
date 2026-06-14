# CaseRun Final Response

- caseId: constart-71freq-ao-ioprobe-repair
- runId: constart-71freq-ao-ioprobe-repair-20260614052517-641c9492
- traceId: trc_case_constart-71freq-ao-ioprobe-repair_9f25ef24dfd6410ab64396cf1195d51b
- present: true

已完成，所有操作都在本次隔离 worktree：
`F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9492`

**预检**
- mono repo HEAD: `de223ab80ddf80e5ba092dcf2d20f9df7ec91a60`
- `projects/71-00075-11` HEAD: `5ef2fc874782713d1e4752636a8db05cc4a18cd2`
- HWPOD: `71-FREQ-C`, probe UID `3FD750C63E342E24`
- `main41.ai0.current` 初始外部读数: `3.998754 mA`

**Diff 摘要**
造模坏 baseline 只改了 `projects/71-00075-11/FirmWare/APP/driver/aout.c`：
- `AO_CAL_ZERO_UA: 39U -> 0U`
- `AO_CAL_DUTY_DEN: 170375U -> 200000U`

修复从坏 baseline 恢复为边界校准：
- `AO_CAL_ZERO_UA: 0U -> 39U`
- `AO_CAL_DUTY_DEN: 200000U -> 170375U`
- public API 仍接收 uA，请求电流只在 `ao_current_to_pwm_duty()` 内转换为 PWM duty。
- 未修改 `user_config.h`，未使用/篡改 `control/status.output.ao_current_ua` 作为外部证据。

**Build / Download**
- 造模 build: job `20260614_133010_6556c51f`, returnCode `0`, warningCount `4`
- 修复 build: job `20260614_133440_911c8f8c`, returnCode `0`, warningCount `4`
- 修复 download: job `20260614_133529_669d9a04`, returnCode `0`, `Programming successful`
- download probe: explicit `3FD750C63E342E24`, target `stm32h723zgtx`, post-flash `target_running=true`

**造模回采**
| 请求 uA | 71 command echo | 41 AI0 external current |
|---:|---|---:|
| 40
