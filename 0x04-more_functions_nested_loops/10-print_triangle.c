#include "main.h"
/**
 * print_triangle - contains the code
 *
 *@size : integer.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int x;
int y;
int a;
if (size >= 1)
{
for (x = 1; x <= size; x++)
{
for (a = size - x; a >= 1; a--)
{
_putchar (' ');
}
for (y = 1; y <= x; y++)
{
_putchar (35);
}
_putchar ('\n');
}
}
else
_putchar ('\n');
}
