#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of linked list
 * @index: index of the node to return
 * Return: pointer to the node we are looking for, or NULL
 */

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t	*current;
	unsigned int	i;

	i = 0;
	current = head;
	if (!current)
		return (NULL);
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);
	return (NULL);
}
