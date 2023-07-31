#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head : pointer to the first node of the list.
 * @n : the integer to be printed.
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *last;
last = (listint_t *) malloc(sizeof(listint_t));
if (last == NULL)
return (NULL);
last->n = n;
last->next = NULL;
if (*head == NULL)
{
*head = last;
return (last);
}
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = last;
return (last);
}
