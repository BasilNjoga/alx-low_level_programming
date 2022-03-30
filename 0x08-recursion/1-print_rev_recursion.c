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
	if (s[1] == '\0')
	{
	_putchar(s[0]);
	return ;
	}
	s = &s[1];
	_print_rev_recursion(s);
}
