#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: The address of the located node.
 *	   If the node does not exist - NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
