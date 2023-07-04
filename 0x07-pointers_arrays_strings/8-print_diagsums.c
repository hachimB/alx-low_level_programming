#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - contains the code
 * @a : integer pointer.
 * @size : integer.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i;
int diagonal1 = 0;
int diagonal2 = 0;
for (i = 0; i < size; i++)
{
diagonal1 += a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
diagonal2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", diagonal1, diagonal2);
}
