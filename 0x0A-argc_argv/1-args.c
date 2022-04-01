#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - entry point
 *
 * This program prints out the number of arguments
 *@argc: character count
 *@argv: array of characters
 *
 * Return: always 0
 */

int main(int argc, int argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
