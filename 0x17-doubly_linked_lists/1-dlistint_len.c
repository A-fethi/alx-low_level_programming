#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the doubly linked list's head
 * Return: the number of elements in a doubly linked list
 */

size_t	dlistint_len(const dlistint_t *h)
{
	int	i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
