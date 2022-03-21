#include "main.h"
#include <string.h>

/**
 * print_rev - reverses a string and prints it out
 *
 * strlen - gives the length of a string
 *
 * @s: string to be reversed
 *
 * Return:  nothing
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}


