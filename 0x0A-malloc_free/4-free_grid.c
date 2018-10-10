#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - function to free a grid
 * @grid: passed pointer to pointer of grid
 * @height: passed height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = height; -1 < i; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
