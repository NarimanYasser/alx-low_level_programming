#include "lists.h"
/**
 *_strlen - the return of the length of a string.
 * @str: the string of the length to check.
 * Return: the length of a string.
 */

int _strlen(char *str)
{
	int nodes = 0;

	if (!str)
		return (0);
	while (*str++)
		nodes++;
	return (nodes);
}

/**
 * print_list - The elements of list_t list.
 *
 *  @h: pointer to the head nodes.
 *
 *  Return: The number of nodes.
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
