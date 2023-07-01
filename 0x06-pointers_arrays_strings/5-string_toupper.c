#include "main.h"
#include <stdio.h>
/**
 * string_toupper - check the code
 *
 *@s: string.
 *
 * Return: string.
 */
char *string_toupper(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
if (s[j] >= 'a' && s[j] <= 'z')
{
s[j] = s[j] - ('a' - 'A');
}
}
return (s);
}
