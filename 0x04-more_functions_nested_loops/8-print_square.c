#include "main.h"

/**
 * print_square - prints squares
 *
 * @size: size of square required
 *
 * Return: Always (0) Success
 */

void print_square(int size)
{
	int j;
	int i;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
