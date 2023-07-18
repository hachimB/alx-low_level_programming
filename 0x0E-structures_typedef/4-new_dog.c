#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	nd->name = malloc(sizeof(strlen(name)) + 1);
	nd->owner = malloc(sizeof(strlen(owner)) + 1);
	if (nd->name == NULL || nd->owner == NULL)
	return (NULL);
	strcpy(nd->name, name);
	nd->age = age;
strcpy(nd->owner, owner);
	return (nd);
}
