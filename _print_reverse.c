#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: Address of string to reverse
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

