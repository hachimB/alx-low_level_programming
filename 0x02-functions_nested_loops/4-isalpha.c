#include "main.h"
/**
 * _isalpha - contains the code
 *
 *@c: The character to be checked (type: int).
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
{
return (1);
}
else
return (0);
}
