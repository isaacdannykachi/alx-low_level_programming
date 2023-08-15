#include "main.h"
/**
 * print_alphabet - origin point
 *
 * Description - Prints all letters of the alphabet in lowercase
 *
 * Return: (0) (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

