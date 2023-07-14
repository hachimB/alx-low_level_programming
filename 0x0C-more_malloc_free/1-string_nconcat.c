#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : integer
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int k;
unsigned int l;
unsigned int s;
char *x;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
s = i + n;
x = (char *) malloc((s + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (k = 0; k < i; k++)
{
x[k] = s1[k];
}
for (l = 0; l < n; l++)
{
x[l + i] = s2[l];
}
if (n >= j)
{
x[l + i] = s2[j];
}
x[i + n] = '\0';
return (x);
}
