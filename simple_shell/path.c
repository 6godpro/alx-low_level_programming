#include "shell.h"


dir_t *add_node_end(dir_t **head, char *dir)
{
	dir_t *new_node = malloc(sizeof(dir_t));
	dir_t *last;

	if (!new_node)
		return (NULL);
	new_node->dir = dir;
	new_node->next = NULL;
	if (*head)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}


void free_list(dir_t *head)
{
	dir_t *next;

	while (head)
	{
		next = head->next;
		free(head->dir);
		free(head);
		head = next;
	}
}


dir_t *get_path(char *path)
{
	int index;
	char **dirs;
	dir_t *head = NULL;
	char *copy;

	copy = malloc(strlen(path) + 1);

	if (!copy)
		return (NULL);

	strcpy(copy, path);
	dirs = tok_arr(copy, ":");

	if (!dirs)
	{
		free(copy);
		return (NULL);
	}
	for (index = 0; dirs[index]; index++)
	{
		if (add_node_end(&head, dirs[index]) == NULL)
		{
			free(copy);
			free(dirs);
			free_list(head);
			return (NULL);
		}
	}
	free(copy);
	free(dirs);
	return (head);
}
