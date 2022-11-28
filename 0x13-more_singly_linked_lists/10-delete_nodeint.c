#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to pointer of the head of the
 *        listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *tmp1;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);

	return (1);
}
