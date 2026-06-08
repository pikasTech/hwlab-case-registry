# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608140029-08ec8394
- traceId: trc_case_d601-f103-v2-arm2d-integration_71a0a2011fba4afbae8bd0585b5a9afe
- present: true

## D601-F103-V2 ARM-2D Demo 最小集成 — 构建结果报告

### 修改的文件

**1. `projects/01_baseline/User/main.c`** — 添加 3 行

- `#include "d601_arm2d_demo.h"`（在 `d601_lcd.h` 之后）
- `d601_arm2d_demo_show();`（在 `d601_gpio_init();` 之后）
- `d601_arm2d_demo_task();`（在 `while(1)` 内 `jsonrpc_process();` 之后）

**2. `projects/01_baseline/User/d601_arm2d_demo.c`** — 完整重新实现（232 行新增）

重新实现了 9 个函数：

| 函数 | 实现说明 |
|---|---|
| `arm2d_wait()` | 轮询 `s_arm2d_ready` + 调用 `arm_2d_task(NULL)` |
| `arm2d_tile_bind()` | 初始化 `arm_2d_tile_t`，绑定 `s_pfb` 缓冲区，设置 `ARM_2D_COLOUR_RGB565` |
| `arm2d_fill_local()` | 使用 `arm_2d_rgb16_fill_colour` 宏（映射到 `arm_2dp_rgb16_fill_colour(NULL, ...)`）填充本地坐标区域 |
| `arm2d_fill_global()` | 全局坐标→本地坐标转换 + 剪辑，调用 `arm2d_fill_local()` |
| `arm2d_render_stripe()` | 绑定 PFB tile → 填充背景/横幅/Card/Panel → 刷入 LCD |
| `arm2d_fps_text()` | 格式化 FPS 字符串 |
| `arm2d_draw_fps()` | 调用 `d601_lcd_show_string` 显示 FPS |
| `d601_arm2d_demo_show()` | 全屏 stripe 逐行渲染 + 中英文标签叠加 |
| `d601_arm2d_demo_task()` | 周期重绘 + `HAL_GetTick()` 1 秒 FPS 统计 |

### 编译结果

```
return_code = 0
0 Error(s), 26 Warning(s)
```

- **d601_arm2d_demo.c**: 8 warnings, 0 errors（8 个 warning 全部来自 `Middlewares/Arm-2D/` 头文件末尾缺换行，非我们的代码问题）
- **main.c**: 0 warnings, 0 errors

### 构建产物

- **hex**: `projects/01_baseline/Output/atk_f103.hex`（65536 字节）
- **axf**: `projects/01_baseline/Output/atk_f103.axf`

### Code Size

```
Code=39336  RO-data=1716  RW-data=344  ZI-data=23408
```

### 调用链验证（静态调用图）

```
d601_arm2d_demo_task → d601_arm2d_demo_show → arm2d_render_stripe
  → arm2d_fill_global → arm2d_fill_local → arm_2dp_rgb16_fill_colour
  → __arm_2d_op_invoke → ... → __tile_clipped_pave
```

### 需要人工关注的问题

1. **26 个 Warning** 全部来源于 ARM-2D 中间件头文件（`__arm_2d_*.h`）末尾缺少换行符，以及 1 个 `const` 兼容性 warning 和 1 个未使用变量 warning。不影响功能，但可向 ARM-2D 上游报告。
2. **最大栈使用**约 1208 字节 + 不可追踪的函数指针栈，在 STM32F103 上需确认堆栈配置是否足够。
3. **运行时**：`d601_arm2d_demo_task()` 在 `jsonrpc_process()` 之后被调用，每帧重绘整个屏幕，UART JSON-RPC 需确保不因长时间 PFB 刷新阻塞通信。
