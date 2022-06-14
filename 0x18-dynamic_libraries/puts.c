#include "main.h"
#include <string.h>

/**
 * _puts - prints a strint to the standar output
 *
 * strlen - gives the length of the string
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
