#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **x;
if (width <= 0 || height <= 0)
return (NULL);
x = (int **) malloc(height * sizeof(int *));
if (x == NULL)
{
free(x);
return (NULL);
}
for (i = 0; i < height; i++)
{
x[i] = (int *) malloc(width * sizeof(int));
if (x[i] == NULL)
{
for (j = i; j >= 0; j--)
free(x[j]);
free(x);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
x[i][j] = 0;
}
}
return (x);
}
