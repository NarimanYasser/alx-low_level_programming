#include "lists.h"

/**
 * add_nodeint - The adds a node of a list.
 *
 * @head: The pointer of a list.
 *
 * @n: The value of the nodes.
 *
 * Return: The size of the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = (listint_t *) malloc(sizeof(listint_t));

	if (!head || !new_head)
	return (NULL);

	new_head->n = n;
	new_head->next = (*head);
	(*head) = new_head;
	return (new_head);
}
