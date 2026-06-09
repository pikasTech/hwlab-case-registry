# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-stage-d
- runId: issue1082-real-arm2d-cmsisdsp-run9-20260609-1821
- traceId: trc_case_d601-f103-v2-arm2d-stage-d_894423a3c94c4d96869d0176ce7eecd6
- present: true

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
