#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a
 *		  dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: A pointer to the new node if successful.
 *	   Otherwise, NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;
	if (*head)
		(*head)->prev = newNode;


	return (newNode);
}
