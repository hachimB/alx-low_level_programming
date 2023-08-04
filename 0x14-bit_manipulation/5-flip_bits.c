#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n : first number.
 * @m : second number.
 * Return: an unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned long int x;
int i, count = 0;
for (i = 63; i >= 0; i--)
{
x = (xor >> i) & 1;
if (x)
count++;
}
return (count);
}
