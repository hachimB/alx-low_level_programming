#include "main.h"
/**
 * print_sign - contains the code
 *
 *@n: comparison character.
 *
 * Return: 0 or 1 and signs
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
return print_sign(n); 
}
