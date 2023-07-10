#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str : string
 * Return: a string.
 */
char *_strdup(char *str)
{
int i;
int l = 0;
char *x;
if (str == NULL)
return (NULL);
while (str[l])
{
l++;
}
x = (char *) malloc((l + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0; i < l; i++)
x[i] = str[i];
x[i] = '\0';
return (x);
}
