#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: The source string to be appended
 *	to @dest.
 * @dest: A pointer to the string to
 *	be concatenated upon.
 * Return: A pointer to the destination
 *	string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}
