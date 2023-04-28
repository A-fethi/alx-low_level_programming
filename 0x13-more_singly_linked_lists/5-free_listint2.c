#include "lists.h"

/**
 * free_listint2 - freeze a linked list
 * @head: list to free
 */

void	free_listint2(listint_t **head)
{
	listint_t	*tmp;
	listint_t	*ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	ptr = NULL;
}
