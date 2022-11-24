#include "main.h"

/**
 * _strlen - computes length of a string
 * @s: string
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
