#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head : double pointer.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *ptr1, *ptr2;
if (*head == NULL)
return (NULL);
ptr1 = NULL;
ptr2 = NULL;
while (*head)
{
ptr2 = (*head)->next;
(*head)->next = ptr1;
ptr1 = *head;
(*head) = ptr2;
}
(*head) = ptr1;
return (*head);
}
