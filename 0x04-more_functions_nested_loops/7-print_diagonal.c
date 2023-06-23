#include "main.h"
/**
 * print_diagonal - contains the code
 *
 *@a : interger.
 *
 * Return: nothing.
 */
void print_diagonal(int a)
{
int x;
int y;
if (a > 0)
{
for (x = 1; x <= a; x++)
{
for (y = 1; y < x; y++)
{
_putchar (32);
}
_putchar (92);
_putchar ('\n');
}
}
else
_putchar ('\n');
}
