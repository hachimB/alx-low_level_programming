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
unsigned int i;
unsigned int j;
int **x;
if (nmemb == 0 || size == 0)
return (NULL);
x = (int **) malloc(size * sizeof(int *));
if (x == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
x[i] = (int *) malloc(nmemb * sizeof(int));
if (x[i] == NULL)
{
for (j = i; j > 0; j--)
free(x[j]);
free(x);
return (NULL);
}
}
for (i = 0; i < size; i++)
{
for (j = 0; j < nmemb; j++)
{
x[i][j] = 0;
}
}
return (x);
}
