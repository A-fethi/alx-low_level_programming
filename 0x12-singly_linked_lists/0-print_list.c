#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: the list
 * Return: the number of nodes
 */

size_t	print_list(const list_t *h)
{
	int	i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
