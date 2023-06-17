#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int schar = sizeof(char);
int sint = sizeof(int);
int slint = sizeof(long int);
int sllint = sizeof(long long int);
int sfloat = sizeof(float);
printf("Size of a char: %d byte(s)\n", schar);
printf("Size of an int: %d byte(s)\n", sint);
printf("Size of a long int: %d byte(s)\n", slint);
printf("Size of a long long int: %d byte(s)\n", sllint);
printf("Size of a float: %d byte(s)\n", sfloat);
return (0); }
