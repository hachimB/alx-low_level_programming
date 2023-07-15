#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - realloc memory
 * @ptr: the address of memory to print
 * @old_size: the size of the memory to print
 * @new_size: the new size of the memory.
 * Return: a pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *x;
ptr = malloc(old_size);
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
x = malloc(new_size);
if (x == NULL)
return (NULL);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
x = malloc(new_size);
if (x == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
{
x[i] = ((char *)ptr)[i];
}
free(ptr);
return (x);
}
