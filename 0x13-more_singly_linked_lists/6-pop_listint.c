#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: 0
 */

int	pop_listint(listint_t **head)
{
	listint_t	*tmp;

	if (!head)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (0);
}
