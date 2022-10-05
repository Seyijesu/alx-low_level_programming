#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimentional array
 *
 * @width: the width of arry
 *
 * @height: height of array
 *
 * Return: pointer array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, a, b;
	int **matx;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		matx = malloc(height * sizeof(int **));
		if (!matx)
		{
			free(matx);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			matx[i] = malloc(width * sizeof(int *));
			if (!matx[i])
			{
				for (j = 0; j <= i; j++)
					free(matx[j]);
				free(matx);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
			for (b = 0; b < width; b++)
				matx[a][b] = 0;
	}
	return (matx);
}
