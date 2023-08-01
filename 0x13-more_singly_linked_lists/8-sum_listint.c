#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
