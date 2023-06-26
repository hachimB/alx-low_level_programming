#include "main.h"
/**
 * print_rev - contains the code
 *
 *@s: string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
int i;
int e;
int j = 0;
char x;
for (i = 0; s[i] != '\0'; i++)
{
j = j + 1;
}
for (e = j - 1; e >= 0; e--)
{
x = s[e];
_putchar (x);
}
_putchar ('\n');
}
