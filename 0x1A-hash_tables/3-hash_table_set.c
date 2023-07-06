#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int	hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int	i;
	hash_node_t		*new_node, *temp;
	char			*new_value;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
