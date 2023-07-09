#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc : count the number of arguments.
 * @argv : string witch contains argument.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int i;
unsigned int j;
int res = 0;
if (argc >= 2)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i]);
}
printf("%d\n", res);
}
if (argc == 1)
printf("%d\n", res);
return (0);
}
