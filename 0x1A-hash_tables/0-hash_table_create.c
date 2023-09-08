#include "hash_tables.h"

/**
 *hash_table_create - creates a hasq:h table.
 *@size: size of the array
 *Return: pointer to the newly created hasq:h table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	for (; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
