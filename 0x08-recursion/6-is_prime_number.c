#include "main.h"
#include <stdio.h>
int prime_number(int n, int x);
/**
 * is_prime_number - contains the code
 * @n : number we want to know if it is prime or not.
 * Return: an integer.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime_number(n, n - 1));
}
/**
 * prime_number - contains the code
 * @n : number we want to know if it is prime or not.
 * @x : integer.
 * Return: an integer.
 */
int prime_number(int n, int x)
{
if (x == 1)
return (1);
if (n % x == 0 && x > 0)
return (0);
return (prime_number(n, x - 1));
}
