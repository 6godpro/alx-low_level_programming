#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints the values of the
 * hexadecimal numbers from 0-f
 * Return: 0 for success
 */

int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
