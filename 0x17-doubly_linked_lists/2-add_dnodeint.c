#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *		  of a dlistint_t list.
 * @head: Head pointer to a dlistint_t list.
 * @n: Value to assign to new node.
 *
 * Return: Pointer to a head of a newly created list.
 *	   O/w: NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
