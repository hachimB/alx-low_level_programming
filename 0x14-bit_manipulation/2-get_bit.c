#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n : the decimal number.
 * @index : the index, starting from 0.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;
int x;
for (i = 63; i >= 0; i--)
{
if (index == (unsigned int)i)
{
x = (n >> index) & 1;
break;
}
}
if (index > 64)
return (-1);
return (x);
}
