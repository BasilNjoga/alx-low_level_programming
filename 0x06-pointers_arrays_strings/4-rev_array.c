#include "main.h"

/**
 * reverse_array - gives the reverse of an array
 *
 * @a: the array
 *
 * @n: number of elemens
 *
 * Return:nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int len;

	len = n;
	for (i = 0; i < n; i++)
	{
	a[i] = a[len];
	len--;
	}
}
