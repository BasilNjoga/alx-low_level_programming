#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - This function perfoms a binary search
 *
 * @array: pointer to the first element of an array
 * @size: number of elements in the array
 * @value: value to be searched
 *
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, j;
	size_t r;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	r = size - 1;
	l = 0;
	while (l <= r)
	{
		mid = floor((l + r) / 2);
		printf("Searching in array:");
		for (j = l; j < r ; j++)
		{
			printf("%d", array[j]);
		}
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			l = mid - 1;
		}
		else
		{
			r = mid + 1;
		}
	}
	return (-1);
}
