#include "main.h"
/**
 * print_line - contains the code
 *
 *@n : integer.
 *
 * Return: nothing.
 */
void print_line(int n)
{
int x;  
if (n > 0)
{
for (x = 1; x <= n; x++)
{
_putchar (95);
}
_putchar ('\n');
}
else
_putchar ('\n');
}
