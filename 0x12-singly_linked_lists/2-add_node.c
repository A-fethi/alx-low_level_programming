#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: head of the linked list
 * @str: string to store
 * Return: address of the new element or NULL if it failed
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*ptr;
	int	i;

	i = 0;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	while (str[i])
		i++;
	ptr->len = i;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

