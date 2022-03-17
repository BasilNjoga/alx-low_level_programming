#include "main.h"

/**
 * print_most_numbers - prints almost all numbers minus 2 and 4
 *
 * Return: Always (0) - success
 */

void print_most_numbers(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
	if (num == 2 || num == 4)
	{
	continue;
	}
	putchar(num);
	}
	
	ch = "\n";
	putchar (ch);

	return (0)
}
