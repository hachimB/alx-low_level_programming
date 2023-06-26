#include "main.h"
#include <stdio.h>
/**
 * _strlen - contains the code
 *
 *@s: string.
 *
 * Return: nothing.
 */
int _strlen(char *s)
{
int i;
int j = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
j = j + 1;
}
return (j);
}
