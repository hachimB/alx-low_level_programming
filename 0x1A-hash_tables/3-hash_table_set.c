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
hash_node_t *ptr = NULL;
char *key_cp;
char *val_cp;
hash_node_t *new = malloc(sizeof(hash_node_t));
if (new == NULL || key == NULL || ht == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
key_cp = strdup(key);
val_cp = strdup(value);
new->key = key_cp;
new->value = val_cp;
new->next = NULL;
if (ht->array[index] == NULL)
{
ht->array[index] = new;
}
else
{
if (strcmp(key, ht->array[index]->key) == 0)
{
free(ht->array[index]->value);
if (new->value)
free(new->value);
free(new);
ht->array[index]->value = strdup(value);
return (1);
}
ptr = ht->array[index];
new->next = ptr;
ht->array[index] = new;
}
return (1);
}
