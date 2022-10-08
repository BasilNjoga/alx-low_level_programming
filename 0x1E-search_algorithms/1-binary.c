#include <stdio.h>
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
	size_t mid, div;

	if (array == NULL)
	{
		return (-1);
	}
	r = size - 1;
	l = 0;
	while (l <= r)
	{
		div = ((l + r) / 2);
		mid = return_mid(div);
		printf("Searching in array:");
		for (j = l; j < r; j++)
		{
			printf(" %d,", array[j]);
		}
		printf(" %d\n", array[r]);
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
/**
 * return_mid - returns the floor of a given value
 *
 * @div: integer value
 *
 * Return: The floor
 */

int return_mid(int div)
{
	int mid;

	if (((div * 10) % 10) == 0)
	{
		mid = div;
	}
	else
	{
		mid = (div - 0.5);
	}
	return (mid);
}
