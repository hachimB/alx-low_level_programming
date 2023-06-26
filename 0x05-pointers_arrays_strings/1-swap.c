#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 *
 *@a : first integer pointer.
 *
 *@b : second integer pointer.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
