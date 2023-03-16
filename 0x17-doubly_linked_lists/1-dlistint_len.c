#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	for (; h; h = h->next)
		n++;

	return (n);
}
