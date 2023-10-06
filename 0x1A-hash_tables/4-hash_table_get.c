#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key
 * Return: the value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
/*hash_node_t *ptr;*/
if (ht == NULL || key == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (!(ht->array[index]))
return (NULL);
/*ptr = ht->array[index];
while (ptr)
{
if (strcmp(ptr->key, key) == 0)
return (ptr->value);
ptr = ptr->next;
}
return (NULL);*/
if (strcmp(ht->array[index]->key, key) == 0)
return (ht->array[index]->value);
return (NULL);
}
