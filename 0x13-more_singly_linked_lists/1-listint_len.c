#include "lists.h"

/**
 * listint_len - The prints all the elements of a list.
 * @h: The pointer of a list.
 *
 * Return: The size of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
