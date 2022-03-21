#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * strlen - gives the lenght of the string
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	int n;

	len = strlen(s);
	n = strlen(s) - 1;
	for (i = 0; i < len; i++)
	{
	s[i] = s[n];
	n--;
	}
}
