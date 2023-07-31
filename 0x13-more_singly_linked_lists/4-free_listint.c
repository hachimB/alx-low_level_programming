#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head : pointer to the first node of the list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head)
{
ptr = head->next;
free(head);
head = ptr;
}
}
