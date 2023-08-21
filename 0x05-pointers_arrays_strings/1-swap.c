#include "main.h"
/**
 * swap_int - swaps 2 integers
 *
 * @a: first pointer variable
 *
 * @b: second integer variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
