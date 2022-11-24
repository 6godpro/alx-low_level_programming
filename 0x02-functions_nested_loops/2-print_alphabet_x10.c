#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
 *			followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)

			_putchar(alpha);

		_putchar('\n');

		i++;
	}
}
