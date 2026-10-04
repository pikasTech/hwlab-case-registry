#pragma once
#include <stdint.h>
#define LCD_WIDTH 640u
#define LCD_HEIGHT 480u
#define LCD_STRIDE_BYTES (LCD_WIDTH * sizeof(uint16_t))
void board_init(void);
void board_tick(uint32_t milliseconds);
void board_flush(const uint16_t *pixels, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2);
void board_input_read(int32_t *x, int32_t *y, uint8_t *pressed);
void board_draw_baseline_primitives(void);
void board_uart_write(const char *text);
