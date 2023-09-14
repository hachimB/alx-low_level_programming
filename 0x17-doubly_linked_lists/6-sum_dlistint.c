#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t.
 * @head: head pointer.
 * Return: the sum of all the data (n) of a dlistint_t.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *ptr;
if (head == NULL)
return (0);
ptr = head;
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
