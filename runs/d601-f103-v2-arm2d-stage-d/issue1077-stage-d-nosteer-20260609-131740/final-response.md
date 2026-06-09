# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-stage-d
- runId: issue1077-stage-d-nosteer-20260609-131740
- traceId: trc_case_d601-f103-v2-arm2d-stage-d_3675c19f31614577a18b5da0fa075952
- present: true

已完成 Stage D，并按要求走了 HWPOD 标准入口完成 build、download、UART 证据采集。

**源码来源**
Arm-2D 采用有界恢复路径：已检查官方仓库 metadata `https://github.com/ARM-software/Arm-2D.git`，记录 ref `refs/tags/v1.2.6 peeled e1a0284e8c4e5ad95a4a878c80a650237fd3dd5a`。未复制完整 upstream 源码；在 subject 内生成了最小 RGB565 兼容 Arm-2D 子集，provenance 写入 `projects/01_baseline/Middlewares/Arm-2D/PROVENANCE.txt`。

**修改文件**
- `projects/01_baseline/Middlewares/Arm-2D/Config/arm_2d_cfg.h`
- `projects/01_baseline/Middlewares/Arm-2D/Include/arm_2d.h`
- `projects/01_baseline/Middlewares/Arm-2D/Source/arm_2d.c`
- `projects/01_baseline/Middlewares/Arm-2D/PROVENANCE.txt`
- `projects/01_baseline/User/d601_arm2d_demo.c`
- `projects/01_baseline/User/d601_arm2d_demo.h`
- `projects/01_baseline/User/main.c`
- `projects/01_baseline/Projects/MDK-ARM/atk_f103.uvprojx`

**Keil 工程变更**
`atk_f103.uvprojx` 的 USART target 已加入 Arm-2D include path/config path，新增 `d601_arm2d_demo.c` 和 `Middlewares/Arm-2D/Source/arm_2d.c` 工程项。

**验证结果**
- `hwpod-ctl spec validate`：succeeded
- `hwpod inspect`：workspace exists
- build job `20260609_212320_42aa804f`：completed，return code 0，warning 0，生成 `atk_f103.hex/axf`
- download job `20260609_212343_b81a7a86`：completed，return code 0，`Erase Done / Programming Done / Verify OK / Application running`

**UART 关键原始输出**
串口记录中先有旧 run 的残留，但新固件输出包含本次 runId：

```text
[D601-ARM2D] start
[D601-ARM2D] runId=issue1077-stage-d-nosteer-20260609-131740
[D601-ARM2D] source=generated-rgb565-compatible-subset
[D601-ARM2D] upstream=ARM-software/Arm-2D v1.2.6
[D601-ARM2D] hb runId=issue1077-stage-d-nosteer-20260609-131740
[D601-ARM2D] loop=1 frame=1 tick=203
[D601-ARM2D] tile=128x96 rgb565 cache=24576B
[D601-ARM2D] dump first=0xFFFF mid=0xFFFF last=0xFFFF crc=0x4D85
[D601-ARM2D] lcd id=0x7789 size=240x320
...
[D601-ARM2D] loop=891523 frame=89 tick=22203
[D601-ARM2D] dump first=0xFFFF mid=0xFFFF last=0xFFFF crc=0xBE0C
```

**LCD/cache 摘要**
运行态证据显示 LCD `0x7789`，尺寸 `240x320`；Arm-2D tile 为 `128x96` RGB565，静态 cache `24576B`，CRC 随 frame 变化，说明 framebuffer/tile 内容在刷新。画面路径为 LCD 清屏、顶部标题、居中 RGB565 tile、移动色条/徽标、frame/loop 文本和底部进度条。

**需人工关注**
download 成功，但 Keil job 诊断里提示 `uvoptx` 绑定探针 `95FFF39D3DB47E0D` 与 HWPOD 请求探针 `3FD750C63E342E24` 不一致；本次 Keil 返回仍是 programming successful。串口采集中也有少量字符丢失/旧数据残留，但本次 runId 的完整启动行已捕获。
