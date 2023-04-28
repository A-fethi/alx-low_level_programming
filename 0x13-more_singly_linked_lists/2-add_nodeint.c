#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: head of the linked list
 * @n: int to store
 * Return: address of the new element or NULL if it failed
 */

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

