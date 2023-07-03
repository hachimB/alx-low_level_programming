#include "main.h"
#include <stdio.h>
/**
 * _memcpy - contains the code.
 * @dest: a string.
 * @src: a srting.
 * @n : unsigned integer.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
