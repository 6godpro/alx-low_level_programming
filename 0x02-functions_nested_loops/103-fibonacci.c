#include <stdio.h>

/**
 * main - program entry point
 * Description: program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0 for success and non zero for error.
 */

int main(void)
{
	unsigned long fib_1 = 0, fib_2 = 1, fib_even = 0, fib_tot = 0;

	while (1)
	{
		fib_tot = fib_1 + fib_2;

		if (fib_tot > 4000000)

			break;

		if ((fib_tot % 2) == 0)

			fib_even += fib_tot;

		fib_1 = fib_2;
		fib_2 = fib_tot;

	}
	printf("%lu", fib_even);
	printf("\n");
	return (0);
}
