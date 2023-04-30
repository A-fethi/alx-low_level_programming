#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: first node in the list's pointer
 * Return: pointer to the 1st node in the new list
 */

listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*prev;
	listint_t	*next;

	if (!*head || !head)
		return (NULL);
	prev = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
