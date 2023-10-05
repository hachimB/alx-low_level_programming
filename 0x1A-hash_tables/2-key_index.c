#include "hash_tables.h"
/**
 * key_index - gives us the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return:  index at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
unsigned long int asc_val = 0;
int i;
for (i = 0; key[i] != '\0'; i++)
{
asc_val += key[i];
}
index = asc_val % size;
return (index);
}
