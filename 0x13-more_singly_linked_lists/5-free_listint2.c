#include "lists.h"

/**
 * free_listint2 - the function that frees a list_t list.
 *
 * @head: the pointer.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		return;

	new_node = *head;
	while (new_node)
	{
		temp = new_node;
		new_node = new_node->next;
		free(temp);
	}
	*head = NULL;
}
