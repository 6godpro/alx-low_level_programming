#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - program entry point
 * Description: prints the first 98 fibonacci
 *		numbers.
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 92; count++)
	{
		sum = fib1 + fib2;

		printf("%lu, ", sum);
		fib1 = fib2, fib2 = sum;
	}
	fib1_half1 = fib1 / LARGEST;
	fib1_half2 = fib1 % LARGEST;
	fib2_half1 = fib2 / LARGEST;
	fib2_half2 = fib2 % LARGEST;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (half2 > (LARGEST - 1))
		{
			half1++;
			half2 %= LARGEST;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
