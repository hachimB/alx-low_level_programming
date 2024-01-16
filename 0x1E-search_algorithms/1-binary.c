#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;
size_t middle;
size_t i;
if (array)
{
while (start <= end)
{
printf("Searching in array: ");
for (i = start; i <= end; i++)
{
if (i < end)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
middle = (start + end) / 2;
if (value == array[middle])
{
return (middle);
}
else if (value < array[middle])
end = middle - 1;
else
start = middle + 1;
}
}
return (-1);
}
