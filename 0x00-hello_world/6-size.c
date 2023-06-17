#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sint = sizeof(int);
int sfloat = sizeof(float);
int schar = sizeof(char);
int slint = sizeof(long int);
int sllint = sizeof(long long int);
printf("Size of an int:%d\n", sint, "bytes");
printf("Size of a float:%d\n", sfloat, "bytes");
printf("Size of a char:%d\n", schar, "bytes");
printf("Size of a long int:%d\n", slint, "bytes");
printf("Size of a long long int :%d\n", sllint, "bytes");
return (0); }
