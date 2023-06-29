#include "main.h"
#include <stdio.h>
/**
 * _strcat - contains the code
 *
 *@dest : string 1.
 *
 *@src : string 2;
 *
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
