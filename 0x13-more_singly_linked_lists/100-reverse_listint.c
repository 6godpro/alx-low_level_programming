#include "lists.h"


listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head)
		*head = (*head)->next;

	tmp = *head;

	return (*head);
}
