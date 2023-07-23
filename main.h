#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct specifier 
{
	char *character;
	void (*function)(va_list args, int *count);
} specifier;

int _printf(const char *format, ...);
int _check_specifier (char c, va_list args, int *count); /* working */
int _putchar(char c); /* working */
int _strlen(char *str); /* not in use */
void _print_char(va_list args, int *count); /* working */
void _print_string(va_list args, int *count); /* working */
void _print_int(va_list args, int *count); /* working */
void _print_uint(va_list args, int *count); /* working */
void _print_number(unsigned int n, int *count); /* working */
void _print_bin(va_list args, int *count); /* working */
void _print_binum(unsigned int n, int *count); /* working */
void _print_oct(va_list args, int *count); 
void _get_oct(unsigned int n, int *count);
void _print_hex_upper(va_list args, int *count); /* working */
void _print_hex_lower(va_list args, int *count); /* working */
void _print_hex(unsigned int n, int *count, int flag); /* working */

#endif
