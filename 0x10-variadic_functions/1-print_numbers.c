#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator : string to be printed between numbers (const)
 * @n : number of integers passed to the function (const).
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
va_start(args, n);
if (n == 0)
return;
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
}
