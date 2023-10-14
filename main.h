#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>
#define _MAIN_H
#ifndef _MAIN_H
#define BUFF_SIZE 1024
int _printf(const char *format, ...);
int putchr(char z);
int _puts(char *string);
int printBinary(unsigned int num);
char *print_int(int n);
int handle_format(const char *format, va_list args);
#endif
