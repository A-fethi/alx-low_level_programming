#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we are looking for, or NULL
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;
	listint_t	*current;

	i = 0;
	current = head;
	if (current == NULL)
		return (NULL);
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);
	return (NULL);
}
