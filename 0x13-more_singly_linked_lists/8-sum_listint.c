#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t.
 * @head : pointer to the first node of the list.
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
int n;
listint_t *ptr;
ptr = head;
if (ptr == NULL)
return (0);
while (ptr != NULL)
{
n = ptr->n;
sum += n;
ptr = ptr->next;
}
return (sum);
}
