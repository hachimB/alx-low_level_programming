#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head : the head pointer.
 * @n : data to add.
 * Return: a new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
if (*head != NULL)
{
temp->next = *head;
(*head)->prev = temp;
}
*head = temp;
return (*head);
}
