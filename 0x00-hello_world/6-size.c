#include <stdio.h>

/**
 * main - Entry point
 *
 * This program gives the size of values
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	printf("Size of a char: %ld", sizeof(char));
	printf("Size of an int: %ld", sizeof(int));
	printf("Size of a long int: %ld", sizeof(long));
	printf("Size of a long long int: %ld", sizeof(long long));
	printf("Size of a float: %ld", sizeof(float));

	return (0);
}

