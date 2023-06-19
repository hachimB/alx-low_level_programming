#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;
int z;
for (x = 48; x < 58; x++)
{
for (y = 49; y < 58; y++)
{
for (z = 50; z < 58; z++)
{
if ((x < y) && (y < z))
{
putchar (x);
putchar (y);
putchar (z);
if ((x == 55) && (y == 56) && (z == 57))
{
continue;
}
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
