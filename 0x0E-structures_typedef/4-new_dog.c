#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - contains the code
 * @name : name of dog (string).
 * @age : age of dog (float).
 * @owner : name of dog owner (string).
 * Return: nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{	struct dog *nd;
	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
