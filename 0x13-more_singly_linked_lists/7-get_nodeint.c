#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head : the pointer to the first node of link.
 * @index : the index of the node, starting at 0
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;
unsigned int i = 0;
ptr = head;
if (ptr == NULL)
return (NULL);
while (ptr)
{
if (i == index)
return (ptr);
else
ptr = ptr->next;
i++;
}
return (ptr);
}
