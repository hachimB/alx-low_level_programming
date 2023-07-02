#include "main.h"
#include <stdio.h>
/**
 * leet - contains the code for
 *
 *@s : string.
 *
 * Return: a string.
 */
char *leet(char *s)
{
int i;
int j;
char *l = "aAeEoOtTlL";
char *c = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == l[j])
{
s[i] = c[j];
}
}
}
return (s);
}
