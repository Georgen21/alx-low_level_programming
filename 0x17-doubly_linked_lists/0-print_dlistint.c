#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list.
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_c++;
	}

	return (node_c);
}
