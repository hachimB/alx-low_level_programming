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
unsigned long int x;
for(i = (sizeof(n)* 8 - 1); i >= 0; i--)
{
x = (n >> i) & 1;
_putchar (x + '0');
}
}
