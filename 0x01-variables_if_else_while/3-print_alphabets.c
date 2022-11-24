#include <stdio.h>

/**
 * main - entry point
 * Description: code prints the lower and uppercase of the
 * English Alphabet respectively followed by a new line
 * Return: 0 for success
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');

	return (0);
}
