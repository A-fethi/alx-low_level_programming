#include "lists.h"

/**
 * sum_listint -  adds all the data (n) of a listint_t linked list.
 * @head: 1st node
 * Return: sum
 */

int	sum_listint(listint_t *head)
{
	int	sum;

	if (!head)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
