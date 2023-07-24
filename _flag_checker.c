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
		{" d", _print_space},
		{" i", _print_space},
		{"+d", _print_sint},
		{"+i", _print_sint},
		{"#o", octal_hash},
		{"#x", lowerx_hash},
		{"#X", upperx_hash},
		{NULL, NULL}
	};

	/* checking for '+ ' or ' +' */
	if ((c[0] == ' ' || c[1] == ' ' ) && (c[0] == '+' || c[1] == '+') && (c[2] == 'd' || c[2] == 'i'))
	{
			_print_sint(args, count);
			return (2);
	}

	if (c[0] == ' ' && c[1] == '%')
	{
			_putchar('%');
			(*count)++;
			return (1);
	}

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
