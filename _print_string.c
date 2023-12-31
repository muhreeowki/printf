#include "main.h"

/**
 * _print_string - Print a string to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_string(va_list args, int *count)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		(*count)++;
	}
}

/**
 * _print_sstring - Print a string to stdout.
 * Prints the hex ascii value of non printable chars
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_sstring(va_list args, int *count)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			(*count) += 2;

			if (str[i] < 16)
			{
				_putchar('0');
				(*count)++;
			}

			_print_hex((unsigned int)str[i], count, 1);
		}

		else
		{
			_putchar(str[i]);
			(*count)++;
		}
	}
}
