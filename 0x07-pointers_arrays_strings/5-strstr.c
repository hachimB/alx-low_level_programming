#include "main.h"
#include <stdio.h>
/**
 * _strstr - contains the code
 * @haystack : string.
 * @needle : string.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int k;
int l;
while (needle[i] != '\0')
i++;
while (haystack[j] != '\0')
j++;
for (k = 0; k < i; k++)
{
for (l = 0; l < j; l++)
{
if (needle[k] == haystack[l])
return (needle);
}
}
return (0);
}
