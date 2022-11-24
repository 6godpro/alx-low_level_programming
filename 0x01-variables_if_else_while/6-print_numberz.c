#include <stdio.h>

/**
 * main - entry point
 * Description: This code prints out the digit of base 10 using
 * putchar function
 * Return: 0 for success
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
