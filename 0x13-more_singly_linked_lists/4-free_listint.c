#include "lists.h"

/**
 * free_listint - the function that frees a list_t list.
 *
 * @head: the pointer.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
