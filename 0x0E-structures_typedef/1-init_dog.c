#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - contains the code
 * @d : pointer to the struct of dogs.
 * @name : name of the dog(char).
 * @age : age of the dog(float).
 * @owner : dog owner(char).
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
