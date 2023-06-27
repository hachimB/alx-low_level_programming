#include "main.h"
/**
 * rev_string - contains the code
 *
 *@s: string
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
int i;
int e = 0;
int j;
char x;
while (s[e] != '\0')
{
e++;
}
for (i = 0, j = e - 1; i < j; i++, j--)
{
x = s[i];
s[i] = s[j];
s[j] = x;
}
}
