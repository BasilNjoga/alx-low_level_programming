#include "main.h"

/**
 * swap_int - it swaps the value of two integers
 *
 * @a: first integer to be swapped
 *
 * @b: second integer to be swapped
 *
 * Return: void - nothing
 */

void swap_int(int *a, int *b)
{
	int *d;

	*d = *a;
	*a = *b;
	*b = *d;
}
