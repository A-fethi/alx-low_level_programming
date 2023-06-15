#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *							a dlistint_t linked list.
 * @head: double pointer to the doubly linked list's head
 * @index: index to the node to delete
 * Return: 1 ==> succes, -1 ==> failure
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int	i;
	dlistint_t	*tmp;

	if (!*head || !head)
		return (-1);
	tmp = *head;
	i = 0;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index)
	{
		if (tmp->prev)
			tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
