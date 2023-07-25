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
int _check_specifier(const char *c, va_list args, int *count);
int _flag_checker(const char *c, va_list args, int *count);
int handle_space_plus(const char *c, va_list args, int *count);
int _length_specifier(const char *c, va_list args, int *count);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
void _print_char(va_list args, int *count);
void _print_string(va_list args, int *count);
void _print_sstring(va_list args, int *count);
void _print_reverse(va_list args, int *count);
void _print_rot13(va_list args, int *count);
void _print_int(va_list args, int *count);
void _print_uint(va_list args, int *count);
void _print_sint(va_list args, int *count);
void _print_number(unsigned long int n, int *count);
void _print_bin(va_list args, int *count);
void _print_binum(unsigned int n, int *count);
void _print_oct(va_list args, int *count);
void _get_oct(unsigned long int n, int *count);
void _print_hex_upper(va_list args, int *count);
void _print_hex_lower(va_list args, int *count);
void _print_hex(unsigned long int n, int *count, int flag);
void _print_pointer(va_list args, int *count);
void _print_plus_pointer(va_list args, int *count);
void _print_space_pointer(va_list args, int *count);
void octal_hash(va_list args, int *count);
void lowerx_hash(va_list args, int *count);
void upperx_hash(va_list args, int *count);
void _print_space(va_list args, int *count);
void _print_space_o(va_list args, int *count);
void _print_space_x(va_list args, int *count);
void _print_space_X(va_list args, int *count);
void _print_long_oct(va_list args, int *count);
void _print_long_hex_lower(va_list args, int *count);
void _print_long_hex_upper(va_list args, int *count);
void _print_short_int(va_list args, int *count);
void _print_short_uint(va_list args, int *count);
void _print_short_oct(va_list args, int *count);
void _print_short_hex_lower(va_list args, int *count);
void _print_short_hex_upper(va_list args, int *count);

#endif
