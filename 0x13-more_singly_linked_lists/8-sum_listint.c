#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node on the linked list.
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *first = head;

	while (first)
	{
		sum += first->n;
		first = first->next;
	}

	return (sum);
}
