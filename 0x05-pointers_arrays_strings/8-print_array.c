#include "main.h"
#include <stdio.h>

/**
 * print_array = prints elements of an array
 *
 * @n: number of elements to be printed
 *
 * @a: array to be printed out
 *
 * return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i + 1 < n)
	{
	printf(", ");
	}
	}
	printf("\n");
}
