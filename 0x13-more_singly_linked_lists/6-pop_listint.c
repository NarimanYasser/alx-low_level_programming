#include "lists.h"

/**
 * pop_listint - The deletes and returnes the data.
 * @head: The pointer.
 * Return: Return to the value.
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (!head || !*head)
		return (0);

	new_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_node;
	return (n);
}
