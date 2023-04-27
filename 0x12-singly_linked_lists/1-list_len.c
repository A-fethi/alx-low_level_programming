#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the list
 * Return: number of elements
 */

size_t	list_len(const list_t *h)
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
