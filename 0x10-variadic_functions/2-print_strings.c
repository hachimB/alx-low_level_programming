#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
