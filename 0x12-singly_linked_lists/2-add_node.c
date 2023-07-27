#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head : double pointer to a struct list_t.
 * @str : character.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int l = 0;
while (str[l])
l++;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = l;
new->next = *head;
*head = new;
return (*head);
}
