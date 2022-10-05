#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - this is a function to do a linear search
 *
 * @array: first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("value checked arrray[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
