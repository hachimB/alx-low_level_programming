#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - contains the code
 * @s : string.
 * Return: an integer.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s  == '\0')
{
return (i);
}
return (1 + _strlen_recursion(s + 1));
}
