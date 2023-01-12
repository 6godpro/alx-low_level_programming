#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Head pointer to the list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
