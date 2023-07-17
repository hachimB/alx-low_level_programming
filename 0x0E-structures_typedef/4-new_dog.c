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
{	dog_t *nd;
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
