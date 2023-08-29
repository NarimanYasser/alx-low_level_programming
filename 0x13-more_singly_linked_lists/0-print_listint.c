#include "lists.h"

/**
 * print_listint - The prints all the elements of a list.
 * @h: The pointer of a list.
 *
 * Return: The size of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
