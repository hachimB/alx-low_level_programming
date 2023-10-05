#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: string
 * Return: an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int i;
for (i = 0; str[i] != '\0'; i++)
{
hash = (hash * 33) + str[i];
}
return (hash);
}
