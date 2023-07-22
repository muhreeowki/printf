#include "main.h"

/**
 * _puthex - Print hexadecimal representation of an unsigned integer.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _puthex(unsigned int n, int *count, int flag)
{
	if (n > 1)
		_puthex(n / 16, count, flag);

	if (n % 16 > 9)
	{
		switch (n % 16)
		{
			case 10:
				if (flag == 1)
					_putchar('A');
				else
					_putchar('a');
				(*count)++;
				break;
			case 11:
				if (flag == 1)
					_putchar('B');
				else
					_putchar('b');
				(*count)++;
				break;
			case 12:
				if (flag == 1)
					_putchar('C');
				else
					_putchar('c');
				(*count)++;
				break;
			case 13:
				if (flag == 1)
					_putchar('D');
				else
					_putchar('d');
				(*count)++;
				break;
			case 14:
				if (flag == 1)
					_putchar('E');
				else
					_putchar('e');
				(*count)++;
				break;
			case 15:
				if (flag == 1)
					_putchar('F');
				else
					_putchar('f');
				(*count)++;
				break;
			default:
				_putchar('0' + n % 16);
		}
	}

	else if (n > 0)
	{
		_putchar('0' + n % 16);
		(*count)++;
	}

}
