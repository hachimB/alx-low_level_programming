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
	if (d->name == 0 || d->owner == 0)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
