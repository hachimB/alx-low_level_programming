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
char c;
for (a = 0; str[a] != '\0'; a+=2)
{
c = str[a];
_putchar (c);
}
_putchar ('\n');
}
