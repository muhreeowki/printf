#include "main.h"

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
			if (str[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				(*count)++;
				break;
			}
		}
	}
}
