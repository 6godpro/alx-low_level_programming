#include <stdio.h>

/**
 * main - program entry point
 * Description: C program that prints the first 50 Fibonacci numbers
 *		starting with 1 and 2.
 * Return: 0 for success.
 */

int main(void)
{
	int count = 0;
	long x, y, z;

	x = 0;
	y = 1;

	while (count <= 49)
	{
		z = x + y;

		printf("%li", z);

		x = y;
		y = z;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

		count++;
	}
	return (0);
}
