#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char a = 97;
for (x = 0; x < 10; x++)
putchar(x + '0');
while (a < 103)
{
putchar (a);
a++;
}
putchar('\n');
return (0);
}
