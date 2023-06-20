#include <stdio.h>
void put(void);
void put(void)
{
putchar ('_');
putchar ('p');
putchar ('u');
putchar ('t');
putchar ('c');
putchar ('h');
putchar ('a');
putchar ('r');
putchar ('\n');
}

void print_alphabet(void);
void print_alphabet(void)
{
char x = 97;
while (x < 123)
{
putchar (x);
x++;
}
putchar ('\n');
}
