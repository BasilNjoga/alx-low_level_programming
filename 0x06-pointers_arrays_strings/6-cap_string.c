#include "main.h"
#include <string.h>

/**
 * cap_string - changesall lowercase letters to uppercase
 *
 * @str: input string
 *
 * Return: Always 0
 */

char *cap_string(char *str)
{
	char i;
	int len;
	int n;

	len = strlen(str);
	for (n = 0; n < len; n++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	if (str[n] == i)
	{
	str[n] = i - 32;
	}
	}
	}
	return (str);
}
