#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function which prints a struct of dog.
 * @d : a pointer which points to the struct dogh
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
