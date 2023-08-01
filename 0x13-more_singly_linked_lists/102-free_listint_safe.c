#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: poiter to the first node on the list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int differ;
	listint_t *first;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differ = *h - (*h)->next;
		if (differ > 0)
		{
			first = (*h)->next;
			free(*h);
			*h = first;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;
	return (length);
}
