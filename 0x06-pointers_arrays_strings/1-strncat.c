#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 *
 * strlen - gives the lenght of a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: Always 0 - success
 */

char *_strncat(char *dest, char *src)
{
	int len, len2;
	int i;
	int n;

	len = strlen(dest);
	len2 = strlen(src);
	n = 0;
	for (i = len; i < len + len2; i++)
	{
	dest[i] =  src[n];
	n++;
	}

	return (dest);
}
