#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - entry point
 *
 * This program prints out the number of arguments
 *
 * @argc: character count
 * @argv: array of characters
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	UNUSED(argv);
	i = 0;
	while (i < argc - 1)
	{
	++i;
	}
	printf("%d\n", i);
	return (0);
}
