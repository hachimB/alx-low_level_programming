#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - contains the code
 *
 *@dest : string.
 *
 *@src : string.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;
char x;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
x = src[j];
dest[j] = x;
}
return (dest);
}
