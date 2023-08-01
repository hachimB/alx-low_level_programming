#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t.
 * @head : double pointer.
 * @index : the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *previous, *current;
previous = *head;
current = *head;
if (*head == NULL || previous == NULL || current == NULL)
return (-1);
else if (index == 0) /* We will delete the first node of the list */
{
*head = current->next;
free(current);
current = NULL;
}
else
{
while (index != 0)
{
previous = current;
current = current->next;
index--;
}
if (index > 0)
return (-1);
previous->next = current->next;
free(current);
current = NULL;
}
return (1);
}
