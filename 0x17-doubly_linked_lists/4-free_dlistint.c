#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head pointer.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr, *ptr2;
ptr = head;
while (ptr != NULL)
{
ptr2 = ptr->next;
free(ptr);
ptr = ptr2;
}
}
