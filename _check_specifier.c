#include "main.h"


void _check_specifier (char c, int *count, va_list args)
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
			_puts(str);
			(*count) += _strlen(str);
			break;
		case 'd': 
		case 'i':
			num = va_arg(args, int);
			_putint(num);
			(*count) += _intlen(num);
			break;
		case 'b':
			num = va_arg(args, unsigned int);
			_putbin(num, count);
			break;
	}
}
