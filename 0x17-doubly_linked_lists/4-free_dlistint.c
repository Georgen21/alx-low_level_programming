#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_c;

	while (head != NULL)
	{
		node_c = head;
		head = head->next;
		free(node_c);
	}
}
