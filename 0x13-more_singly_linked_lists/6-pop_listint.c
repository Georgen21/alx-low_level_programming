#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element on the linked list
 * Return: the head node data (n) or if empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int nodes;

	if (!head || !*head)
		return (0);

	nodes = (*head)->n;
	first = (*head)->next;
	free(*head);
	*head = first;

	return (nodes);
}
