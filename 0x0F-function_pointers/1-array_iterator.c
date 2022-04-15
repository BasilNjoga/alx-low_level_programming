#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array to give a function
 *
 * @array: the array
 * @size: the size of array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
