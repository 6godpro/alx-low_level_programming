#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: variable to be checked
 * Return: 1 for positive , -1 for negative, 0 for zero value
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else
	{
		_putchar('0');

		return (0);
	}

}
