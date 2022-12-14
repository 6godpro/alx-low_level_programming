#include "shell.h"


char **clear(char **args)
{
	char *line;
	size_t n = 0;
	ssize_t line_len;

	line_len = getline(&line, &n, stdin);
	if (line_len == -1)
	{
		perror("read failed");
		free(line);
		return (NULL);
	}
	args = tok_arr(line, " ");

	return (args);
}
