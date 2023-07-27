#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head : pointer to a struct list_t.
 * Return: nothing.
 */
void free_list(list_t *head)
{
list_t *n;
while (head)
{
free(head->str);
n = head->next;
free(head);
head = n;
}
}
