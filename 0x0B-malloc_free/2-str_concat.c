#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *str;
	int i, n;

	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	str[i] = s1[i];
	}
	str[len1 - 1] = ' ';
	n = 0;
	for (i = len1; i < len1 + len2; i++)
	{
	str[i] = s2[n];
	n++;
	}
	return (str);
}
