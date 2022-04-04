#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *newstr;
	int i;
	int len;

	if (str == NULL)
	{
	return (NULL);
	}
	else
	{
	len = strlen(str) + 1;
	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	newstr[i] = str[i];
	}
	return (newstr);
	}
}
