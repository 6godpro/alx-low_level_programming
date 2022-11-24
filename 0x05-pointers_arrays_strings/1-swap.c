#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
