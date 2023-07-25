#include "main.h"

/**
 * _print_reverse - prints a string in reverses
 *
 * @args: list of arguments passed in printf
 * @count: number of characters printed so far
 */
void _print_reverse(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	i--;

	for (j = i; j >= 0; j--)
	{
		_putchar(str[j]);
		(*count)++;
	}
}

