#include "hash_tables.h"

/**
 *shash_table_create - create hash table
 *@size: table size
 *Return: new hash table
 */

shash_table_t *shash_table_create(unsigned long int size) {
  shash_table_t *table;
  unsigned long int i = 0;

  table = (shash_table_t *)malloc(sizeof(shash_table_t));
  if (!table)
    return (NULL);
  table->size = size;
  table->array = (shash_node_t **)calloc(table->size, sizeof(shash_node_t *));
  if (!table->array)
    return (NULL);
  for (; i < size; i++)
    table->array[i] = NULL;
  table->shead = NULL;
  table->stail = NULL;
  return (table);
}

/**
 *addnodefirst - adds a node at the beginning
 *@node: node
 *@ht: the hash table
 *@idx: index
 *@key: is the key
 *@value: is the value associated with the key.
 *Return: 1 if it succeeded, 0 otherwise
 */

shash_node_t *addnodefirst(shash_node_t *node, shash_table_t *ht,
                           unsigned long int idx, const char *key,
                           const char *value) {
  node->key = strdup(key);
  if (node->key == NULL) {
    free(node);
    return (NULL);
  }
  node->value = strdup(value);
  if (node->value == NULL) {
    free(node->key);
    free(node);
    return (NULL);
  }
  node->next = ht->array[idx];
  ht->array[idx] = node;
  return (node);
}

/**
 *addnode_index - adds a node for storting
 *@ht: hash table
 *@new_n: new node to be added
 *Return: void
 */

void addnode_index(shash_table_t *ht, shash_node_t *new_n) {
  shash_node_t *tmp1, *tmp2;
  int comp;

  tmp1 = tmp2 = ht->shead;
  while (tmp1 != NULL) {
    comp = strcmp(new_n->key, tmp1->key);
    if (comp == 0)
      return;
    else if (comp < 0) {
      new_n->sprev = tmp1->sprev;
      if (tmp1->sprev)
        tmp1->sprev->snext = new_n;
      else
        ht->shead = new_n;
      tmp1->sprev = new_n;
      new_n->snext = tmp1;
      return;
    }
    tmp2 = tmp1;
    tmp1 = tmp1->snext;
  }
  new_n->sprev = tmp2;
  new_n->snext = NULL;
  if (ht->shead)
    tmp2->snext = new_n;
  else
    ht->shead = new_n;
  ht->stail = new_n;
}

/**
 *shash_table_set - sets the value and key
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
  unsigned long int idx;
  shash_node_t *tmp, *new_node, *node_t;

  if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
    return (0);
  idx = key_index((unsigned const char *)key, ht->size);
  tmp = ht->array[idx];
  while (tmp) {
    if (strcmp(tmp->key, key) == 0) {
      free(tmp->value);
      tmp->value = strdup(value);
      if (tmp->value == NULL)
        return (0);
      return (1);
    }
    tmp = tmp->next;
  }
  new_node = malloc(sizeof(shash_node_t));
  if (!new_node)
    return (0);
  node_t = addnodefirst(new_node, ht, idx, key, value);
  if (node_t == NULL)
    return (0);
  addnode_index(ht, node_t);
  return (1);
}

/**
 *shash_table_get - get the value associeted with the key
 *@ht: hash table
 *@key: key
 *Return: value
 */

char *shash_table_get(const shash_table_t *ht, const char *key) {
  shash_node_t *node;
  unsigned long int idx;

  if (!ht)
    return (NULL);
  if (!key || *key == '\0')
    return (NULL);
  idx = key_index((unsigned char *)key, ht->size);
  node = ht->array[idx];
  while (node) {
    if (strcmp(node->key, key) == 0)
      return (node->value);
    node = node->next;
  }
  return (NULL);
}

/**
 *shash_table_print - prints the sorted hash table
 *@ht: hash table
 *Return: void
 */

void shash_table_print(const shash_table_t *ht) {
  shash_node_t *tmp;
  char *sp;

  if (ht == NULL)
    return;

  printf("{");
  sp = "";

  tmp = ht->shead;

  while (tmp != NULL) {
    printf("%s'%s': '%s'", sp, tmp->key, tmp->value);
    sp = ", ";
    tmp = tmp->snext;
  }

  printf("}\n");
}

/**
 *shash_table_print_rev - prints in rev
 *@ht: hash table
 *Return:
 */

void shash_table_print_rev(const shash_table_t *ht) {
  shash_node_t *tmp;
  char *sp;

  if (ht == NULL)
    return;

  printf("{");
  sp = "";

  tmp = ht->stail;

  while (tmp != NULL) {
    printf("%s'%s': '%s'", sp, tmp->key, tmp->value);
    sp = ", ";
    tmp = tmp->sprev;
  }

  printf("}\n");
}

/**
 *shash_table_delete - deletes a hash table
 *@ht: hash table
 *Return: void
 */

void shash_table_delete(shash_table_t *ht) {
  shash_node_t *current, *temp;
  unsigned long int i = 0;

  if (ht == NULL)
    return;

  for (; i < ht->size; i++) {
    current = ht->array[i];
    while (current != NULL) {
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
