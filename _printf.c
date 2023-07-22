#include "main.h"

int _printf(const char *format, ...)
{
	int i, j, count;
	va_list args;

	va_start(args, format);

	i = j = count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					count++;
					break;

				case 'c':
					_putchar(va_arg(args, int));
					count++;
					i++;
					break;

				case 's':
					_puts(va_arg(args, char *));
					i++;
					break;
			}
		}

		else
		{
			_putchar(format[i]);
			count++;
		}

		i++;
	}
	va_end(args);

	return (i);
}
