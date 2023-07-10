#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *@s1 : string 1.
 *@s2 : string 2.
 * Return: a string.
 */
char *str_concat(char *s1, char *s2)
{
int l1 = 0;
int l2 = 0;
int i;
int sum;
char *x;
if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);
while (s1[l1])
l1++;
while (s2[l2])
l2++;
sum = l1 + l2;
x = (char *) malloc((sum + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0; i < l1; i++)
{
x[i] = s1[i];
}
for (i = 0; i < l2; i++)
{
x[i + l1] = s2[i];
}
x[sum] = '\0';
return (x);
}
