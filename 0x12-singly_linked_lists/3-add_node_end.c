#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: head of the list
 * @str: string to store
 * Return: address of the new element, or NULL if it failed
 */


list_t	*add_node_end(list_t **head, const char *str)
{
	int	i;
	list_t	*ptr;
	list_t	*tmp;

	i = 0;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	while (str[i])
		i++;
	ptr->len = i;
	ptr->str = strdup(str);
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
