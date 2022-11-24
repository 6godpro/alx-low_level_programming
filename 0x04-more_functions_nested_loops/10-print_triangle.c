#include "main.h"

/**
 * print_triangle - prints a triangle, followed
 *		by a new line.
 * @size: base size of triangle to be printed.
 */

void print_triangle(int size)
{
	int col, space, hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (col = 0; col < size; col++)
		{
			for (space = col; space < (size - 1); space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash <= col; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
