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
	int i, count, printed_chars;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = printed_chars = count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (_check_specifier(format[i + 1],  args, &count) == -1)
				return (-1);
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
