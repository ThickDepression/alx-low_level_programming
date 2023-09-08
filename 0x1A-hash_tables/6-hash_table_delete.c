#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		free(current);
	}

	free(ht->array);
	free(ht);
}
