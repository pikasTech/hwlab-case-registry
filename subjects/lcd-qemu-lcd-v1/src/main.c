#include <stdint.h>
#define WIDTH 640u
#define HEIGHT 480u
#define FRAMEBUFFER ((volatile uint16_t *)0x4c000000u)
#define PL111 ((volatile uint32_t *)0x10020000u)
int main(void) {
    static const uint16_t colors[] = {0xf800u, 0x07e0u, 0x001fu, 0xffffu};
    for (uint32_t y = 0; y < HEIGHT; ++y)
        for (uint32_t x = 0; x < WIDTH; ++x)
            FRAMEBUFFER[y * WIDTH + x] = colors[x / 160u];
    PL111[0] = 0x3f1f3c00u | ((WIDTH / 16u - 1u) << 2);
    PL111[1] = 0x080b6000u | (HEIGHT - 1u);
    PL111[4] = (uint32_t)FRAMEBUFFER;
    PL111[6] = 0x1921u | (0x6u << 1);
    for (;;) __asm__ volatile("wfi");
}
