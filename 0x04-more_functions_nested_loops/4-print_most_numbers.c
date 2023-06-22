#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int x;
for (x = 48; x < 58; x++)
{
if (x == 50 || x == 52)
{
continue;
}
_putchar (x);
}
_putchar ('\n');
}
