#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer pointing to the nth node of the list.
 * @index: index of the node, starting from 0.
 * Return: return NULL, if node does not exist or nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL && n < index)
	{
		head = head->next;
		n++;
	}

	if (n == index)
		return (head);

	return (NULL);
}
