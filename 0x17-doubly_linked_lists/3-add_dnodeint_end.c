#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: pointer pointing to the head of dlistint_t list.
 * @n: integer value.
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_l;
	dlistint_t *last_l;

	if (head == NULL)
		return (NULL);

	new_l = malloc(sizeof(dlistint_t));
	if (new_l == NULL)
		return (NULL);

	new_l->n = n;
	new_l->next = NULL;

	if (*head == NULL)
	{
		new_l->prev = NULL;
		*head = new_l;
		return (new_l);
	}

	last_l = *head;
	while (last_l->next != NULL)
		last_l = last_l->next;

	last_l->next = new_l;
	new_l->prev = last_l;

	return (new_l);
}
