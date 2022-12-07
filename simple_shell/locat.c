#include "shell.h"


char *find(char *command)
{
	char *path, *tmp;
	dir_t *dir_path, *copy;
	struct stat sb;

	path = getenv("PATH");
	dir_path = get_path(path);
	copy = dir_path;
	while (dir_path)
	{
		tmp = malloc(strlen(dir_path->dir) + 1 + strlen(command) + 1);
		if (!tmp)
			return (NULL);
		strcpy(tmp, dir_path->dir);
		strcat(tmp, "/");
		strcat(tmp, command);
		if (stat(tmp, &sb) == 0)
		{
			free_list(copy);
			free(command);
			return (tmp);
		}
		dir_path = dir_path->next;
		free(tmp);
	}
	free(command);
	free_list(copy);
	return (NULL);
}
