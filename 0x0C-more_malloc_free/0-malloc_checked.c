#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - contains the code
 * @b : integer.
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
