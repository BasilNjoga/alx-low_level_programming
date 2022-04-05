#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensinal array of integers
 *
 * @width: first dimension
 *
 * @height: second dimension
 *
 * Return: always 0
 */

int **alloc_grid(int width,int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
	{
	return (NULL);
	}
	else
	{
	grid = malloc(sizeof(int) * width * height);
	if (grid == NULL)
	{
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
		{
		grid[j][i] = 0;
		}
	}
	return (grid);
	}
}
