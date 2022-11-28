#include "lists.h"

/**
 * listint_len - Counts number of elements in
 *		 a linked listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
