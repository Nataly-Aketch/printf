#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int printc(va_list list);
int prints(va_list list);
int printn(va_list list);
#endif
