#include <stdio.h>
/**
 * _strlen - Calculates the length of the string
 *
 * @str: the string being calculated
 *
 * Return: the length of @str
 */
size_t _strlen(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
