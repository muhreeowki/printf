#include "main.h"

/**
 * _print_rot13 - prints a rot13'ed string
 *
 * @args: list of arguments passed into printf
 * @count: number of characters printed so far
 */
void _print_rot13(va_list args, int *count)
{
	int i, j;
	char *str = va_arg(args, char *);
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			{
				_putchar(str[i]);
				(*count)++;
				break;
			}

			if (str[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				(*count)++;
				break;
			}
		}
	}
}
