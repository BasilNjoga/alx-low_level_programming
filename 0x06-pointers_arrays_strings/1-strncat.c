#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len2;
	int i;
	int k;

	len = strlen(dest);
	len2 = strlen(src);
	k = 0;
	for (i = len; i <= len + n; i++)
	{
	dest[i] = src[k];
	k++;
	}
	return (dest);
}
