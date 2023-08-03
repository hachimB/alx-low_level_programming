#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n : our number.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
int i;
int j = 0;
unsigned long int bit;
for (i = 63; i >= 0; i--)
{
bit = (n >> i) & 1;
if (bit)
{
_putchar ('1');
j++;
}
else if (j)
_putchar ('0');
}
if (!j)
_putchar ('0');
}
