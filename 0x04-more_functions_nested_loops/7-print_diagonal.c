#include "main.h"

/**
 * print_diagonal - prints a straigt line
 *
 * @n: number of times it prints
 *
 * Return: Always (0) - success
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar('\\');
	}
	_putchar('\n');
}



