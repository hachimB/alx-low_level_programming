#include "main.h"
#include <stdio.h>
/**
 * _memset - contains the code.
 * @s: string.
 * @b: a character.
 * @n: unsigned integer.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
return (s);
}
