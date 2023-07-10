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
while (str[l])
{
l++;
}
x = (char *) malloc((l) *sizeof(char));
if (str != NULL && x != NULL)
{
for (i = 0; i <= l; i++)
x[i] = str[i];
}
else
{
return (NULL);
}
return (x);
}
