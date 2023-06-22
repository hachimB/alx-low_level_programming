#include "main.h"
/**
 * _isupper - contains the code.
 *
 * @c : integer.
 *
 * Return: integer.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
c = 1;
return (c);
}
else
c = 0;
return (c);
}
