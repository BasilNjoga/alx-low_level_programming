#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count of number of arguments
 * @argv: array of strings
 *
 * This program adds two positive integers
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc < 2)
	{
	printf("0\n");
	}
	else
	{
	sum = 0;
	for (i = 0; i < argc; i++)
	{
	if (!isdigit(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}

	return (0);
}
