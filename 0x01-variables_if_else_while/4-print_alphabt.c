#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char asc = 97;
while (asc < 123)
{
if (asc == 101 || asc == 113)
{
asc++;
continue;
}

putchar (asc);
asc++;
}
putchar('\n');
return (0);
}
