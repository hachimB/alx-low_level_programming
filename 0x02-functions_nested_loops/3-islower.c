#include "main.h"
/**
 * _islower - contains the code
 *
 *@c: The character to be checked (type: int).
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c < 123)
{
return (1);
}
else
return (0);
}
