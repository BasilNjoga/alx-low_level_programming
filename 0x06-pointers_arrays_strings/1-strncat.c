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
 * @n: number of bytes
 *
 * Return: Always 0 - success
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	int k;

	len = strlen(dest);
	k = 0;
	for (i = len; i < len + n; i++)
	{
	dest[i] =  src[n];
	k++;
	}

	return (dest);
}
