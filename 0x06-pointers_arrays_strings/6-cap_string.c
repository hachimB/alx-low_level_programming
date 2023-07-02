#include "main.h"
#include <stdio.h>
/**
 * cap_string - contains the code
 *
 *@s : string.
 *
 * Return: a string.
 */
char *cap_string(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == ',' || s[j] == ';' || s[j] == '.' || s[j] == '!' || s[j] == '?' || s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
{
if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
{
s[j + 1] = s[j + 1] - ('a' - 'A');
}
}
}
return (s);
}
