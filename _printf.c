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
	int i, count, flag;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = flag = count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == 'h' || format[i + 1] == 'l')
			{
				flag = _length_specifier((format + i + 1), args, &count);
				i++;
			}
			else if (format[i + 1] == '+' || format[i + 1] == '#'
					|| format[i + 1] == ' ')
			{
				flag = _flag_checker((format + i + 1),  args, &count);
				i++;
			}
			else
				flag = _check_specifier((format + i + 1), args, &count);
			if (flag == -1)
				return (-1);
			if (flag == 2)
				i++;
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
