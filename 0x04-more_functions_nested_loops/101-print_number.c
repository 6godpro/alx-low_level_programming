#include "main.h"

/**
 * print_number - function that prints integer
 * @n: variable containing integer to be printed.
 */

void print_number(int n)
{
	unsigned int val = n;

	if (n < 0)
	{
		_putchar('-');
		val = -val;
	}

	if (val / 10)
	{
		print_number(val / 10);
	}

	_putchar((val % 10) + '0');
}
