#include "main.h"

/**
 * _length_specifier - Process and handle length specifiers.
 *
 * @c: The conversion specifier character to process.
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: 1 (success) if the conversion specifier is processed successfully,
 *         -1 (failure) if there was an error processing the specifier.
 */
int _length_specifier(const char *c, va_list args, int *count)
{
	int i;

	specifier specifier_list[] = {
		{"ld", _print_int}, {"li", _print_int},
		{"lu", _print_uint}, {"lo", _print_long_oct},
		{"lx", _print_hex_lower}, {"lX", _print_hex_upper},
		{"hd", _print_short_int}, {"hi", _print_short_int},
		{"hu", _print_short_uint}, {"ho", _print_short_oct},
		{"hx", _print_short_hex_lower}, {"hX", _print_short_hex_upper},
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
	_putchar(c[1]);
	(*count) += 2;

	return (0);
}
