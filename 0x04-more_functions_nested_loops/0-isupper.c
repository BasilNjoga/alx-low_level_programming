#include "main.h"

/**
 * _isupper - entry point
 *
 * This function checks for uppercase characters
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
