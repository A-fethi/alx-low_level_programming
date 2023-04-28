#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: the list
 * Return: the number of nodes
 */

size_t	print_listint(const listint_t *h)
{
	int	i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
