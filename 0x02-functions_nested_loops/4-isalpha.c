#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: variable used to check
 *
 * Return: 1 if a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
