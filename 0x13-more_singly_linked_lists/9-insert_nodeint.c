#include "lists.h"

/**
  * insert_nodeint_at_index - The inserts a new node.
  * @head: The pointer.
  * @idx: The index of the list.
  * @n: The integer.
  * Return: the address of the new node.
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new = (listint_t *) malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new)
	return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		i++;
		node = node->next;
	}
	free(new);
	return (NULL);
}

