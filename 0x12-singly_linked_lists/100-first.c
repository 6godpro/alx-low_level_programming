#include <stdio.h>

/**
 * first - prints a string before the main method executes.
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
