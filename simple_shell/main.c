#include "shell.h"


int main(int argc, char *argv[])
{
	size_t n, index;
	char *line = NULL, *cmd;
	int ret_val;

	if (argc != 1)
		return (execute_cmd(argv + 1));

	if (!isatty(STDIN_FILENO))
	{
		argv = clear(argv);
		while (argv)
		{
			execute_cmd(argv);
			argv = NULL;
			argv = clear(argv);
		}
	}
	while (1)
	{
		printf(":) ");
		n = 0;
		if (getline(&line, &n, stdin) == -1)
		{
			perror("read line failed\n");
			return (1);
		}
		argv = tok_arr(line, " ");
		if (!argv)
		{
			perror("tokenization error");
			continue;
		}
		cmd = argv[0];
		ret_val = execute_cmd(argv);
		for (index = 1; argv[index]; index++)
			free(argv[index]);

		free(cmd);
		free(argv);
		free(line);
	}
	return (ret_val);
}
