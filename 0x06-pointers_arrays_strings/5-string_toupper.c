#include "main.h"
#include <string.h>

/**
 * string_toupper - changesall lowercase letters to uppercase
 *
 * @str: input string
 *
 * Return: Always 0
 */

char *string_toupper(char *str)
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
