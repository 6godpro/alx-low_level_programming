#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a
 *		  dlistint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
