# CaseRun Final Response

- caseId: constart-71freq-ao-ioprobe-repair
- runId: issue1178-ai-ao-20260615-1229
- traceId: trc_case_constart-71freq-ao-ioprobe-repair_8d122a47d8b3434e8cb53c425a7c49d0
- present: true

**结论**
验证被硬件证据阻断：71 板 JSON-RPC 对 4000/8000/12000uA 都返回成功 echo，但 41 主机 `main41.ai0.current` 外部读数始终为 `-0.0373 mA`，raw voltage/current 都等同零点，未随 AO 命令变化。因此未执行 20000uA，并已恢复 4000uA 后再次读取确认。

**代码与构建**
- mono repo HEAD：`de223ab80ddf80e5ba092dcf2d20f9df7ec91a60`
- submodule HEAD：`5ef2fc874782713d1e4752636a8db05cc4a18cd2`
- 造模 diff 摘要：临时把 `aout.c::ao_current_to_pwm_duty()` 退化为 `duty = cur_ua`，移除 `AO_CAL_ZERO_UA/AO_CAL_DUTY_NUM/AO_CAL_DUTY_DEN` 的使用。
- 修复 diff 摘要：恢复边界转换公式 `(cur_ua - 39) * 100000 / 170375`，public API 继续接收 uA，仅在 `aout.c` 写 PWM 前转换一次。
- 最终 `aout.c` / `user_config.h` 无剩余 diff；源码保持已校准实现。
- build job：`20260615_123500_5c0691c4`，`returnCode=0`，`warningCount=4`。

**下载证据**
- spec 确认：`targetDevice.board=71-FREQ-C`，`debugProbe.probeUid=3FD750C63E342E24`
- download/program job：`20260615_123624_4bfbb2e6`
- 结果：`returnCode=0`，`Programming successful`
- 实际探针：`probe_uid=3FD750C63E342E24`
- post flash：target resumed，`target_running=true`

**外部电流证据**
| 步骤 | 71 command echo | 41 AI0 external current |
|---|---:|---:|
| 初始读数 | 未下发 AO | `-0.0373 mA` |
| 4000uA | `ao_current_uA=4000` | `-0.0373 mA` |
| 8000uA | `ao_current_uA=8000` | `-0.0373 mA` |
| 12000uA | `ao_current_uA=12000` | `-0.0373 mA` |
