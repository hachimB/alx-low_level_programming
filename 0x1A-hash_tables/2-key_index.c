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
unsigned long int asc_val;
asc_val = hash_djb2(key);
index = asc_val % size;
return (index);
}
