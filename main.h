#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);
int _strlen(char *str);
void _check_specifier (char c, int *count, va_list args);
void _putbin(unsigned int n, int *count);
void _putoct(unsigned int n, int *count);
void _putint(int n, int *count);
void _putuint(unsigned int n, int *count);
void _puthex(unsigned int n, int *count, int flag);

#endif
