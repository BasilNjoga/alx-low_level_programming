#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - entry point
 *
 * This program simply prints its name
 *
 *@argc: number count of command line arguments
 *@argv: array of characters
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
