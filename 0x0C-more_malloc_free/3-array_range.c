#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the smallest integer.
 * @max: largest integer.
 *
 * Return: an integer.
 */
int *array_range(int min, int max)
{
int *x;
int i;
int j;
if (min > max)
return (NULL);
j = (max - min);
x = (int *) malloc(sizeof(int) * j + sizeof(int));
if (x == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
x[i] = i;
}
return (x);
}
