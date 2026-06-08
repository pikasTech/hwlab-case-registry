# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608130649-d1b68651
- traceId: trc_case_d601-f103-v2-arm2d-integration_6a245c7047a5456f96a97f78dd3cd2ce
- present: true

已完成 D601-F103-V2 ARM-2D demo 最小集成，且只修改了允许的两个文件。

**Diff 摘要**
- `projects/01_baseline/User/main.c`
  - 在 `d601_lcd.h` 后加入 `d601_arm2d_demo.h`
  - `d601_gpio_init()` 后调用 `d601_arm2d_demo_show()`
  - `jsonrpc_process()` 后调用 `d601_arm2d_demo_task()`
- `projects/01_baseline/User/d601_arm2d_demo.c`
  - 重新实现 `arm2d_wait()`、`arm2d_tile_bind()`、`arm2d_fill_local()`
  - 基于 ARM-2D RGB565 fill、stripe/PFB、`d601_lcd_draw_bitmap()`、`d601_lcd_show_string()` 实现 show/task 周期刷新与 FPS 文本

**Compile-only 验证**
- HWPOD: `d601-f103-v2`
- Keil target: `USART`
- job_id: `20260608_211427_4e5795ac`
- 终态: `completed`
- success: `true`
- return_code: `0`
- warning_count: `26`
- hex artifact: `F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608130649-d1b68651\projects\01_baseline\Output\atk_f103.hex`
- axf artifact: `F:\Work\HWLAB-CASE-F103\.worktree\caserun-d601-f103-v2-arm2d-integration-20260608130649-d1b68651\projects\01_baseline\Output\atk_f103.axf`

未执行下载、未运行 UART、未做运行态冒烟验证。

仍需人工关注：构建后我尝试进一步展开 warning 明细时，HWPOD 节点后续查询出现 `hwpod_node_not_connected`，所以目前只能可靠回报 Keil job 结果里的 warning 总数 `26`，未能逐条归因。运行态画面和刷新效果也按任务约束未验证。
