#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: points to the first element on the list
 * @index: node index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first = *head;
	listint_t *newest = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(first);
		return (1);
	}

	while (j < index - 1)
	{
		if (!first || !(first->next))
			return (-1);
		first = first->next;
		j++;
	}

	newest = first->next;
	first->next = newest->next;
	free(newest);
	return (1);
}
