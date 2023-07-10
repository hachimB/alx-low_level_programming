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
int a;
int b;
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
for (j = 0; j < i; j++)
free(x[j]);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
x[i][j] = 0;
}
}
return (x);
}
