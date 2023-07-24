#include "main.h"
/**
 * _check_specifier - Process and handle a conversion specifier.
 *
 * This function processes a conversion specifier ('c', 's', 'd', 'i', or 'b')
 * and performs appropriate actions based on the specifier.
 *
 * @c: The conversion specifier character to process.
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: 1 (success) if the conversion specifier is processed successfully,
 *         -1 (failure) if there was an error processing the specifier.
 */

int _flag_checker(const char *c, va_list args, int *count)
{
	int i;

	specifier specifier_list[] = {
		{"+d", _print_sint},
		{"+i", _print_sint},
		{"+o", _print_oct},
		{"+x", _print_hex_lower},
		{"+X", _print_hex_lower},
		{"#d", _print_int},
		{"#i", _print_int},
		{"#o", octal_hash},
		{"#x", lowerx_hash},
		{"#X", upperx_hash},
		{" d", _print_space},
		{" i", _print_space},
		{" o", _print_oct},
		{" x", _print_hex_lower},
		{" X", _print_hex_upper},
		{NULL, NULL}
	};

	for (i = 0; specifier_list[i].character != NULL; i++)
	{
		if (specifier_list[i].character[0] == c[0])
		{
			if (specifier_list[i].character[1] == c[1])
			{
				specifier_list[i].function(args, count);
				return (1);
			}
		}
	}

	_putchar('%');
	_putchar(c[0]);
	_putchar(c[1]);
	(*count) += 3;

	return (0);
}
