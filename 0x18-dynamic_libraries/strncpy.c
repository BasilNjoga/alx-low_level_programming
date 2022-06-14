#include "main.h"

/**
 * *_strncpy -  copies a string onto another
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: integer to be copied
 *
 * Return: always 0
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
	return (dest);
}
