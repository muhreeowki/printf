#include "main.h"

/**
 * _printf - function to print formated strings to stdout
 *
 * @format: formated string to print
 *
 * Return: number of charachters printed to stdout
 */

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
			_check_specifier(format[i + 1], &count, args);
			i++;

			/*
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					count++;
					i++;
					break;
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					i++;
					break;
				case 's':
					str = va_arg(args, char *);
					_puts(str);
					count += _strlen(str);
					i++;
					break;
			}
			*/
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
