#include "main.h"
/**
 * _puts - contains the code
 *
 *@str : sting.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
int i;
char x;
for (i = 0; str[i] != '\0'; i++)
{
x = str[i];
_putchar (x);
}
_putchar ('\n');
}
