#include "main.h"
#include <stdio.h>
/**
* print_array - contains the code for
*
*@a : intager pointer.
*
*@n : integer.
*
* Return: nothing.
*/
void print_array(int *a, int n)
{
int i = 0;
while (a[i] != '\0')
{
i++;
}
for (i = 0; i < n; i++)
{
if (i == n-1)
{
printf ("%d", a[i]);
continue;
}
printf ("%d, ", a[i]);
}
printf ("\n");
}
