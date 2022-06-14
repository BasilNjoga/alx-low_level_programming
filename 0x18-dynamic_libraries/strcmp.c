#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 *
 * strlen - gives the length of the string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len;

	len = strlen(s1);
	for (i = 0; i < len; i++)
	{
	if (s1[i] != s2[i])
	{
	return (1);
	}
	}
	return (0);
}
