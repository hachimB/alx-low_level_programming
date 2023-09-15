#include "lists.h"
/**
 * create_new_node - creates a new node.
 * @n: data to insert in the list.
 * Return: the new node.
 */
dlistint_t *create_new_node(int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
return (temp);
}
/**
 * insert_between - inserts a new node.
 * @ptr: ptr pointer.
 * @ptr2: ptr2 pointer.
 * @temp : temp pointer.
 * Return: nothing.
 */
void insert_between(dlistint_t *ptr, dlistint_t *ptr2, dlistint_t *temp)
{
temp->prev = ptr;
temp->next = ptr2;
ptr->next = temp;
ptr2->prev = temp;
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head pointer.
 * @idx: position.
 * @n : data ton insert.
 * Return: a new list with the inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *ptr;
dlistint_t *ptr2 = NULL;
dlistint_t *temp = create_new_node(n);
if (temp == NULL)
return (NULL);
if (*h == NULL)
{
free(temp);
return (NULL);
}
ptr = *h;
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
if (idx > count)
return (NULL);
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
{
ptr = add_dnodeint_end(h, n);
return (ptr);
}
else
{
ptr2 = ptr->next;
insert_between(ptr, ptr2, temp);
}
return (ptr);
}
