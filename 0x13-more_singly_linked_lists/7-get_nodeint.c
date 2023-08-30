#include "lists.h"

/**
 * get_nodeint_at_index - The function return of the node.
 * @head: The pointer.
 * @index: This is my index of the node.
 * Return: the return to the pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int n;

	for
	(
		new_node = head, n = 0;
		new_node && n < index;
		new_node = new_node->next, n++
	)
	return (new_node);
}
