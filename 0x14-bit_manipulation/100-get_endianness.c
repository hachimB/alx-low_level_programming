#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: integer.
 */
int get_endianness(void)
{
unsigned int i = 345;
char *x = (char *) &i;
if (x)
return (1);
else
return (0);
}
