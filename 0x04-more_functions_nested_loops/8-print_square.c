#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: integer variable to determine size of square.
 */

void print_square(int size)
{
	int col, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
