#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void	hash_table_delete(hash_table_t *ht)
{
	unsigned long int	i;
	hash_node_t		*node, *next;

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
