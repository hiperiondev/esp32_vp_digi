/*
 * Copyright 2026 Emiliano Augusto Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site: https://github.com/hiperiondev/esp32_vp_digi *
 * This is based on other projects:
 *    vp-digi: Piotr Wilkon (https://github.com/sq8vps/vp-digi)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

/* Includes */
#include <errno.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>

#include "vp_digi_options.h"

/* Variables */
extern int __io_putchar(int ch) __attribute__((weak));
extern int __io_getchar(void) __attribute__((weak));

char *__env[1] = { 0 };
char **environ = __env;

/* Functions */
void initialise_monitor_handles() {
}

int _getpid(void) {
    return 1;
}

int _kill(int pid, int sig) {
    (void)pid;
    (void)sig;
    errno = EINVAL;
    return -1;
}

/*
void _exit(int status) {
        _kill(status, -1);
        while (1) {
        } // Make sure we hang here
}
*/

__attribute__((weak)) int _read(int file, char *ptr, int len) {
    (void)file;
    int DataIdx;

    for (DataIdx = 0; DataIdx < len; DataIdx++) {
        *ptr++ = __io_getchar();
    }

    return len;
}

__attribute__((weak)) int _write(int file, char *ptr, int len) {
    (void)file;
    int DataIdx;

    for (DataIdx = 0; DataIdx < len; DataIdx++) {
        __io_putchar(*ptr++);
    }
    return len;
}

int _close(int file) {
    (void)file;
    return -1;
}

int _fstat(int file, struct stat *st) {
    (void)file;
    st->st_mode = S_IFCHR;
    return 0;
}

int _isatty(int file) {
    (void)file;
    return 1;
}

int _lseek(int file, int ptr, int dir) {
    (void)file;
    (void)ptr;
    (void)dir;
    return 0;
}

int _open(char *path, int flags, ...) {
    (void)path;
    (void)flags;
    /* Pretend like we always fail */
    return -1;
}

int _wait(int *status) {
    (void)status;
    errno = ECHILD;
    return -1;
}

int _unlink(char *name) {
    (void)name;
    errno = ENOENT;
    return -1;
}

int _times(struct tms *buf) {
    (void)buf;
    return -1;
}

int _stat(char *file, struct stat *st) {
    (void)file;
    st->st_mode = S_IFCHR;
    return 0;
}

int _link(char *old, char *new) {
    (void)old;
    (void)new;
    errno = EMLINK;
    return -1;
}

int _fork(void) {
    errno = EAGAIN;
    return -1;
}

int _execve(char *name, char **argv, char **env) {
    (void)name;
    (void)argv;
    (void)env;
    errno = ENOMEM;
    return -1;
}
