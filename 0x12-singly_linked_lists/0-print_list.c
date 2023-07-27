#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h : pointer to a constant list_t.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (h->str == NULL)
printf("[%lu] (nil)\n", n);
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}
