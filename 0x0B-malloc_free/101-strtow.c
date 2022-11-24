#include "main.h"
#include <stdlib.h>

int word_find(char *str);
int word_count(char *str);
char **strtow(char *str);

/**
 * word_find - locates a word in a string
 *		of text.
 * @str: string to be searched.
 * Return: an integer indicating the end
 * of the word.
 */

int word_find(char *str)
{
	int i, found = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		found++;

	return (found);
}

/**
 * word_count - counts the number of words
 *		in a string.
 * @str: string to be checked.
 * Return: an integer indicating the number
 * of words in the string.
 */

int word_count(char *str)
{
	int i = 0, count = 0, len = 0;

	while (str[i++])

		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			i += word_find(str + i);
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: string to be splitted.
 * Return: a pointer to an array of words.
 */

char **strtow(char *str)
{
	char **s;
	int w, i, c = 0, pbuff = 0, word = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	pbuff = word_count(str);
	if (pbuff == 0)
		return (NULL);

	s = malloc((pbuff + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < pbuff; w++)
	{
		while (str[c] == ' ')
			c++;

		word = word_find(str + c);
		s[w] = malloc((word + 1) * sizeof(char));
		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);
			free(s);
			return (NULL);
		}
		for (i = 0; i < word; i++)
			s[w][i] = str[c++];
		s[w][i] = '\0';
	}
	s[w] = NULL;

	return (s);
}
