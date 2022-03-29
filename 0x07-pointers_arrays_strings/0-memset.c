#include "main.h"

/** 
 * _memset - fills the first n bytes with a constant byte
 *
 * @s: memory
 * @b: character to fill
 * @n: number of bytes to be fill it
 *
 * Return: always 0 - success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for( i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
