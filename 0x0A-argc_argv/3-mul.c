#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count of number of arguments
 * @argv: array of strings
 *
 * This program multiplies two integers
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int mult;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
