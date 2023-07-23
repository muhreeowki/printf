#include "main.h"

/**
 * _check_specifier - Process and handle a conversion specifier.
 *
 * This function processes a conversion specifier ('c', 's', 'd', 'i', or 'b')
 * and performs appropriate actions based on the specifier.
 *
 * @c: The conversion specifier character to process.
 * @args: Variable arguments list containing additional arguments.
 *
 * Return: 1 (success) -1 (failure)
 */

int _check_specifier (char c, va_list args, int *count)
{
	int i;

	specifier specifier_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int},
		{"u", _print_uint},
		{"b", _print_bin},
		{"o", _print_oct},
		{"x", _print_hex_lower},
		{"X", _print_hex_upper},
		{NULL, NULL}
	};

	if (c == '%')
	{
		_putchar('%');
		(*count)++;
		return (1);
	}

	for (i = 0; specifier_list[i].character != NULL; i++)
	{
		if (specifier_list[i].character[0] == c)
		{
			specifier_list[i].function(args, count);
			return (1);
		}
	}

	return (-1);
}
