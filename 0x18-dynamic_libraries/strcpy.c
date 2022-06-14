#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies one string to another
 *
 * strlen - gives the length of the string
 *
 * @dest: buffer string
 *
 * @src: source string
 *
 * Return: Always 0 - Success
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}
