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

	grid = malloc(sizeof(int) * height * width);
	for (i = 0;i < height; i++)
	{
		for ( j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}
	}
	return (grid);
}
