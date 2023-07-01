#include "main.h"
#include <stdio.h>
/**
 * _strcmp - contains the code
 *
 *@s1 : string.
 *
 *@s2 : string.
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j;
while (s1[i] != '\0')
i++;
while (s2[i] != '\0')
i++;
for (j = 0; j <= i; j++)
{
if (s1[j] != s2[j])
return (s1[j] - s2[j]);
}
return (0);
}
