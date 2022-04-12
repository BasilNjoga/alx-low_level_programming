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
	dog_t *new_dog;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
