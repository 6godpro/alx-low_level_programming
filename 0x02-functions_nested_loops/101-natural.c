#include <stdio.h>

/**
 * main - program entry point
 * Description: C program that computes and
 * prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by
 * a new line.
 * Return: 0 for success
 */

int main(void)
{
	int i, n = 0;

	for (i = 1023; i > 0; i--)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);

	return (0);
}
