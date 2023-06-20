#include "main.h"
/**
 * print_alphabet_x10 - contains the code
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
int x = 0;
char y = 'a';
for (x = 0; x < 10; x++)
{
for (y = 'a'; y <= 'z'; y++)
{
_putchar (y);
}
_putchar ('\n');
}
}
