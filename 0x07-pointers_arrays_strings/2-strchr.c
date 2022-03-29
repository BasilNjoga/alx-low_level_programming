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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
