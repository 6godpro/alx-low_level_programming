#include "lists.h"
#include <stdio.h>

/**
 * first - prints a string before the main method executes.
 * @str: string to be printed.
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
