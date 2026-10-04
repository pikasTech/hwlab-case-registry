#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdint.h>
void *memcpy(void *dst, const void *src, size_t len) {
    uint8_t *d = dst;
    const uint8_t *s = src;
    for (size_t i = 0; i < len; i++) d[i] = s[i];
    return dst;
}
void *_sbrk(int incr) { extern char _heap_start, _heap_end; static char *p; if (!p) p = &_heap_start; if (p + incr > &_heap_end) { errno = ENOMEM; return (void *)-1; } char *old = p; p += incr; return old; }
int _write(int fd, const void *buf, size_t len) { (void)fd; (void)buf; return (int)len; }
int _close(int fd) { (void)fd; return -1; }
int _fstat(int fd, struct stat *st) { (void)fd; st->st_mode = S_IFCHR; return 0; }
int _isatty(int fd) { (void)fd; return 1; }
int _lseek(int fd, int ptr, int dir) { (void)fd; (void)ptr; (void)dir; return 0; }
int _read(int fd, void *buf, size_t len) { (void)fd; (void)buf; (void)len; return 0; }
void _exit(int status) { (void)status; for (;;) {} }
void _kill(int pid, int sig) { (void)pid; (void)sig; }
int _getpid(void) { return 1; }
