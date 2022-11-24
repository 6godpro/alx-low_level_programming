#include <stdio.h>

/**
 * main - program entry point
 * Description - This program prints the lower case of
 * the English alphabet backwards.
 * Return: 0 for success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
