#include "lists.h"


/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: A pointer to the nth node if successful.
 *	   Otherwise, NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
