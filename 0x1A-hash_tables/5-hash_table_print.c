#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int	i;
	unsigned char		printed;
	hash_node_t		*node;

	i = 0;
	printed = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
