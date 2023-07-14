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
int i = 0;
if (min > max)
return (NULL);
x = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (x == NULL)
return (NULL);
while (min <= max)
{
x[i] = min;
i++;
min++;
}
return (x);
}
