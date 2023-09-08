#include "hash_tables.h"
#include <string.h>

/**
 *hash_table_get -Returns the value associated with the element
 *@ht: hash_table
 *@key: the key
 *Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!ht)
		return (NULL);
	if (!key || *key == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
