#include "lists.h"

/**
 * delete_nodeint_at_index - The delete node.
 *
 * @head: The pointer of the list.
 * @index: The index of the list .
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int i = 0;

	if (!head || !*head)
	return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;
	while (node)
	{
		if (i  == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
