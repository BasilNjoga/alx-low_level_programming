#include "main.h"

/**
 * _strlen_recursion - gives the length of a string
 *
 * @s: string 
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
	return (0);
	}
	s = &s[1];
	return (_strlen_recursion(s) + 1);

}
