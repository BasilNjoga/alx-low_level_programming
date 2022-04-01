#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: character count
 * @argv: array of strings
 *
 * This program prints all the arguments it receives
 *
 * Return: always 0 - success
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
	printf("%s\n",argv[i]);
	}
	return (0);
}
