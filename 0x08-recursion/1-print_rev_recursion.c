#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string followed by anew line
 *
 * @s: string to be printed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s) - 1;
	if (len == 0)
	{
	_putchar('\n');
	return;
	}
	_putchar(s[len]);
	s[len] = '\0';
	_print_rev_recursion(s);
}
