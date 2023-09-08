#include "hash_tables.h"
#include <stdlib.h>

/**
 *hash_table_delete - deletes a hash table.
 *@ht: hash table
 */

void hash_table_delete(hash_table_t *ht) {
  hash_node_t *tmp;
  unsigned long int index = 0;

  if (!ht)
    return;

  for (; index < ht->size; index++) {
    tmp = ht->array[index];
    while (tmp) {
      free(tmp);
      tmp = ht->array[index]->next;
    }
  }
}
