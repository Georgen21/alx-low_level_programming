#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer that find the loop in a linked list.
 * Return: address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *captain = head;
	listint_t *sailor = head;

	if (!head)
		return (NULL);

	while (captain && sailor && sailor->next)
	{
		sailor = sailor->next->next;
		captain = captain->next;
		if (sailor == captain)
		{
			captain = head;
			while (captain != sailor)
			{
				captain = captain->next;
				sailor = sailor->next;
			}
			return (sailor);
		}
	}

	return (NULL);
}
