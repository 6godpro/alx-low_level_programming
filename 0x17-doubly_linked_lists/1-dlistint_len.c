#include "lists.h"

/**
 * dlistint_len - Returns the number of elements
 *		  in a linked dlistint_t list.
 * @h: Head pointer to a dlistint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
