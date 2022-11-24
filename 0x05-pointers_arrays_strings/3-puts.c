#include "main.h"

/**
 * _puts - writes the string str and a
 *	trailing newline to stdout.
 * @str: variable containing the string to
 *	to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
