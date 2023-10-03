#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function of 2 dimesion array
 * @grid: 2d grid
 * @height: grid height dimesion
 * Return: ;
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
