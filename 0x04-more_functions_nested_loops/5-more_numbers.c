#include "main.h"

/**
 * more_numbers - prints all numbers
 *
 * Return: Always (0) - success
 */

void more_numbers(void)
{
	char num;
	char newnum;

	for (int i = 0; i <= 10; i++)
	{
	for (num = 48; num <= 57; num++)
	{
	_putchar(num);
	}
	for (num = 48; num <= 52; num++)
	{
	newnum = (num + "10") ;
	_putchar(newnum);
	}
	}
	_putchar('\n');
}
