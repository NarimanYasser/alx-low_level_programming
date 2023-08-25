#include "lists.h"

/**
 * list_len - The elements of list_t list.
 *
 * @h: pointer to the head nodes.
 *
 * Return: The number of nodes.
 *
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
