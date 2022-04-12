#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dog
 *
 * @d: pointer to dog function
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
