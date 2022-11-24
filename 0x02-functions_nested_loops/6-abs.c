#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @n: variable to be checked
 * Return: 0 for success
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
