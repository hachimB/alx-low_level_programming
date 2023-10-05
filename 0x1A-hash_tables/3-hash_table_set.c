#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table we want to add or update the key/value to.
 * @key: Key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *ptr;
hash_node_t *new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
if (key == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
if (ht->array[index] == NULL)
ht->array[index] = new;
else
{
ptr = ht->array[index];
new->next = ptr;
ptr = new;
}
return (1);
}
