#include "main.h"
/**
 * print_last_digit - contains the code
 *
 *@n : integer.
 *
 * Return: absolute value of an integer
 */
int print_last_digit(int n)
{

n = n % 10;
if (n < 0)
{
n = -n;
}
else
{
n = n;
}
_putchar (n + '0');
return (n);
}
