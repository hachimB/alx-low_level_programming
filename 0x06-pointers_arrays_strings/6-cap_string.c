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
if (s[j] >= 'a' && s[j] <= 'z')
{
if
(
s[j - 1] == '.' ||
s[j - 1] == ';' ||
s[j - 1] == ' ' ||
s[j - 1] == '\t' ||
s[j - 1] == '\n' ||
s[j - 1] == ',' ||
s[j - 1] == '!' ||
s[j - 1] == '?' ||
s[j - 1] == '"' ||
s[j - 1] == '(' ||
s[j - 1] == ')' ||
s[j - 1] == '{' ||
s[j - 1] == '}'
)
{
s[j] = s[j] - ('a' - 'A');
}
}
}
return (s);
}
