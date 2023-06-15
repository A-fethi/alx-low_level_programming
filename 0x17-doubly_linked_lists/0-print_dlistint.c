#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the doubly linked list's head
 * Return: the number of nodes
 */

size_t	print_dlistint(const dlistint_t *h)
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
