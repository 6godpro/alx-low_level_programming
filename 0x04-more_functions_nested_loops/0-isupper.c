#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: variable to be checked
 * Return: 1 for uppercase, 0 for lowercase
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;

	else
		i = 0;

	return (i);
}
