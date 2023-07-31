#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head : pointer to the first node.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int n;
if (head == NULL)
return (0);
ptr = *head;
if (ptr == NULL)
return (0);
*head = (*head)->next;
n = ptr->n;
free(ptr);
ptr = NULL;
return (n);
}
