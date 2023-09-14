#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head pointer.
 * @idx: position.
 * @n : data ton insert.
 * Return: a new list with the inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr;
dlistint_t *ptr2 = NULL;
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
if (*h == NULL)
{
free(temp);
return (NULL);
}
ptr = *h;
if (idx == 0)
{
ptr = add_dnodeint(h, n);
free(temp);
return (ptr);
}
while (idx > 1)
{
ptr = ptr->next;
idx--;
}
if (ptr->next == NULL)
ptr = add_dnodeint_end(h, n);
if (ptr == NULL)
{
free(temp);
return (NULL);
}
ptr2 = ptr->next;
ptr->next = temp;
ptr2->prev = temp;
temp->next = ptr2;
temp->prev = ptr;
return (ptr);
}
