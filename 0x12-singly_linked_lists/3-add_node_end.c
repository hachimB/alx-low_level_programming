#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head : double pointer to a struct list_t
 * @str : string.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *last_n;
list_t *d;
unsigned int i = 0;
while (str[i])
	i++;
last_n = malloc(sizeof(list_t));
if (last_n == NULL)
return (NULL);
last_n->str = strdup(str);
last_n->len = i;
last_n->next = NULL;
if (*head == NULL)
{
*head = last_n;
return (last_n);
}
d = *head;
while (d->next)
d = d->next;
d->next = last_n;
return (last_n);
}
