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

	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/*
			if (_check_specifier(format[i + 1], &count, args) == -1)
				return (-1);
			*/
			_check_specifier(format[i + 1], &count, args);
			i++;
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
