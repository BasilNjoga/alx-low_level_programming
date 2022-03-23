#include "main.h"

/**
 * _strncpy: copies a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: integer to be copied
 *
 * return: Always 0 - success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	k = 0;
	for (i = 0; i < n; i++)
	{
	dest[i] = src[k];
	k++;
	}
	return dest;
}
