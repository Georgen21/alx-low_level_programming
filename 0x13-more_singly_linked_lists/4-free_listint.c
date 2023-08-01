#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: list of listint_t to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *first;

	while (head)
	{
		first = head->next;
		free(head);
		head = first;
	}
}
