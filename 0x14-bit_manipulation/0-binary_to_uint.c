#include "main.h"

/**
 * pwr - finds the exponent of a number.
 * @n: Number to be computed.
 * @i: Index to reach.
 * Return: The exponent of the number.
 *	   n - if the index is 1.
 *	   1 - if the index is 0.
 */
int pwr(int n, int i)
{
	int x = 1;

	if (i == 0)
		return (1);
	if (i == 1)
		return (n);
	while (i > 0)
	{
		x *= n;
		i--;
	}
	return (x);
}

/**
 * rec_bin - Find the integer equivalent
 *	     of a string of 0s & 1s.
 * @b: String to be evaluated.
 * @i: Power index.
 * @k: String index.
 * Return: Integer equivalent of binary string.
 */
unsigned int rec_bin(const char *b, int i, int k)
{
	unsigned int n, x;

	if (b[k] == '\0')
		return (0);

	i--;
	n = pwr(2, i);
	x = (b[k] - '0') * n;
	k++;

	return (x + rec_bin(b, i, k));
}
/**
 * binary_to_uint - convert binary string
 *		    to unsigned integer.
 * @b: string to be evaluated.
 * Return: The integer equivalent.
 *	   0 - if the string contains any
 *	   character other than 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, k = 0;
	unsigned int n;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	n = rec_bin(b, i, k);

	return (n);
}
