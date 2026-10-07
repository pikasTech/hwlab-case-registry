#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>

#include "arm_2d.h"
#include "arm_2d_disp_adapter_0.h"
#include "arm_2d_scene_basics.h"

#define WIDTH 640u
#define HEIGHT 480u
#define FRAMEBUFFER ((volatile uint16_t *)0x61000000u)
#define PL111 ((volatile uint32_t *)0x10020000u)
#define PL011_DR (*(volatile uint32_t *)0x10009000u)
#define PL011_FR (*(volatile uint32_t *)0x10009018u)

uint32_t SystemCoreClock = 1000000u;
static unsigned char scratch_heap[256u * 1024u];
static size_t scratch_used;

static void uart_puts(const char *text) {
    while (*text != '\0') {
        while ((PL011_FR & (1u << 5)) != 0u) {}
        PL011_DR = (uint32_t)*text++;
    }
}

static void pl111_init(void) {
    PL111[0] = 0x3f1f3c00u | ((WIDTH / 16u - 1u) << 2);
    PL111[1] = 0x080b6000u | (HEIGHT - 1u);
    PL111[4] = (uint32_t)FRAMEBUFFER;
    PL111[6] = 0x1921u | (0x6u << 1);
}

void *memset(void *destination, int value, size_t count) {
    unsigned char *output = (unsigned char *)destination;
    while (count-- != 0u) {
        *output++ = (unsigned char)value;
    }
    return destination;
}

void *memcpy(void *destination, const void *source, size_t count) {
    unsigned char *output = (unsigned char *)destination;
    const unsigned char *input = (const unsigned char *)source;
    while (count-- != 0u) {
        *output++ = *input++;
    }
    return destination;
}

void *memmove(void *destination, const void *source, size_t count) {
    unsigned char *output = (unsigned char *)destination;
    const unsigned char *input = (const unsigned char *)source;
    if (output < input) {
        return memcpy(destination, source, count);
    }
    while (count-- != 0u) {
        output[count] = input[count];
    }
    return destination;
}

int memcmp(const void *left, const void *right, size_t count) {
    const unsigned char *a = (const unsigned char *)left;
    const unsigned char *b = (const unsigned char *)right;
    while (count-- != 0u) {
        if (*a != *b) {
            return (int)*a - (int)*b;
        }
        ++a;
        ++b;
    }
    return 0;
}

void *malloc(size_t count) {
    size_t aligned = (count + 7u) & ~(size_t)7u;
    if (scratch_used + aligned > sizeof(scratch_heap)) {
        return NULL;
    }
    void *result = &scratch_heap[scratch_used];
    scratch_used += aligned;
    return result;
}

void free(void *pointer) {
    (void)pointer;
}

static void format_putc(char *buffer, size_t size, size_t *position, char value) {
    if (*position + 1u < size) {
        buffer[*position] = value;
    }
    ++*position;
}

int vsnprintf(char *buffer, size_t size, const char *format, va_list arguments) {
    size_t position = 0u;
    while (*format != '\0') {
        if (*format++ != '%') {
            format_putc(buffer, size, &position, format[-1]);
            continue;
        }
        if (*format == '%') {
            format_putc(buffer, size, &position, *format++);
            continue;
        }
        while (*format >= '0' && *format <= '9') {
            ++format;
        }
        if (*format == 'd' || *format == 'i') {
            int value = va_arg(arguments, int);
            unsigned int magnitude = value < 0 ? (unsigned int)(-value) : (unsigned int)value;
            char digits[12];
            size_t count = 0u;
            if (value < 0) {
                format_putc(buffer, size, &position, '-');
            }
            do {
                digits[count++] = (char)('0' + magnitude % 10u);
                magnitude /= 10u;
            } while (magnitude != 0u);
            while (count != 0u) {
                format_putc(buffer, size, &position, digits[--count]);
            }
            ++format;
            continue;
        }
        if (*format == 's') {
            const char *text = va_arg(arguments, const char *);
            while (*text != '\0') {
                format_putc(buffer, size, &position, *text++);
            }
            ++format;
            continue;
        }
        format_putc(buffer, size, &position, '?');
        if (*format != '\0') {
            ++format;
        }
    }
    if (size != 0u) {
        buffer[position < size ? position : size - 1u] = '\0';
    }
    return (int)position;
}

void __aeabi_memcpy(void *destination, const void *source, size_t count) {
    (void)memcpy(destination, source, count);
}

void __aeabi_memcpy4(void *destination, const void *source, size_t count) {
    (void)memcpy(destination, source, count);
}

void __aeabi_memset(void *destination, size_t count, int value) {
    (void)memset(destination, value, count);
}

void __aeabi_memclr(void *destination, size_t count) {
    (void)memset(destination, 0, count);
}

void __aeabi_memclr4(void *destination, size_t count) {
    (void)memset(destination, 0, count);
}

void __assert_func(const char *file, int line, const char *function, const char *expression) {
    (void)file;
    (void)line;
    (void)function;
    (void)expression;
    uart_puts("Arm-2D assertion failed\r\n");
    for (;;) {}
}

int64_t arm_2d_helper_get_system_timestamp(void) {
    static int64_t timestamp;
    timestamp += 1000;
    return timestamp;
}

uint32_t arm_2d_helper_get_reference_clock_frequency(void) {
    return SystemCoreClock;
}

double fabs(double value) {
    return value < 0.0 ? -value : value;
}

int32_t Disp0_DrawBitmap(int16_t x, int16_t y, int16_t width, int16_t height,
                         const uint8_t *bitmap) {
    const uint16_t *source = (const uint16_t *)bitmap;
    for (int16_t row = 0; row < height; ++row) {
        volatile uint16_t *destination = FRAMEBUFFER + (uint32_t)(y + row) * WIDTH + (uint32_t)x;
        for (int16_t column = 0; column < width; ++column) {
            destination[column] = source[(uint32_t)row * (uint32_t)width + (uint32_t)column];
        }
    }
    return 0;
}

int main(void) {
    static user_scene_basics_t scene;
    uint32_t completed_frames = 0u;

    pl111_init();
    arm_2d_init();
    disp_adapter0_init();
    arm_2d_scene_basics_init(&DISP0_ADAPTER, &scene);

    uart_puts("QEMU-GUI Arm-2D official scene_basics\r\n");
    uart_puts("ARM-software/Arm-2D develop\r\n");
    uart_puts("commit=9439667a9055df47caf948b16a3865bd63820ac6\r\n");

    for (;;) {
        arm_fsm_rt_t result = __disp_adapter0_task();
        if (result == arm_fsm_rt_cpl && ++completed_frames == 120u) {
            uart_puts("Arm-2D scene_basics heartbeat\r\n");
            completed_frames = 0u;
        }
    }
}
