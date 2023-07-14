#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *x;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(size * nmemb);
if (x == NULL)
return (NULL);
for (i = 0; i < (size * nmemb); i++)
x[i] = 0;
return (x);
}
