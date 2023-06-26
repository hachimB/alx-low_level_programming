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
int i = 0;
int k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
k = i / 2;
}
else
{
k = (i - 1) / 2;
k += 1;
}
for (; k < i; k++)
{
_putchar (str[k]);
}
_putchar ('\n');
}
