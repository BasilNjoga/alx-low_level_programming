#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to search function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;
	
	if (size <= 0)
	{
	return (-1);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	if ((*cmp)(array[i]) != 0)
	{
	num = i;
	}
	else
	{
	return (-1);
	}
	}
	}
	return (num);
}
