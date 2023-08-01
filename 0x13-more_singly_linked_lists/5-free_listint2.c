#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *first;

	if (head == NULL)
		return;

	while (*head)
	{
		first = (*head)->next;
		free(*head);
		*head = first;
	}

	*head = NULL;
}
