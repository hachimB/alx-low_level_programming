#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head : the pointer to the first node of the list.
 * @n : the interger we should intoduce in our list.
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
ptr = (listint_t *) malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = NULL;
ptr->next = *head;
*head = ptr;
return (*head);
}
