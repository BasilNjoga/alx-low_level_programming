#include "main.h"

/**
 * print_diagonal - prints a straigt line
 *
 * @n: number of times it prints
 *
 * Return: Always (0) - Success
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
	for (i = 1; i <= j; i++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	}
	_putchar('\n');
}



