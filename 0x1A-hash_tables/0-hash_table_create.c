#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t		*table;
	unsigned long int	i;

	if (size < 1)
		return (NULL);
	 table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	table->size = size;
	return (table);
}
