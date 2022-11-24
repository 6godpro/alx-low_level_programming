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
	list_t *tmp;

	if (head == NULL)
		return;
	else
	{
		while (head != NULL)
		{
			tmp = head;
			free(head->str);
			free(head);
			head = head->next;
			head = tmp;
		}
	}
}
