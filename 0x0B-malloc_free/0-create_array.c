#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an arrays of chars
 *
 * @size: size of array used
 * @c: character declared
 *
 * Return : always 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	str = malloc(sizeof(char) * size);
	return (str)
	}
}
