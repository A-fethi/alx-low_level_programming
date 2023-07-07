#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int	i;
	unsigned char		printed;

	i = 0;
	printed = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (printed == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
