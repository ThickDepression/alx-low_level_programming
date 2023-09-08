#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *addnode - adds a node at the beginning
 *@node: node
 *@ht: the hash table
 *@idx: index
 *@key: is the key
 *@value: is the value associated with the key.
 *Return: 1 if it succeeded, 0 otherwise
 */
int addnode(hash_node_t *node, hash_table_t *ht, unsigned long int idx,
						const char *key, const char *value)
{
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
/**
 *hash_table_set - a function that adds an element to the hash table.
 *@ht: the hash table
 *@key: is the key
 *@value: is the value associated with the key.
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	if (addnode(new_node, ht, idx, key, value) == 0)
		return (0);
	return (1);
}
