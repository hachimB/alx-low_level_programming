#include "main.h"
#include <stdio.h>
/**
 * reverse_array - contains the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int b;
for (i = 0, j = n - 1; i < j; i++, j--)
{
b = a[i];
a[i] = a[j];
a[j] = b;
}
}
