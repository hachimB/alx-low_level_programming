#include "main.h"
#include <stdio.h>
/**
 * rot13 - contains the code
 *
 *@s : string.
 *
 * Return: a string.
 */
char *rot13(char *s)
{
int i;
int j;
char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *p13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == l[j])
{
s[i] = p13[j];
break;
}
}
}
return (s);
}
