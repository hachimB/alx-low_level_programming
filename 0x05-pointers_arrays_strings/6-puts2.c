#include "main.h"
/**
 * puts2 - contains the code
 *
 *@str : string
 *
 * Return: nothing.
 */
void puts2(char *str)
{
int a;
int b = 0;
char c;
while (str[b] != 0)
{
b++;
}
for (a = 0; a < b; a += 2)
{
c = str[a];
_putchar (c);
}
_putchar ('\n');
}
