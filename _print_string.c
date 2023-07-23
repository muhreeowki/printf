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
