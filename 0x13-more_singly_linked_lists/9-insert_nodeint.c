#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: linked list's head
 * @idx: index
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int		i;
	listint_t		*newnode;
	listint_t		*tmp;
	listint_t		*ptr;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	while (!newnode)
		return (NULL);
	ptr = *head;
	newnode->n = n;
	i = 0;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == idx - 1)
	{
		tmp = ptr->next;
		ptr->next = newnode;
		newnode->next = tmp;
		return (newnode);
	}
	return (NULL);
}
