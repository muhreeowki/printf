#include "main.h"
/**
 * _strlen - Calculate the length of a null-terminated string.
 *
 * @str: The input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
