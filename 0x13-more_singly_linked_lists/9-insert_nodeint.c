#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer pointing the first node in the list.
 * @idx: index of the list where the new node should be added.
 * @n: data to input new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *newnode;
	listint_t *first = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (index = 0; first && index < idx; index++)
	{
		if (index == idx - 1)
		{
			newnode->next = first->next;
			first->next = newnode;
			return (newnode);
		}
		else
			first = first->next;
	}

	return (NULL);
}
