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
	while ( n > 0)
	{
	for (i = 1; i <= n; i++)
	{
	_putchar('\\');
	}
	}
	_putchar('\n');
}



