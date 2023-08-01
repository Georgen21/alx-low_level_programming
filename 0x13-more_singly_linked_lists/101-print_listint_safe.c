#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - number of nodes in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * Return: number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bump, *gone;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	bump = head->next;
	gone = (head->next)->next;

	while (gone)
	{
		if (bump == gone)
		{
			bump = head;
			while (bump != gone)
			{
				nodes++;
				bump = bump->next;
				gone = gone->next;
			}

			bump = bump->next;
			while (bump != gone)
			{
				nodes++;
				bump = bump->next;
			}

			return (nodes);
		}

		bump = bump->next;
		gone = (gone->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the listint_t list.
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
		}

		printf("->[%p]%d\n", (void *)head, head->n);
	}

	return (nodes);
}
