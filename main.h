#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct specifier - Structure to store a conversion specifier.
 * @character: The conversion specifier character (e.g., 'c', 's', 'd', etc.).
 * @function: Pointer to the corresponding function to handle the specifier.
 */
typedef struct specifier
{
	char *character;
	void (*function)(va_list args, int *count);
} specifier;

int _printf(const char *format, ...);
int _check_specifier(char c, va_list args, int *count);
int _putchar(char c);
int _strlen(char *str);
void _print_char(va_list args, int *count);
void _print_string(va_list args, int *count);
void _print_int(va_list args, int *count);
void _print_uint(va_list args, int *count);
void _print_number(unsigned int n, int *count);
void _print_bin(va_list args, int *count);
void _print_binum(unsigned int n, int *count);
void _print_oct(va_list args, int *count);
void _get_oct(unsigned int n, int *count);
void _print_hex_upper(va_list args, int *count);
void _print_hex_lower(va_list args, int *count);
void _print_hex(unsigned int n, int *count, int flag);

#endif
