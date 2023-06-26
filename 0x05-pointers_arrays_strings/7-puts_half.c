#include "main.h"
/**
 * puts_half - contains the code
 *
 *@str : string.
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
int i;
int j;
int k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
k = i / 2;
for (j = k; j < i; j++)
{
_putchar (str[j]);
}
}
else
{
k = (i - 1) / 2;
_putchar (str[k]);
}
_putchar ('\n');
}
