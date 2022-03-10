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
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}

