#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h : a pointer to a struct h
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
size_t l = 0;
while (h)
{
h = h->next;
l++;
}
return (l);
}
