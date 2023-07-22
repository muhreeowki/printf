#include "main.h"


void _check_specifier (char c, int *count, va_list args)
{
	char *str;
	int n, num;

	n = *count;

	switch (c)
	{
		case '%':
			_putchar('%');
			n++;
			break;
		case 'c':
			_putchar(va_arg(args, int));
			n++;
			break;
		case 's':
			str = va_arg(args, char *);
			_puts(str);
			n += _strlen(str);
			break;
		case 'd' || 'i':
			num = va_arg(args, int);
			_printnum(num);
			n += _strlen(str);
			break;
	}

	*count = n;
}
