#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: this is the size of the triangle
 *
 * Return: Always (0) - sucess
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
		_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
}
