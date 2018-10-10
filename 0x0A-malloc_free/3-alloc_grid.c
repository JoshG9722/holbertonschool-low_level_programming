#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates double array
 * @width: takes int
 * @height: takes int
 * return: int
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **r_ptr;

	r_ptr = malloc(height * sizeof(int *));

	if (r_ptr == NULL || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		r_ptr[i] = malloc(width * sizeof(int));
		if (r_ptr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(r_ptr[i]);
			}
			free(r_ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			r_ptr[i][j] = 0;
		}
	}
	return (r_ptr);
}
