#include "main.h"

/**
 * _pow_recursion - returns the power of a value
 *
 * @x:first integer
 * @y:second integer
 *
 * Return: alwyas 0 - success
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
	return x;
	}
	y--;
	return (x * _pow_recursion(x, y));
}