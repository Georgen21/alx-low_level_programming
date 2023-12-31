#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the first node in the linked list.
 * @index:  index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *first = head;

	while (first && n < index)
	{
		first = first->next;
		n++;
	}

	return (first ? first : NULL);
}
