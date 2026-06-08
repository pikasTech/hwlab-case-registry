# CaseRun Agent Transcript

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- traceId: trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- conversationId: cnv_case_d601-f103-v2-arm2d-integration_d601-f103-v2-arm2d-integration-20260608071933-a823dba5
- sessionId: ses_c7e66642-bdd6-4b06-9a85-99041d6ce2ef
- threadId: 
- renderer: tools/src/hwlab-cli/trace-renderer:traceDisplayRows
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64 --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_a2844403df574ef9a5321dbbfe928b64
- lookupOnly: true
- finalResponse: null
- autoEvaluation: false

## Messages
_No rendered trace rows were returned._

## Final Response
finalResponse=null
reason: finalResponse=null; no authoritative final assistant response was returned by the trace/result payload

## Subject Diff

statusShort:
```text
M projects/01_baseline/User/d601_arm2d_demo.c
 M projects/01_baseline/User/main.c
```

diffStat:
```text
projects/01_baseline/User/d601_arm2d_demo.c | 248 ++++++++++++++++++++++++++--
 projects/01_baseline/User/main.c            |   3 +
 2 files changed, 233 insertions(+), 18 deletions(-)
```

patch:
```diff
diff --git a/projects/01_baseline/User/d601_arm2d_demo.c b/projects/01_baseline/User/d601_arm2d_demo.c
index f4400f9..00555e8 100644
--- a/projects/01_baseline/User/d601_arm2d_demo.c
+++ b/projects/01_baseline/User/d601_arm2d_demo.c
@@ -1,4 +1,4 @@
-﻿#include "d601_arm2d_demo.h"
+#include "d601_arm2d_demo.h"
 #include "d601_lcd.h"
 #include "stm32f1xx_hal.h"
 #include "arm_2d.h"
@@ -8,6 +8,7 @@
 
 #define D601_ARM2D_PFB_WIDTH 240U
 #define D601_ARM2D_PFB_LINES 32U
+#define D601_ARM2D_REFRESH_MS 250U
 #define D601_RGB565(__R, __G, __B) \
     (uint16_t)((((uint16_t)(__R) & 0xF8U) << 8) | (((uint16_t)(__G) & 0xFCU) << 3) | ((uint16_t)(__B) >> 3))
 
@@ -26,12 +27,28 @@ static uint8_t s_arm2d_ready;
 static uint32_t s_fps_window_ms;
 static uint32_t s_fps_frame_count;
 static uint32_t s_fps_value;
+static uint32_t s_last_show_ms;
 
 static void arm2d_wait(void)
-{ }
+{
+    while (!ARM_2D_OP_WAIT_ASYNC()) {
+    }
+}
 
 static void arm2d_tile_bind(arm_2d_tile_t *ptTile, uint16_t width, uint16_t height)
-{ }
+{
+    if (ptTile == NULL) {
+        return;
+    }
+
+    memset(ptTile, 0, sizeof(*ptTile));
+    ptTile->tInfo.bIsRoot = 1U;
+    ptTile->tRegion.tLocation.iX = 0;
+    ptTile->tRegion.tLocation.iY = 0;
+    ptTile->tRegion.tSize.iWidth = (int16_t)width;
+    ptTile->tRegion.tSize.iHeight = (int16_t)height;
+    ptTile->phwBuffer = &s_pfb[0][0];
+}
 
 static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t x,
@@ -39,7 +56,50 @@ static void arm2d_fill_local(arm_2d_tile_t *ptTile,
                              int16_t width,
                              int16_t height,
                              uint16_t colour)
-{ }
+{
+    arm_2d_region_t tRegion;
+    int16_t tile_w;
+    int16_t tile_h;
+
+    if ((ptTile == NULL) || (width <= 0) || (height <= 0)) {
+        return;
+    }
+
+    tile_w = ptTile->tRegion.tSize.iWidth;
+    tile_h = ptTile->tRegion.tSize.iHeight;
+    if ((tile_w <= 0) || (tile_h <= 0)) {
+        return;
+    }
+
+    if (x < 0) {
+        width = (int16_t)(width + x);
+        x = 0;
+    }
+    if (y < 0) {
+        height = (int16_t)(height + y);
+        y = 0;
+    }
+    if ((x >= tile_w) || (y >= tile_h) || (width <= 0) || (height <= 0)) {
+        return;
+    }
+    if (((int32_t)x + width) > tile_w) {
+        width = (int16_t)(tile_w - x);
+    }
+    if (((int32_t)y + height) > tile_h) {
+        height = (int16_t)(tile_h - y);
+    }
+    if ((width <= 0) || (height <= 0)) {
+        return;
+    }
+
+    tRegion.tLocation.iX = x;
+    tRegion.tLocation.iY = y;
+    tRegion.tSize.iWidth = width;
+    tRegion.tSize.iHeight = height;
+
+    arm_2d_rgb16_fill_colour(ptTile, &tRegion, colour);
+    arm2d_wait();
+}
 
 static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t stripe_y,
@@ -49,44 +109,196 @@ static void arm2d_fill_global(arm_2d_tile_t *ptTile,
                               uint16_t width,
                               uint16_t height,
                               uint16_t colour)
-{ }
+{
+    uint32_t stripe_bottom;
+    uint32_t rect_bottom;
+    uint32_t rect_right;
+    uint32_t tile_w;
+    uint32_t start_y;
+    uint32_t end_y;
+
+    if ((ptTile == NULL) || (stripe_h == 0U) || (width == 0U) || (height == 0U)) {
+        return;
+    }
+
+    stripe_bottom = (uint32_t)stripe_y + stripe_h;
+    rect_bottom = (uint32_t)y + height;
+    if ((rect_bottom <= stripe_y) || ((uint32_t)y >= stripe_bottom)) {
+        return;
+    }
+
+    tile_w = (uint32_t)ptTile->tRegion.tSize.iWidth;
+    rect_right = (uint32_t)x + width;
+    if (((uint32_t)x >= tile_w) || (rect_right == (uint32_t)x)) {
+        return;
+    }
+    if (rect_right > tile_w) {
+        rect_right = tile_w;
+    }
+
+    start_y = ((uint32_t)y > (uint32_t)stripe_y) ? (uint32_t)y : (uint32_t)stripe_y;
+    end_y = (rect_bottom < stripe_bottom) ? rect_bottom : stripe_bottom;
+    if ((end_y <= start_y) || (rect_right <= (uint32_t)x)) {
+        return;
+    }
+
+    arm2d_fill_local(ptTile,
+                     (int16_t)x,
+                     (int16_t)(start_y - stripe_y),
+                     (int16_t)(rect_right - x),
+                     (int16_t)(end_y - start_y),
+                     colour);
+}
 
 static void arm2d_render_stripe(uint16_t y, uint16_t stripe_h, uint16_t width, uint16_t height)
-{ }
+{
+    arm_2d_tile_t tTile;
+    uint16_t card_w;
+    uint16_t accent_x;
+    uint16_t foot_y;
+
+    if ((width == 0U) || (stripe_h == 0U)) {
+        return;
+    }
+
+    card_w = (width > 24U) ? (uint16_t)(width - 24U) : width;
+    accent_x = (width > 26U) ? (uint16_t)(width - 26U) : 0U;
+    foot_y = (height > 34U) ? (uint16_t)(height - 34U) : 0U;
+
+    arm2d_tile_bind(&tTile, width, stripe_h);
+    arm2d_fill_local(&tTile, 0, 0, (int16_t)width, (int16_t)stripe_h, D601_C_BG);
+    arm2d_fill_global(&tTile, y, stripe_h, 0U, 0U, width, 64U, D601_C_BANNER);
+    arm2d_fill_global(&tTile, y, stripe_h, 12U, 84U, card_w, 76U, D601_C_CARD);
+    arm2d_fill_global(&tTile, y, stripe_h, 12U, 176U, card_w, 52U, D601_C_PANEL);
+    arm2d_fill_global(&tTile, y, stripe_h, 0U, foot_y, width, 34U, D601_C_FOOT);
+    arm2d_fill_global(&tTile, y, stripe_h, 20U, 72U, card_w, 4U, D601_C_CYAN);
+    arm2d_fill_global(&tTile, y, stripe_h, 22U, 150U, 78U, 6U, D601_C_AMBER);
+    arm2d_fill_global(&tTile, y, stripe_h, 110U, 150U, 42U, 6U, D601_C_GREEN);
+    arm2d_fill_global(&tTile, y, stripe_h, 162U, 150U, 38U, 6U, D601_C_ORANGE);
+    arm2d_fill_global(&tTile, y, stripe_h, accent_x, 92U, 6U, 58U, D601_C_CYAN);
+    arm2d_fill_global(&tTile, y, stripe_h, 18U, 234U, card_w, 2U, D601_C_GREEN);
+
+    d601_lcd_draw_bitmap(0U, y, width, stripe_h, &s_pfb[0][0]);
+}
 
 static void arm2d_fps_text(char *text, uint32_t fps)
-{ }
+{
+    char digits[10];
+    uint8_t count;
+    uint8_t i;
+    uint32_t value;
+
+    if (text == NULL) {
+        return;
+    }
+
+    text[0] = "F"[0];
+    text[1] = "P"[0];
+    text[2] = "S"[0];
+    text[3] = ":"[0];
+
+    value = (fps > 9999U) ? 9999U : fps;
+    count = 0U;
+    do {
+        digits[count] = (char)((uint8_t)"0"[0] + (uint8_t)(value % 10U));
+        ++count;
+        value /= 10U;
+    } while ((value != 0U) && (count < sizeof(digits)));
+
+    for (i = 0U; i < count; ++i) {
+        text[4U + i] = digits[(uint8_t)(count - 1U - i)];
+    }
+    text[4U + count] = 0;
+}
 
 static void arm2d_draw_fps(uint16_t height)
-{ }
+{
+    char text[12];
+    uint32_t now;
+    uint32_t elapsed;
+
+    now = HAL_GetTick();
+    if (s_fps_window_ms == 0U) {
+        s_fps_window_ms = now;
+    }
+
+    elapsed = now - s_fps_window_ms;
+    if (elapsed >= 1000U) {
+        s_fps_value = (s_fps_frame_count * 1000U) / elapsed;
+        s_fps_frame_count = 0U;
+        s_fps_window_ms = now;
+    }
+
+    arm2d_fps_text(text, s_fps_value);
+    if (height > 28U) {
+        d601_lcd_show_string(12U,
+                             (uint16_t)(height - 26U),
+                             text,
+                             D601_C_GREEN,
+                             D601_C_FOOT,
+                             2U);
+    }
+}
 
 void d601_arm2d_demo_show(void)
-{ }
+{
+    uint16_t width;
+    uint16_t height;
+    uint16_t y;
+
+    if (!s_arm2d_ready) {
+        arm_2d_init();
+        s_arm2d_ready = 1U;
+        s_fps_window_ms = HAL_GetTick();
+        s_last_show_ms = s_fps_window_ms;
+    }
 
     width = d601_lcd_get_width();
     height = d601_lcd_get_height();
     if (width > D601_ARM2D_PFB_WIDTH) {
         width = D601_ARM2D_PFB_WIDTH;
     }
+    if ((width == 0U) || (height == 0U)) {
+        return;
+    }
 
-    for (y = 0; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
-        uint16_t stripe_h = D601_ARM2D_PFB_LINES;
+    for (y = 0U; y < height; y = (uint16_t)(y + D601_ARM2D_PFB_LINES)) {
+        uint16_t stripe_h;
+
+        stripe_h = D601_ARM2D_PFB_LINES;
         if ((uint32_t)y + stripe_h > height) {
             stripe_h = (uint16_t)(height - y);
         }
         arm2d_render_stripe(y, stripe_h, width, height);
     }
 
-    d601_lcd_show_string(20, 22, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3);
-    d601_lcd_show_string(25, 102, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 128, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2);
-    d601_lcd_show_string(25, 198, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2);
+    if (height > 60U) {
+        d601_lcd_show_string(20U, 22U, "ARM-2D", D601_LCD_WHITE, D601_C_BANNER, 3U);
+    }
+    if (height > 150U) {
+        d601_lcd_show_string(25U, 102U, "RGB565 PFB", D601_LCD_YELLOW, D601_C_CARD, 2U);
+        d601_lcd_show_string(25U, 128U, "D601 F103", D601_LCD_WHITE, D601_C_CARD, 2U);
+    }
+    if (height > 220U) {
+        d601_lcd_show_string(25U, 198U, "BASIC DEMO", D601_LCD_WHITE, D601_C_PANEL, 2U);
+    }
     arm2d_draw_fps(height);
 }
 
 void d601_arm2d_demo_task(void)
-{ }
+{
+    uint32_t now;
 
-    d601_arm2d_demo_show();
-    ++s_fps_frame_count;
+    if (!s_arm2d_ready) {
+        d601_arm2d_demo_show();
+        ++s_fps_frame_count;
+        return;
+    }
+
+    now = HAL_GetTick();
+    if ((now - s_last_show_ms) >= D601_ARM2D_REFRESH_MS) {
+        s_last_show_ms = now;
+        d601_arm2d_demo_show();
+        ++s_fps_frame_count;
+    }
 }
diff --git a/projects/01_baseline/User/main.c b/projects/01_baseline/User/main.c
index 7467c9a..df8bf9a 100644
--- a/projects/01_baseline/User/main.c
+++ b/projects/01_baseline/User/main.c
@@ -4,6 +4,7 @@
 #include "./BSP/LED/led.h"
 #include "jsonrpc_handler.h"
 #include "d601_lcd.h"
+#include "d601_arm2d_demo.h"
 #include "d601_gpio.h"
 
 int main(void)
@@ -17,11 +18,13 @@ int main(void)
 
     d601_lcd_init();
     d601_gpio_init();
+    d601_arm2d_demo_show();
     printf("[D601-F103] LCD ID=0x%04X\r\n", (unsigned int)d601_lcd_get_id());
     printf("[D601-F103] JSON-RPC ready on USART1 115200 8N1\r\n");
 
     while (1)
     {
         jsonrpc_process();
+        d601_arm2d_demo_task();
     }
 }
```
