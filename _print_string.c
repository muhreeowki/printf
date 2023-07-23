#include "main.h"

/**
 * _puts - writes the string str to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
void _print_string(va_list args, int *count)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	if (*str == '\0')
	{
		(*count) = -1;
		return;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		(*count)++;
	}
}
