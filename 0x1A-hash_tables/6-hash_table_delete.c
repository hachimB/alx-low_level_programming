#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht:the hash table
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index;
hash_node_t *ptr;
hash_node_t *temp;
if (ht == NULL)
return;
for (index = 0; index < ht->size; index++)
{
ptr = ht->array[index];
while (ptr)
{
temp = ptr;
ptr = ptr->next;
free(temp->key);
free(temp->value);
free(temp);
}
}
free(ht->array);
free(ht);
}
