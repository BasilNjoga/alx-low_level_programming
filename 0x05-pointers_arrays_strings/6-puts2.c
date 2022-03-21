#include "main.h"
#include "string.h"

/**
 * puts2 - prints out ever other character
 *
 * strlen - gives the length of string
 *
 * @str: string to be printed out
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
	while (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
