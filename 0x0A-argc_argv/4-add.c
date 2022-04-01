#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int *summer(char **s);

int main(int argc, char *argv[])
{
	int num1, num2;
	
	if (argc < 2)
	{
	printf("0\n");
	}
	else
	{
	printf("%d\n",summer(argv));
	}
	return (0);
}

int summer(char **s)
{
	int i, len;
	int sum ;

	sum = 0;
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
	s[i] = atoi(s[i]);
	sum = sum + s[i];
	}
	return (sum);
}
