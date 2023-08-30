#include "lists.h"

/**
 * reverse_listint - The function that reverses .
 *
 * @head: The pointer.
 *
 * Return: Pointer to the head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next_node = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (*node != NULL)
	{
		next_node = node->next;
		node->next = *head;
		*head = node;
		node = next_node;
	}
	return (*head);
}
