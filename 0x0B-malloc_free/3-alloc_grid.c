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
	int grid[][];
	int i, j;
	
	printf("%d", width * height);
	grid = malloc(sizeof(int) * width * height);
	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
		{
		grid[j][i] = 0;
		}
	}
	return (grid);
}
