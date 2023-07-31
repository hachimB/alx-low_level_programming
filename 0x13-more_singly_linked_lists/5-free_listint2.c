#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head : double pointer.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (*head == NULL)
return;
while (*head)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head = NULL;
}
