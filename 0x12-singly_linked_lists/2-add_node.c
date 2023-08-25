#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  add_node - The beginning of a list_t list.
 *
 *  @head: pointer of linked list.
 *
 *  @str: New string
 *
 *  Ruturn: The address of the new element, or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = _strlen(new_head->str);
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
