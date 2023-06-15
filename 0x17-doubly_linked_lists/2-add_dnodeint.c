#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the doubly linked list's head
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t	*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
