#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: A pointer to the new node if successful.
 *	   Otherwise, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (tmp == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;

		newNode->prev = tmp;
		tmp->next = newNode;
	}
	return (newNode);
}
