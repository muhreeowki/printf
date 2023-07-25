#include "main.h"
/**
 * _flag_checker - Process and handle a flag specifier.
 *
 * @c: The conversion specifier character to process.
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: 1 (success) if the conversion specifier is processed successfully,
 * -1 (failure) if there was an error processing the specifier.
 */

int _flag_checker(const char *c, va_list args, int *count)
{
	int i;

	specifier specifier_list[] = {
		{" d", _print_space}, {" i", _print_space},
		{"+d", _print_sint}, {"+i", _print_sint},
		{"#o", octal_hash}, {"#x", lowerx_hash},
		{"#X", upperx_hash}, {NULL, NULL}
	};

	if ((c[0] == ' ' || c[1] == ' ') && (c[0] == '+' || c[1] == '+'))
		return (handle_space_plus(c[2], args, count));

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

/**
 * handle_space_plus - this function handles use of 
 * both space and plus flags
 *
 * @c: Character following the flags
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: 1 if c is 'i' or 'd' 
 * 2 otherwise
 */
int handle_space_plus(char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
	{
		_print_sint(args, count);
		return (2);
	}

	_putchar('%');
	_putchar('+');
	_putchar(c);
	(*count) += 3;
	return (2);
}
