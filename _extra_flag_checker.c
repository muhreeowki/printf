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

int _extra_checker(const char *c, va_list args, int *count)
{
	int i;

	specifier specifier_list[] = {
		{"+d", _print_sint},
		{"+i", _print_sint},
		{"#o", _print_sint},
		{"#x", _print_sint},
		{"#X", _print_sint},
		{" d", _print_sint},
		{" i", _print_sint},
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
