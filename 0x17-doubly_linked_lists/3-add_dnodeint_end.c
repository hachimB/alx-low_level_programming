#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head pointer.
 * @n: data to insert to the end of the list.
 * Return: a new list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr;
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
if (*head != NULL)
{
*head = temp;
return (temp);
}
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
temp->prev = ptr;
return (temp);
}
