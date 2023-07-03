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
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}

