#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: list to be freed.
 *
 * Return: void.
 */
void free_list(list_t *head)
{

	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
