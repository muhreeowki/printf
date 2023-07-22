#include "main.h"

/**
 * _check_specifier - Process and handle a conversion specifier.
 *
 * This function processes a conversion specifier ('c', 's', 'd', 'i', or 'b')
 * and performs appropriate actions based on the specifier.
 *
 * @c: The conversion specifier character to process.
 * @count: Pointer to the count of characters printed so far.
 * @args: Variable arguments list containing additional arguments.
 *
 * Return: 0 (success) -1 (failure)
 */

int _check_specifier (char c, int *count, va_list args)
{
	char *str;
	int num;

	switch (c)
	{
		case '%':
			_putchar('%');
			(*count)++;
			break;
		case 'c':
			_putchar(va_arg(args, int));
			(*count)++;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL || *str == '\0')
				str = "(null)";
			_puts(str);
			(*count) += _strlen(str);
			break;
		case 'd': 
		case 'i':
			num = va_arg(args, int);
			_putint(num, count);
			break;
		case 'b':
			num = va_arg(args, unsigned int);
			_putbin(num, count);
			break;
		case 'u':
			num = va_arg(args, unsigned int);
			_putuint(num, count);
			break;
		case 'o':
			num = va_arg(args, unsigned int);
			_putoct(num, count);
			break;
		case 'x':
			num = va_arg(args, unsigned int);
			_puthex(num, count, 0);
			break;
		case 'X':
			num = va_arg(args, unsigned int);
			_puthex(num, count, 1);
			break;
		default:
			_putchar('%');
			count++;
			_putchar(c);
			count++;
			break;
	}

	return (0);
}
