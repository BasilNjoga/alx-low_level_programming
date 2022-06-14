#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: place to be copied to
 * @src: bytes to be coped from
 * @n: number of bytes to be coped
 *
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
