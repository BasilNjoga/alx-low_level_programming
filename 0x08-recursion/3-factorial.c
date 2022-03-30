#include "main.h"

/**
 * factorial - gives the factorial of a number
 *
 * @n:factorial number
 *
 * Return: Always 0 - success
 */

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	return (n * factorial(n - 1));
}
