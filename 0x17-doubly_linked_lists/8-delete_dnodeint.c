#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: Pointer to the head of a dlistint_t list.
 * @index: The index of the node to delete.
 *
 * Return: If it succeeds - 1.
 *         O/w - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	(tmp->prev)->next = tmp->next;

	if (tmp->next)
		(tmp->next)->prev = tmp->prev;

	free(tmp);
	return (1);
}
