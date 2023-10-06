#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht :  the hash table.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *ptr;
unsigned long int index;
int comma = 0;
if (ht == NULL)
return;
printf("{");
for (index = 0; index < ht->size; index++)
{
ptr = ht->array[index];
while (ptr)
{
if (comma)
printf(", ");
printf("%s: %s", ptr->key, ptr->value);
ptr = ptr->next;
comma = 1;
}
}
printf("}\n");
}
