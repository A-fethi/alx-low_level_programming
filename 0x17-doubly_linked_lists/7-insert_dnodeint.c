#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the doubly linked list's head
 * @idx: index
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int		i;
	dlistint_t		*newnode;
	dlistint_t		*tmp;
	dlistint_t		*ptr;

	if (!h)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	while (!newnode)
		return (NULL);
	ptr = *h;
	newnode->n = n;
	i = 0;
	if (idx == 0)
	{
		if (*h)
			(*h)->prev = newnode;
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (i < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == idx - 1)
	{
		tmp = ptr->next;
		ptr->next = newnode;
		newnode->prev = ptr;
		newnode->next = tmp;
		if (tmp)
			tmp->prev = newnode;
		return (newnode);
	}
	return (NULL);
}
