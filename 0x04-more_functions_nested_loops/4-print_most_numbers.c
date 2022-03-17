#include "main.h"

/**
 * print_most_numbers - prints all numbers
 *
 * Return: Always (0) - success
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
	if (num == 50 || num == 52)
	{
	continue;
	}
	_putchar(num);
	}
	_putchar('\n');
}
