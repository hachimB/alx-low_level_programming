#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h : pointer to a constant list_t.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t n_nodes = 0;
const list_t *l = h;
if (l->str == NULL)
printf("[0] (nil)");
while (l != NULL)
{
printf("[%d] %s\n", l->len, l->str);
l = l->next;
n_nodes++;
}
return (n_nodes);
}
