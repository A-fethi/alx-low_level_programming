#include "lists.h"

/**
 * free_listint - freeze a linked list
 * @head: list to free
 */

void	free_listint(listint_t *head)
{
	listint_t	*tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
