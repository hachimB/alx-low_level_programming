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
int j = 0;
for (i = 0; i < argc; i++)
{
while (argv[i][j] != '\0')
{
_putchar (argv[i][j]);
j++;
}
}
_putchar ('\n');
return (0);
}
