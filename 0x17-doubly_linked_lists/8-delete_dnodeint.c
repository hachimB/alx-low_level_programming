#include "lists.h"

/**
 * delete_atend - deletes the last node.
 * @head: head pointer.
 * Return: node.
 */
dlistint_t *delete_atend(dlistint_t **head)
{
dlistint_t *ptr;
dlistint_t *ptr2 = NULL;
if (*head == NULL)
return (NULL);
ptr = *head;
while (ptr->next != NULL)
ptr = ptr->next;
if (ptr->prev != NULL)
{
ptr2 = ptr->prev;
ptr2->next = NULL;
}
free(ptr);
ptr = NULL;
return (ptr);
}


/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t.
 * @head: head pointer.
 * @index: position.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *ptr;
dlistint_t *ptr2 = NULL;
if (*head == NULL)
return (-1);
ptr = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(ptr);
ptr = NULL;
return (1);
}
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
if (index > count)
return (-1);
ptr = *head;
while (index > 0)
{
ptr = ptr->next;
index--;
}
if (ptr->next == NULL)
ptr = delete_atend(head);
else
{
ptr2 = ptr->prev;
ptr2->next = ptr->next;
ptr->next->prev = ptr2;
free(ptr);
ptr = NULL;
}
return (1);
}
