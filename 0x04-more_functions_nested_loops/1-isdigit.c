#include "main.h"

/**
 * _isdigit - function that checks for digits through 0 - 9.
 * @c: variable to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
		i = 1;
	else
		i = 0;

	return (i);

}
