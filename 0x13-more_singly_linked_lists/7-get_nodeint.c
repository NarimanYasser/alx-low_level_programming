#include "lists.h"

/**
 * get_nodeint_at_index - The function return of the node.
 * @head: The pointer.
 * @index: This is my index of the node.
 * Return: the return to the pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}
	return (head);
}
