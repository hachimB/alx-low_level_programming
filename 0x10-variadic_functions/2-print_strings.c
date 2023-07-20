#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - contains the code
 * @separator : string to be printed between the strings.
 * @n :  the number of strings passed to the function.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *p;
va_start(args, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
p = va_arg(args, char *);
if (p == NULL)
printf("(nil)");
else
printf("%s", p);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
