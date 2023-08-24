#include "lists.h"

/**
 *  print_list - The elements of list_t list.
 *
 *  @h: pointer to the head nodes.
 *
 *  Return: The number of nodes.
 *
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
