#include "main.h"

/**
 * _isdigit - checks for digits letters
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	int num;

	for (num = 0;num <= 9; num++)
	{
	if (c == num)
	{
	return (1);
	}
	}

	return (0);
}
