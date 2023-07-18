#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - contains the code
 * @d : pointer of type dog_t.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
