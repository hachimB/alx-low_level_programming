#include "main.h"
/**
 * _isdigit - contains the code
 *
 * @c: integer. 
 *
 * Return: integer.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
c = 1;
return (c);
}
else
c = 0;
return (c);
}
