#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head : pointer to the first node of list.
 * @idx :  index of the list where the new node should be added.
 * @n : integer.
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *t;
ptr = *head;
t = malloc(sizeof(listint_t));
if (t == NULL)
return (NULL);
t->n = n;
t->next = NULL;
idx--;
while (idx != 0)
{
ptr = ptr->next;
idx--;
}
t->next = ptr->next;
ptr->next = t;
return (t);
}
