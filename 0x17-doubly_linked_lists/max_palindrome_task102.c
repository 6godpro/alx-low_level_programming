#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char *str)
{
	int len = strlen(str);
	int i, end = len;
	for (i = 0; i < len/2; i++)
	{
		end--;
		if (str[i] != str[end])
			return (0);
	}
	return (1);
}

int get_max_palindrome(int n)
{
	int i, j, max = 0;
	int total_size = (n-1)*(n-1);

	char *str = malloc(total_size);
	if (str == NULL)
		return (-1);

	for (i = n/10; i < n; i++)
	{
		for (j = n/10; j < n; j++)
		{
			sprintf(str, "%d", i*j);
			if (is_palindrome(str) && atoi(str) > max)
				max = atoi(str);
		}
	}
	free(str);
	return (max);
}

int main(void)
{
	printf("%d\n", get_max_palindrome(1000));

	return (0);
}
