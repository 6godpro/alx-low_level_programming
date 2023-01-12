#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 *		  of a dlistint_t list.
 * @head: Head pointer to a dlistint_t list.
 * @n: Value to assign to new node.
 *
 * Return: Pointer to a head of a newly created list.
 *	   O/w: NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (tmp)
	{
		while (tmp->next)
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	*head = new;
	new->prev = NULL;

	return (new);
}
