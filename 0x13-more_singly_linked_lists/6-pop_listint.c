#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: 0
 */

int	pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int		data;

	if (!*head)
		return (0);
	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
