#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - the find loop
 *
 * @head: the pointer.
 *
 * Return: the address.
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL)
		return (NULL);
	for (b = head->next; b != b->next)
	{
		if (b == b->next)
			return (b);
		for (a = head; a != b; a = a->next)
			if (a == b->next)
				return (b->next);
	}

	return (NULL);
}
