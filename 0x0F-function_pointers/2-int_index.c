#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - contains the code.
 * @size: the number of elements in the array (array).
 * @array: array of integers.
 * @cmp: function pointer.
 * Return: nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{       int i;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
