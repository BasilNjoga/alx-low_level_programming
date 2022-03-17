#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
		return (1);
		}
	}

	return (0);
}
