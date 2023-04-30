#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to the first element in the list
 * @index: index to the node to delete
 * Return: 1 ==> succes, -1 ==> failure
 */

int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i;
	listint_t	*tmp;
	listint_t	*ptr;

	if (!*head || !head)
		return (-1);
	tmp = *head;
	i = 0;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index - 1)
	{
		ptr = tmp->next;
		tmp->next = ptr->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
