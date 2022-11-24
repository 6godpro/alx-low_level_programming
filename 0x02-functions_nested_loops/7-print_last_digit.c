#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: variable to be checked.
 * Return: returns the last digit of the value
 */

int print_last_digit(int n)
{
	/*variable rem is used to compute the remainder*/

	int rem = (n % 10);

	if (rem < 0)
		rem *= -1;

	_putchar(rem + '0');

	return (rem);
}
