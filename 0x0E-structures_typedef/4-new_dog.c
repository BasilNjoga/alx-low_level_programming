#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - makes anew god
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: who who who
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
