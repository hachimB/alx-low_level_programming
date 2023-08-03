#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b : is pointing to a string of 0 and 1 chars.
 * Return: an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int i = 0;
int j;
while (b[i] != '\0')
i++;
if (b == NULL)
return (0);
for (j = 0; j < i; j++)
{
if (b[j] != '0' && b[j] != '1')
return (0);
else if (b[j] == '0')
n *= 2;
else if (b[j] == '1')
n = n * 2 + 1;
}
return (n);
}
