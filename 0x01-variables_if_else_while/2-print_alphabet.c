#include <stdio.h>

/**
 * main - entry point
 * Description: This code prints the lower case letters of the
 * English alphabet using putchar() function
 * Return: 0 for success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
