#include <stdio.h>
#include "main.h"
/**
 * _atoi - contains the code
 *
 *@s : string.
 *
 * Return: an integer.
 */
int _atoi(char *s)
{
int i = 0;
int j = 0;
int sign = 1;
unsigned int result = 0;
while (s[i] != '\0')
{
i++;
}
if (s[j] == '\0')
{
result = 0;
}
if (s[j] == '-' || s[j] == '+')
{
if (s[j] == '-')
{
sign = -1;
}
j++;
}
for (; j < i; j++)
{
if (s[j] >= '0' && s[j] <= '9')
{
result = (result * 10) + (s[j] - '0');
}
}
return ((int)(result *sign));
}
/**
 * main - check the code
 * @argc : count the number of arguments.
 * @argv : string witch contains argument.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int i;
int res = 0;
if (argc >= 2)
{
for (i = 0; i < argc; i++)
{
if (
(*argv[i] >= 'a' && *argv[i] <= 'z')
|| (*argv[i] >= 'A' && *argv[i] <= 'Z')
)
{
printf("Error\n");
return (1);
}
else
res += _atoi (argv[i]);
}
printf("%d\n", res);
}
if (argc == 1)
printf("%d\n", res);
return (0);
}
