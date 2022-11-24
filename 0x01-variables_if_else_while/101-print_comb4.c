#include <stdio.h>

/**
 * main - program entry point
 * Description: This program prints combination of three values
 * excluding the doubles
 * Return: 0 for success and non zero for error
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = (x + 1); y <= 8; y++)
		{
			for (z = (y + 1); z <= 9; z++)
			{
				if (x != y && y != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
				}
				if (x == 7 && z == 9)
				break;
				if (x != y || x != z)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
