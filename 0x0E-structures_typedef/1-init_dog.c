#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable
 *
 * @d: type
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
	printf("Ok\n");
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
