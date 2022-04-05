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
	
	printf("%d", width * height);
	grid = malloc(sizeof(int) * (width + 1) * (height + 1));
	return (grid);
}
