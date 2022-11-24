#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Code prints the English lower case alphabets
 * excluding letter q and e.
 * Return: 0 for succes
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
