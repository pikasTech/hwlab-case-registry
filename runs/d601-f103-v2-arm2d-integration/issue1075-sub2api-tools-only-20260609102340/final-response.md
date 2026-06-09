# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: issue1075-sub2api-tools-only-20260609102340
- traceId: trc_case_d601-f103-v2-arm2d-integration_e8ddfeed9665426bb7559d60eff414e1
- present: true

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
