#include "main.h"

/**
 * print_times_table - function that prints the
 * n times table, starting with 0.
 * @n: variable to be computed
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;

				if (z <= 99)
					_putchar(' ');
				if (z <= 9)
					_putchar(' ');

				if (z <= 99 &&  z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				if (z > 99)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
				}
				_putchar ((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
