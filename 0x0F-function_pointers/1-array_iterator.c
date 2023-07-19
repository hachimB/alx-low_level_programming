#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - contains an integer
 * @array: integer array
 * @size : size.
 * @action : fonction pointer.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{	int i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < ((int) size); i++)
	{
		action(array[i]);
	}
}
