#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the list.
 * @idx: The position at which to insert the new node.
 * @n: The value to be assigned to the new node.
 *
 * Return: A pointer to the new node if successful.
 *	   Otherwise, NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newNode;
	unsigned int i;

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	if (tmp == *h)
		return (add_dnodeint(h, n));

	if (tmp == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = tmp->prev;
	newNode->next = tmp;
	tmp->prev->next = newNode;
	tmp->prev = newNode;

	return (newNode);
}
