#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char as = 65;
char asc = 97;
while (asc < 123)
{
putchar(asc);
asc++;
}
while (as < 91)
{
putchar(as);
as++;
}
putchar('\n');
return (0);
}
