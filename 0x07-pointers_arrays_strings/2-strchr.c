#include "main.h"
#include <string.h>

/**
 * _strchr - locates a string
 *
 * @s:pointer to the first occurrence of the string
 * @c: string to be searched for
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
	return (s);
	}
	else
	{
	return (NULL);
	}
	return (0);
	}
}
