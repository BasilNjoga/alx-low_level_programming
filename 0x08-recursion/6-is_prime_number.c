#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number to be checked
 *
 * Return: always 0- success
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
	return (0);
	}
	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

