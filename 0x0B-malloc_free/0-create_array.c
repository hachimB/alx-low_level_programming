#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - contains the code.
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x = (char *) malloc(size * sizeof(char));
if (size > 0)
{
for (i = 0; i < size; i++)
x[i] = c;
}
else
return (NULL);
return (x);
}
