#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node of the reversed list.
 * Return: the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *latest = NULL;

	while (*head)
	{
		latest = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = latest;
	}

	*head = last;

	return (*head);
}
