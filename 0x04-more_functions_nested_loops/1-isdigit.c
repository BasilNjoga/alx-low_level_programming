#include "main.h"

/**
 * _isdigit - checks if its a digit
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (c == num)
		{
		return (1);
		}
	}

	return (0);
}
