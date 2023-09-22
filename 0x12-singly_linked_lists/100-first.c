#include <stdio.h>
#include "lists.h"
void initial_print(void) __attribute__((constructor));
/**
 * initial_print - function
 * Return: Nothing
 */
void initial_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

