#include "main.h"

/**
 * print_diagonal - draws diagonal line on
 * the terminal
 * @n: no. of times '\' is to be printed
 */

void print_diagonal(int n)
{
	int i, space;

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (i < (n - 1))
			_putchar('\n');

	}
	_putchar('\n');
}
