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

	if (c >= '0' && <= '9')
	{
	return (1);
	}
	else
		return (0);
}
