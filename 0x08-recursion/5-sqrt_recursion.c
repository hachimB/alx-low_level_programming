#include "main.h"
int sqroot(int n, int x);
/**
 * _sqrt_recursion - contains the code
 * @n : integer.
 * Return: an integer.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqroot(n, 0));
}
/**
 * sqroot - contains the code
 * @n : integer.
 * @x : square root
 * Return: an integer.
 */
int sqroot(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (sqroot(n, x + 1));
}
