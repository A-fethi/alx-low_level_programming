#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head of the list
 * @n: int to store
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*ptr;
	listint_t	*tmp;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (ptr);
}
