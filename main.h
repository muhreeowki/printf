#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);
int _strlen(char *str);
void _printnum(int n);
void _check_specifier (char c, int *count, va_list args);

#endif
