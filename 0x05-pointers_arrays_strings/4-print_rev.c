#include "main.h"
#include <string.h>

/*
 * print_rev - reverses a string and prints it out
 *
 * strlen - gives the length of a string
 *
 * strrev - reverses a string
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
	*s = strrev(s);
	for (i = 0; i < len; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}


