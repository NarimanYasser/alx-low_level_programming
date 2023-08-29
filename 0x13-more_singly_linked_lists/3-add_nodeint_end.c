#include "lists.h"

/**
 * add_nodeint_end - The adds a node of a list.
 *
 * @head: The pointer of a list.
 *
 * @n: The value of the nodes.
 *
 * Return: The size of the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head = (listint_t *) malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_head)
	return (NULL);

	new_head->n = n;
	new_head->next = NULL;
	if (*head == NULL)
		*head = new_head;
	else
	{
		node = *head;
	while (node->next)
		node = node->next;
	node->next = new_head;
	}
	return (new_head);
}
