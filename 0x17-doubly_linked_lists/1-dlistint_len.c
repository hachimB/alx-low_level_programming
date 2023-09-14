#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the header pointer.
 * Return: the number of elements in a linked dlistint_t list..
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t count = 0;
ptr = h;
while (ptr != NULL)
{
ptr = ptr->next;
count++;
}
return (count);
}
