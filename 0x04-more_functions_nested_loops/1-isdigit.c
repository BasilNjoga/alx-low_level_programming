#include "main.h"

/**
 * _isdigit - checks for digits letters
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (c == num)
	{
	return (1);
	}
	else
	       	return (0);
	}
	return (0);
}
