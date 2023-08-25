#include "lists.h"

/**
 * free_list - the function that frees a list_t list.
 * @head: the pointer.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	list_t *nodes, *next_nodes;

	nodes = head;
	while (nodes)
	{
		next_nodes = nodes->next;
		free(nodes->str);
		free(nodes);
		nodes = next_nodes;
	}
}
