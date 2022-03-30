#include "main.h"

/**
 * _puts_recursion - prints a string followed by anew line
 *
 * @s: string to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
	return ;
	}
	_putchar(s[0]);
	s = &s[1];
	_puts_recursion(s);
}

	
