#include "main.h"
#include "string.h"

/**
 * puts_half - prints half of a string
 *
 * strlen - gives the length of string
 *
 * @str: the string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int i;
	int halflen;

	len = strlen(str);
	if (len % 2 != 0)
	{
	halflen = ((len - 1) / 2) + 1;
	}
	else
	{
	halflen = (len / 2);
	}
	for (i = halflen; i < len; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

