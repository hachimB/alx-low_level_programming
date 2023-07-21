#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - that prints anything.
 * @format : a list of types of arguments passed to the function.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
va_list list;
int j = 0;
char *separator = "";
char *s;
va_start(list, format);
if (format)
{
while (format[j] != '\0')
{
switch (format[j])
{
case 'i':
printf("%s%d", separator, va_arg(list, int));
break;
case 'c':
printf("%s%c", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));
break;
case 's':
s = va_arg(list, char *);
if (!s)
s = "(nil)";
printf("%s%s", separator, s);
break;
default:
j++;
continue;
}
separator = ", ";
j++;
}
va_end(list);
}
}
