#include "search_algos.h"

/**
 * linear_search  - the Linear search algorithm
 * @array:is a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
size_t index = 0;
if (!array)
return (-1);
else
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
index = i;
break;
}
}
if (index == 0)
index = -1;
}
return (index);
}
