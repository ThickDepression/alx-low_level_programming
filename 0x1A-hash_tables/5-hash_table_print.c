#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table.
 *@ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	char *sp;

	if (!ht)
		return;
	printf("{");
	sp = "";
	for (; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			printf("%s'%s': '%s'", sp, ht->array[index]->key,
						 ht->array[index]->value);
			sp = ", ";
			ht->array[index] = ht->array[index]->next;
		}
	}
	printf("}\n");
}
