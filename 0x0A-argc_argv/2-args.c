#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc : count the number of arguments.
 * @argv : string witch contains argument.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int i;
int j;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
_putchar (argv[i][j]);
}
_putchar ('\n');
}
return (0);
}
