#include <stdio.h>

/**
 * main - Entry point
 * Description: prints sizes of various data types
 * Return: Always 0 (success)
 */

int main(void)
{
	long a = sizeof(char);
	long b = sizeof(int);
	long c = sizeof(long int);
	long d = sizeof(long long int);
	long e = sizeof(float);

	printf("Size of a char: %li byte(s)\n", a);
	printf("Size of an int: %li byte(s)\n", b);
	printf("Size of a long int: %li byte(s)\n", c);
	printf("Size of a long long int: %li byte(s)\n", d);
	printf("Size of a float: %li byte(s)\n", e);

	return (0);
}
